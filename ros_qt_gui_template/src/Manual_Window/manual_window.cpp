#include "manual_window.h"
#include "ui_manual_window.h"
#include <QMessageBox>
#include <QDebug>
#include <QWidget>

Manual_Window::Manual_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manual_Window)
{
    ui->setupUi(this);
    this->setWindowTitle("Turtlesim Teleoparation ");
    ros_f = new _Ros();
    qDebug() << "Turtlesim Teleoparation" ;
}

Manual_Window::~Manual_Window()
{
    delete ui; delete ros_f;
}

void Manual_Window::on_info_button_clicked()
{
    QMessageBox::about(this,"Control Info ",info_message);
}
//Takes user's from keyboard for teleoperation
void Manual_Window::keyPressEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            //forward
            twist_input.linear.x = 1;
            ros_f->set_twist(twist_input);
            ros_f->twist_publisher();
            ui->forward_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_2:
            //backward
            twist_input.linear.x = -1;
            ros_f->set_twist(twist_input);
            ros_f->twist_publisher();
            ui->back_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_6:
            //right
                twist_input.angular.z = -1;
                ros_f->set_twist(twist_input);
                ros_f->twist_publisher();
            ui->right_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_4:
            //left
            twist_input.angular.z = 1;
            ros_f->set_twist(twist_input);
            ros_f->twist_publisher();
            ui->left_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_Z:

            break;
        }

}
//Keyboard inputs released
void Manual_Window::keyReleaseEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            //forward
            ui->forward_label->setStyleSheet("");
            break;
        case Qt::Key_2:
            //backward
            ui->back_label->setStyleSheet("");
            break;
        case Qt::Key_6:
            //right
            twist_input.angular.z = 0;
            ros_f->set_twist(twist_input);
            ros_f->twist_publisher();
            ui->right_label->setStyleSheet("");
            break;
        case Qt::Key_4:
            //left
        twist_input.angular.z = 0;
        ros_f->set_twist(twist_input);
        ros_f->twist_publisher();
            ui->left_label->setStyleSheet("");
            break;
        case Qt::Key_Z:
            qDebug() << "stop";
//            ui->back_label->setStyleSheet("");
            break;
        }

}

