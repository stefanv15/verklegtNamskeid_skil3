#include "mainwindow.h"
#include "scientistswindow.h"
#include "ui_mainwindow.h"
#include "computerwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Exit_clicked()
{
    exit(1);
}

void MainWindow::on_scientists_button_clicked()
{
    ScientistsWindow scientistswindow;
    scientistswindow.setModal(true);
    scientistswindow.exec();
}

void MainWindow::on_computers_button_clicked()
{
    ComputerWindow computerwindow;
    computerwindow.setModal(true);
    computerwindow.exec();
}
