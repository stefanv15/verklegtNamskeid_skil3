#include "relationwindow.h"

relation::relation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::relation)
{
    ui->setupUi(this);
}

relation::~relation()
{
    delete ui;
}
