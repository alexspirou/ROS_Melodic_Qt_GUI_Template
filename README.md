# ROS_Melodic_Qt_GUI_Template
I have created a ROS_Melodic_Qt_GUI_Template, a user-friendly Graphical User Interface developed using the Qt framework. This GUI is specifically designed to facilitate the control of your Robot and retrieve data from sensors in any ROS project. It aims to provide a simpler and more customizable alternative to the qt-ros application package generated with the command catkin_create_qt_pkg. Moreover, the CMakeLists.txt file is already configured with the necessary parameters to ensure its executability.

To enhance your understanding of this GUI and ease your usage, I have uploaded the project for anyone encountering difficulties in this area. It serves as a valuable resource, particularly due to the limited and unclear information available on the internet regarding RUI-Qt GUI creation.

One notable feature of this GUI is its seamless integration with the turtlesim, allowing you to control the turtle by simply pressing the "Teleop" button and utilizing your keyboard. For a comprehensive list of the specific keys and their functions, please refer to the "Keys info" button within the interface.

To install and use this GUI effectively, please follow the instructions provided below.


![](/resources/gui.gif)


## Installation
### Install qt build for ROS Melodic.
```bash
sudo apt-get install ros-melodic-qt-build
```
### Create a catkin workspace or cd if you have already one
```bash
mkdir -p ~/catkin_ws/src
cd catkin_ws/src/
```
### Clone repository to src folder
```bash
git clone https://github.com/alexspirou/ROS_Melodic_Qt_GUI_Template.git
```
### Install turtlesim
```bash
sudo apt-get install ros-melodic-turtlesim
```
### Catkin make
```bash
cd ~/catkin_ws/
catkin_make
```


# Run GUI
### First run a rosmaster
```bash
roscore
```
### Run turtlesim in a new terminal
```bash
rosrun turtlesim turtlesim_node
```
### Open another terminal, source your bashrc file and RUN GUI
```bash
source devel/setup.bash
rosrun ros_qt_gui_template ros_qt_gui_template 
```

NOTE: If you want to edit your project from qtcreator watch this tutorial
```bash
https://www.youtube.com/watch?v=Can7zppN-Kg&t=519s
```
