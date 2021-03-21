#include <QtGui>
#include <QApplication>
#include "ros/ros.h"
#include "mainwindow.h"


int main(int argc, char **argv) {
    QApplication a(argc, argv);
    ros::init(argc, argv, "ROS_QT_GUI_Template");

    MainWindow w;
    w.show();

    qDebug() << "main";

    return a.exec();

}

