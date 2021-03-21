#include "manual_window.h"
#include "ui_manual_window.h"

Manual_Window::Manual_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manual_Window)
{
    ui->setupUi(this);
}

Manual_Window::~Manual_Window()
{
    delete ui;
}
