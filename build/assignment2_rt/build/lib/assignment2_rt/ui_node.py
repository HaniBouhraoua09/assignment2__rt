import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys, select, termios, tty

# Instructions for the user
msg = """
Control The Robot!
---------------------------
w : move forward
x : move backward
a : turn left
d : turn right
s : stop

CTRL-C to quit
"""

class UIController(Node):
    def __init__(self):
        super().__init__('ui_node')
        # NOTICE: We publish to 'input', not directly to the robot!
        # The Safety Node will pick this up.
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel_input', 10)
        self.get_logger().info("UI Node Started")

    def get_key(self):
        # This function reads a single character from the keyboard
        tty.setraw(sys.stdin.fileno())
        rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
        if rlist:
            key = sys.stdin.read(1)
        else:
            key = ''
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, termios.tcgetattr(sys.stdin))
        return key

    def run(self):
        print(msg)
        while True:
            key = self.get_key()
            if key == '\x03': # CTRL-C to quit
                break

            cmd = Twist()
            # Logic to map keys to velocities
            if key == 'w':
                cmd.linear.x = 1.0
            elif key == 'x':
                cmd.linear.x = -1.0
            elif key == 'a':
                cmd.angular.z = 1.0
            elif key == 'd':
                cmd.angular.z = -1.0
            elif key == 's':
                cmd.linear.x = 0.0
                cmd.angular.z = 0.0
            else:
                # If no key is pressed, we just loop (or you could send stop)
                continue

            # Send the command to the Safety Node
            self.publisher_.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    # We need to save the terminal settings to restore them later
    settings = termios.tcgetattr(sys.stdin)
    
    node = UIController()
    try:
        node.run()
    except Exception as e:
        print(e)
    finally:
        node.destroy_node()
        rclpy.shutdown()
        # Restore terminal settings so your enter key works again
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)

if __name__ == '__main__':
    main()
