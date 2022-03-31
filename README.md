# ROS_Melodic_Qt_GUI_Template
I was trying to create a RUI-Qt GUI and I had a hard time because there are not many and not clear resources on the Internet. For that reason I am uploading this project for anyone who finds it difficult as well.

ROS_Melodic_Qt_GUI_Template is a Graphical User Interface programmed with Qt framework. It's a useful GUI for any ROS project that allows you to control your Robot and reading data from sensors. You can also generate a qt-ros application package with command catkin_create_qt_pkg but ROS_Melodic_Qt_GUI_Template is simpler and more customisable. Also CMakeLists.txt has the necessary parameters setted up to make it executable.

You can check the GUI by controling turtlesim, press "Teleop" button and move turtle with your keyboard. 
You can see the specific keys, in "Keys info" button.
For installation follow the instructions below.

If you find it useful give a :star: :)

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
