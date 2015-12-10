#include "scientists.h"
#include "ui_scientists.h"

scientists::scientists(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scientists)
{
    ui->setupUi(this);
}

scientists::~scientists()
{
    delete ui;
}
