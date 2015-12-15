#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "domain.h"

using namespace std;

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);   //Sjálfgefinn smiður.
    ~MainWindow();                              //Eyðir.

private slots:
    void on_button_main_fun_clicked();          //Opnar link á lag á www.youtube.com.
    void on_button_main_computer_clicked();     //Opnar computer gluggann.
    void on_button_main_quit_clicked();         //Lokar forriti.
    void on_button_main_scientist_clicked();    //Opnar scientist gluggann.

private:                                        //Private breytur.
    Ui::MainWindow *ui;
    Domain m_domain;
};

#endif // MAINWINDOW_H
