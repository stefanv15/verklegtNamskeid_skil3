#include "scientistswindow.h"
#include "ui_scientistswindow.h"

ScientistsWindow::ScientistsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScientistsWindow)
{
    ui->setupUi(this);
}

ScientistsWindow::~ScientistsWindow()
{
    delete ui;
}
