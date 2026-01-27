import os
import launch
import pathlib
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController



def load_urdf(path):
    with open(path,'r') as file :
        return file.read()

def generate_launch_description():
    package_dir = get_package_share_directory('my_package')
    robot_description_path = os.path.join(package_dir, 'resource', 'AUREA.urdf')

    robot_description = load_urdf(robot_description_path)

    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'training_simulation.wbt')
    )

    my_robot_driver = WebotsController(
        robot_name='AUREA',
        parameters=[
            {'robot_description': robot_description_path},
            {'use_sim_time': True},
        ]
    )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[
            {'robot_description': robot_description},
            {'use_sim_time': True},
        ]
    )
         

    return LaunchDescription([
        webots,
        my_robot_driver,
        robot_state_publisher,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        )
    ])
