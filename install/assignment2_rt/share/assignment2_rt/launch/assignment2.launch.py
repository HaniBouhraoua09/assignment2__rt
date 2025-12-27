import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    # 1. Find the professor's package
    pkg_gazebo = get_package_share_directory('bme_gazebo_sensors')

    # 2. Include the simulation launch file (World + Robot)
    simulation = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_gazebo, 'launch', 'spawn_robot.launch.py')
        )
    )

    # 3. Define your Safety Node (The Brain)
    safety_node = Node(
        package='assignment2_rt',
        executable='safety_controller',
        name='safety_node',
        output='screen'
    )

    # 4. Run them both together
    return LaunchDescription([
        simulation,
        safety_node
    ])
