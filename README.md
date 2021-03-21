# ROS_Melodic_Qt_GUI_Template
ROS_Melodic_Qt_GUI_Template is a Graphical User Interface programmed with Qt framework. It's a useful GUI for any ROS project that allows you to control your Robot and reading data from sensors. You can also generate a qt-ros application package with command catkin_create_qt_pkg but ROS_Melodic_Qt_GUI_Template is simpler and more customisable. Also CMakeLists.txt has the necessary parameters setted up to make it executable.

If you find it useful give a star :)

![](/resources/gui.gif)


## Installation

### Create a catkin workspace or if cd if you have already one
```bash
mkdir -p ~/catkin_ws/src
```
### Clonde repository to src folder
```bash
git clone https://github.com/alexspirou/ROS_Melodic_Qt_GUI_Template.git
```
### Catkin make
```bash
cd ~/catkin_ws/
catkin_make
```

After install Qt for ROS it needs to install qt build.



```bash
sudo apt-get install ros-melodic-qt-build
```
# Create a workspace folder
```bash
