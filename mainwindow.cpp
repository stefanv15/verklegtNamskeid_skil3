#include "mainwindow.h"
#include "scientistswindow.h"
#include "ui_mainwindow.h"
#include "computerwindow.h"
#include <QtWebKitWidgets/QWebView>
#include <QDesktopServices>
#include <QUrl>
#include <vector>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//Eyðir.
MainWindow::~MainWindow()
{
    delete ui;
}

//Opnar link á lag á youtube.com.
void MainWindow::on_button_main_fun_clicked()
{
    QString link = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
    QDesktopServices::openUrl(QUrl(link));
}

//Opnar computer gluggann.
void MainWindow::on_button_main_computer_clicked()
{
    ComputerWindow computerwindow;  // Computer list gluggi verður til
    computerwindow.setModal(true);  // Stilla gluggann þannig að hann opnist án þess að hægt sé að komast í glugga bakvið
    computerwindow.exec();          // Opna glugga
}

//Lokar forriti.
void MainWindow::on_button_main_quit_clicked()
{
    m_domain.saveAllData();
    exit(1);
}

//Opnar Scientist gluggann.
void MainWindow::on_button_main_scientist_clicked()
{
    ScientistsWindow scientistswindow;
    scientistswindow.setModal(true);
    scientistswindow.exec();
}
