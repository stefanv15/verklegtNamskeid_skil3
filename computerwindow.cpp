#include "computerwindow.h"
#include "ui_computerwindow.h"
#include "domain.h"
#include "computers.h"

ComputerWindow::ComputerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputerWindow)
{
    ui->setupUi(this);
}

ComputerWindow::~ComputerWindow()
{
    delete ui;
}
