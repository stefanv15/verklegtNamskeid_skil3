#include "show_person.h"
#include "ui_show_person.h"

show_person::show_person(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_person)
{
    ui->setupUi(this);
}

show_person::~show_person()
{
    delete ui;
}
