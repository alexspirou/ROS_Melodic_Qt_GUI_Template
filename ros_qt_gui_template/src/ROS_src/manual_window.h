#ifndef MANUAL_WINDOW_H
#define MANUAL_WINDOW_H

#include <QDialog>

namespace Ui {
class Manual_Window;
}

class Manual_Window : public QDialog
{
    Q_OBJECT

public:
    explicit Manual_Window(QWidget *parent = nullptr);
    ~Manual_Window();

private:
    Ui::Manual_Window *ui;
};

#endif // MANUAL_WINDOW_H
