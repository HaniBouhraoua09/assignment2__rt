import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
# Import my custom definitions
from assignment2_custom_msg.msg import ObstacleInfo
from assignment2_custom_msg.srv import SetThreshold, GetLastVelocity
from collections import deque
import time

class SafetyNode(Node):
    def __init__(self):
        super().__init__('safety_node')

        #  ASSIGNMENT REQ: Allow user to change threshold 
        self.safety_threshold = 1.0  
        self.moving_back = False     

        #  ASSIGNMENT REQ: Average of last 5 inputs 
        # deque is a list that automatically discards old items when full
        self.vel_history = deque(maxlen=5)

        #  SUBSCRIBERS 
        # 1. Listen to Laser (Simulated robot publishes on /scan)
        self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)
        
        # 2. Listen to User Commands (Interrupted Control)
        # The UI publishes to /cmd_vel_input, we decide if we pass it to the robot
        self.create_subscription(Twist, '/cmd_vel_input', self.input_callback, 10)

        #  PUBLISHERS 
        # 1. The actual command to the robot
        self.robot_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # 2. ASSIGNMENT REQ: Publish Custom Message
        self.info_pub = self.create_publisher(ObstacleInfo, '/obstacle_info', 10)

        #  SERVICES 
        self.create_service(SetThreshold, 'set_threshold', self.set_threshold_callback)
        self.create_service(GetLastVelocity, 'get_last_velocity', self.get_velocity_callback)

        self.get_logger().info("Safety Node Started. Default Threshold: 1.0m")

    def input_callback(self, msg):
        """Capture user input, store it, and forward it if safe."""
        # Store for the averaging service
        self.vel_history.append(msg)

        # Only move if we are not currently reversing from a wall
        if not self.moving_back:
            self.robot_pub.publish(msg)

    def scan_callback(self, msg):
        """Analyze laser data for obstacles."""
        
        # 1. Find the closest point in the laser scan
        # We filter out '0.0' or 'infinity' which are errors
        valid_ranges = [r for r in msg.ranges if r > 0.05 and r < 100.0]
        if not valid_ranges:
            return
            
        min_dist = min(valid_ranges)
        min_index = msg.ranges.index(min_dist)

        # 2. Determine Direction (Left/Front/Right)
        # The laser array is usually 0 (right) to N (left). 
        # We split the array into 3 sectors.
        num_readings = len(msg.ranges)
        one_third = num_readings // 3
        
        direction = "Unknown"
        if min_index < one_third:
            direction = "Right"
        elif min_index < 2 * one_third:
            direction = "Front"
        else:
            direction = "Left"

        # 3. ASSIGNMENT REQ: Publish Custom Message
        info_msg = ObstacleInfo()
        info_msg.distance = float(min_dist)
        info_msg.direction = direction
        info_msg.threshold = float(self.safety_threshold)
        self.info_pub.publish(info_msg)

        # 4. ASSIGNMENT REQ: Safety Logic (Move Back)
        if min_dist < self.safety_threshold and not self.moving_back:
            self.get_logger().warn(f"Too Close! ({min_dist:.2f}m). Moving Back!")
            self.execute_move_back()

    def execute_move_back(self):
        """Stops user control and reverses the robot."""
        self.moving_back = True
        
        # Create a reverse command
        stop = Twist()
        reverse = Twist()
        reverse.linear.x = -1.0 # Back up!
        
        # Send reverse command
        self.robot_pub.publish(reverse)
        
        # Wait 1 second (simple blocking for assignment purposes)
        time.sleep(1.0) 
        
        # Stop
        self.robot_pub.publish(stop)
        
        self.moving_back = False
        self.get_logger().info("Safety maneuver finished. Control returned.")

    # --- SERVICE CALLBACKS ---

    def set_threshold_callback(self, request, response):
        self.safety_threshold = request.new_threshold
        response.success = True
        self.get_logger().info(f"Threshold updated to {self.safety_threshold}")
        return response

    def get_velocity_callback(self, request, response):
        if not self.vel_history:
            response.avg_linear = 0.0
            response.avg_angular = 0.0
            return response

        # Calculate averages of the stored history
        sum_lin = sum(t.linear.x for t in self.vel_history)
        sum_ang = sum(t.angular.z for t in self.vel_history)
        
        response.avg_linear = sum_lin / len(self.vel_history)
        response.avg_angular = sum_ang / len(self.vel_history)
        
        return response

def main(args=None):
    rclpy.init(args=args)
    node = SafetyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
