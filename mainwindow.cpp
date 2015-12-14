#include "mainwindow.h"
#include "scientistswindow.h"
#include "ui_mainwindow.h"
#include "computerwindow.h"
#include <vector>
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

void MainWindow::on_scientists_button_clicked()
{
    ScientistsWindow scientistswindow;
    scientistswindow.setModal(true);
    scientistswindow.exec();
}

void MainWindow::on_computers_button_clicked()
{
    ComputerWindow computerwindow;  // Computer list gluggi verður til
    computerwindow.setDomain(m_domain);
    computerwindow.setModal(true);  // Stilla gluggann þannig að hann opnist án þess að hægt sé að komast í glugga bakvið
    computerwindow.exec();          // Opna glugga
}


void MainWindow::on_Quit_clicked()
{
    exit(1);
}
