# ROS 2 Autonomous Safety Controller & Remote UI

**Author:** Bouhraoua Hani  
**Student:** 8314923   
**Date:** December 23, 2025  




## 📝 Project Overview
This project implements a **Safety Controller** and a **Remote User Interface** for a mobile robot in a simulated environment.

The system consists of three main components:
1. **Safety Node**  
   Monitors laser scans (`/scan`) to detect obstacles. It halts the robot if an obstacle is within a safety threshold (default **1.0 m**) and publishes obstacle metadata.
2. **UI Node**  
   A keyboard-based remote controller that sends velocity commands to the system.
3. **Custom Interfaces**  
   Custom messages and services for threshold adjustment and velocity averaging.

---

## 🚀 Features
- **Automatic Collision Avoidance:**  
  The robot stops and reverses automatically if an obstacle is detected within the safety threshold.
- **Manual Control:**  
  Keyboard interface (WASD) to drive the robot.
- **Custom Message:**  
  Publishes `ObstacleInfo` containing:
  - Obstacle distance  
  - Obstacle direction (Front / Left / Right)  
  - Current safety threshold
- **Services:**
  - `set_threshold`: Dynamically change the safety distance.
  - `get_last_velocity`: Retrieve the average velocity of the last 5 commands.

---

## 📦 Prerequisites
- **ROS 2** (Humble or Jazzy)
- **Gazebo Simulator**

### 1. Install Simulation Dependencies
Install the ROS–Gazebo bridge to enable communication between ROS 2 and Gazebo:
```bash
sudo apt update
sudo apt install ros-jazzy-ros-gz
# If you are using ROS Humble, use:
# sudo apt install ros-humble-ros-gz
```


## 🗂️ Workspace Setup

Navigate to your ROS 2 workspace source folder and clone the required repositories:

```cd ~/ros2_ws/src
```

# Clone this repository
```git clone <YOUR_REPO_URL_HERE>
```

# Clone the simulator package (Professor's environment)
```git clone https://github.com/CarmineD8/bme_gazebo_sensors.git
```


## 🛠️ Build Instructions

Build the workspace using colcon.  
If you encounter build errors, remove the build/ and install/ folders and try again.

```cd ~/ros2_ws  
colcon build  
source install/setup.bash
```


## ▶️ How to Run

You need two terminals.

### Terminal 1: Launch Simulation & Safety Node

This launches Gazebo, spawns the robot, and starts the safety controller.

```source install/setup.bash  
ros2 launch assignment2_rt assignment2.launch.py
```


### Terminal 2: Launch User Interface

This starts the keyboard-based controller.

```source install/setup.bash  
ros2 run assignment2_rt ui_node
```


## 🎮 Controls

Make sure Terminal 2 is focused when controlling the robot.

```Key | Action  
--- | ---  
W | Move Forward  
X | Move Backward  
A | Turn Left  
D | Turn Right  
S | Stop  
CTRL + C | Quit  
```

## 📡 Topics & Services

### Published Topics

/cmd_vel  
Final velocity command sent to the robot (managed by the Safety Node).

/obstacle_info  
Custom message containing obstacle distance, direction, and threshold.


### Subscribed Topics

/scan  
Laser scan data.

/cmd_vel_input  
Raw velocity commands from the UI.


### Services

/set_threshold (assignment2_custom_msg/SetThreshold)  
Change the safety distance dynamically.

/get_last_velocity (assignment2_custom_msg/GetLastVelocity)  
Retrieve the average velocity of the last 5 commands.


