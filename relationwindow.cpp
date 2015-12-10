#include "relationwindow.h"
#include "ui_relationwindow.h"
#include "domain.h"
#include "computers.h"
#include "person.h"

RelationWindow::RelationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RelationWindow)
{
    ui->setupUi(this);
}

RelationWindow::~RelationWindow()
{
    delete ui;
}
