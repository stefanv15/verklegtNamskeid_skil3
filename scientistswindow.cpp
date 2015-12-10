#include "scientistswindow.h"
#include "ui_scientistswindow.h"
#include "domain.h"
#include "person.h"

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
