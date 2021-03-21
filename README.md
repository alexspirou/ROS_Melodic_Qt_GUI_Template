# ROS_Melodic_Qt_GUI_Template
ROS_Melodic_Qt_GUI_Template is a Graphical User Interface programmed with Qt framework. It's a useful GUI for any ROS project that allows you to control your Robot and reading data from sensors.

![](/Resources/gui.png)


## Installation
First you need to install Qt ROS plugin. 
From:
https://ros-qtc-plugin.readthedocs.io/en/latest/_source/How-to-Install-Users.html

Go to:
Installation Procedure for Ubuntu 18.04
Download Installer:
    --->Bionic Online Installer (Recommended)
When the download completes it needs to allowed as executable.
 -Rigt click
 -Properties
 -Permissions
 -Allow executing file as program
 -Double click and install Qt 
 
After install Qt for ROS it needs to install qt build.
```bash
sudo apt-get install ros-melodic-qt-build
```

# Create a workspace folder
```bash
