#include <vector>
#include "relationwindow.h"
#include "ui_relationwindow.h"
#include "domain.h"
#include "computers.h"
#include "person.h"
#include "mainwindow.h"
#include "addscientist.h"

#include "scientistswindow.h"
#include "ui_scientistswindow.h"

#include "relationwindow.h"
#include <QMessageBox>


RelationWindow::RelationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RelationWindow)
{
    ui->setupUi(this);

    ui->table_relation_schientists->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_relation_schientists->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_relation_schientists->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->table_relation_schientists->hideColumn(4);
}

RelationWindow::~RelationWindow()
{
    delete ui;
}

void RelationWindow::setDomain(Domain domain)
{
    m_domain = domain;
    displayAllSchientists();
}

void RelationWindow::displayAllSchientists()
{
    vector<Person> schientists = m_domain.getList();
    displayScientists(schientists);
}

void RelationWindow::displayScientists(vector<Person> schientists)
{
    ui->table_relation_schientists->clear();
    ui->table_relation_schientists->setColumnCount(4);

    QStringList TableHeader;
    TableHeader<<"Scientist name"<<"Gender"<<"Year born"<<"Year died"<<"id";


    ui->table_relation_schientists->setHorizontalHeaderLabels(TableHeader);

    ui->table_relation_schientists->setRowCount(schientists.size());

    //ui->table_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(unsigned int i = 0; i < schientists.size(); i++)
    {
        ui->table_relation_schientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(schientists[i].getName())));
        ui->table_relation_schientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(schientists[i].getGender() == "m"?"Male":"Female")));
        ui->table_relation_schientists->setItem(i, 2, new QTableWidgetItem(QString::number(schientists[i].getDayOfBirth())));
        if (schientists[i].getDayOfDeath() > 0)
            ui->table_relation_schientists->setItem(i, 3, new QTableWidgetItem(QString::number(schientists[i].getDayOfDeath())));
        else
            ui->table_relation_schientists->setItem(i, 3, new QTableWidgetItem(QString::fromStdString("Still alive")));
        ui->table_relation_schientists->setItem(i, 4, new QTableWidgetItem(QString::number(schientists[i].getId())));

    }
}

void RelationWindow::on_button_relation_return_clicked()
{
    this->close();
}
