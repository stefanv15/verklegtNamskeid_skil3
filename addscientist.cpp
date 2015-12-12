#include "addscientist.h"
#include "ui_addscientist.h"

AddScientist::AddScientist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddScientist)
{
    ui->setupUi(this);
}

AddScientist::~AddScientist()
{
    delete ui;
}

void AddScientist::on_button_cancel_clicked()
{
    this->close();
}

void AddScientist::on_check_isdead_stateChanged(int arg1)
{
    ui->line_yeardied->setEnabled(arg1);
}
