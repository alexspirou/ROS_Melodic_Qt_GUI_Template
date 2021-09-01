#include "mainwindow.h"
#include "ui_mainwindow.h"
//QT
#include "QMessageBox"
#include "QDebug"
#include "QProcess"

MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),
    ui (new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("ROS-QT GUI Template");
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(pose_values()));
    timer->start(500);
    manual_window = new Manual_Window();
    //ROS
    ros_f = new _Ros();
    qDebug() << "Constructor OK";

}
MainWindow::~MainWindow()
{
    delete ui;
    ui = NULL;
    delete ros_f;
    ros_f =NULL;
}


void MainWindow::on_Teleop_clicked()
{
    manual_window->show();
    manual_window->exec();
}

void MainWindow::on_Exit_clicked()
{
    qApp->exit();
}

void MainWindow::pose_values()
{
    ui->x_lcd->display(turtlesim_pose.x);
    ui->y_lcd->display(turtlesim_pose.y);
    ui->theta_lcd->display(turtlesim_pose.theta);
    ui->linear_lcd->display(turtlesim_pose.linear_velocity);
    ui->angular_lcd->display(turtlesim_pose.angular_velocity);
    ros_f->ultrasonic_subscriber();
}


