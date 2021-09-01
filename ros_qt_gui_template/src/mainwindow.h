#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "Manual_Window/manual_window.h"

//ros
#include "ros/ros.h"
#include "../src/ROS_src/_ros.h"
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
Q_OBJECT
public:

    explicit MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();

public Q_SLOTS:
    void pose_values();
    void on_Teleop_clicked();
    void on_Exit_clicked();

/*/private slots: Note if you want to create function from mainwindow.ui delete
 * private slots and put them in public QSLOTS
 * */


private:
    Ui::MainWindow *ui;
    _Ros* ros_f;
    QTimer* timer;
    Manual_Window* manual_window;
    turtlesim::Color colour_input;


};

#endif // MAINWINDOW_H
