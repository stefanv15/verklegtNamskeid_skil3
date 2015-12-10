#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    void on_Exit_clicked();

    void on_scientists_button_clicked();

    void on_computers_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
