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

    void on_scientists_button_clicked();

    void on_computers_button_clicked();

    void on_Quit_clicked();

private:
    Ui::MainWindow *ui;
    Domain m_domain;
};

#endif // MAINWINDOW_H
