#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "domain.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_button_main_fun_clicked();

    void on_button_main_computer_clicked();

    void on_button_main_quit_clicked();

    void on_button_main_scientist_clicked();

private:
    Ui::MainWindow *ui;
    Domain m_domain;
};

#endif // MAINWINDOW_H
