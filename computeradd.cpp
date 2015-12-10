#include "computeradd.h"
#include "ui_computeradd.h"

ComputerAdd::ComputerAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputerAdd)
{
    ui->setupUi(this);
}

ComputerAdd::~ComputerAdd()
{
    delete ui;
}
