#include "show_computer.h"
#include "ui_show_computer.h"

show_computer::show_computer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_computer)
{
    ui->setupUi(this);
}

show_computer::~show_computer()
{
    delete ui;
}
