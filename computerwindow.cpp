#include "computerwindow.h"
#include "ui_computerwindow.h"

computerwindow::computerwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::computerwindow)
{
    ui->setupUi(this);
}

computerwindow::~computerwindow()
{
    delete ui;
}
