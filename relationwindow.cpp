#include <vector>
#include "relationwindow.h"
#include "ui_relationwindow.h"
#include "computerwindow.h"
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

    ui->table_relation_computers->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_relation_computers->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_relation_computers->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->table_relation_computers->hideColumn(5);

    ui->table_relation_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_relation_scientists->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_relation_scientists->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->table_relation_scientists->hideColumn(5);

    fillLists();
}

void RelationWindow::setDomain(Domain domain)
{
    m_domain = domain;
    fillLists();
}

void RelationWindow::fillLists()
{
    vector<Computers> compList = m_domain.getComputerList();
    vector<Person> persList = m_domain.getList();
    displayComputer(compList);
    displayScientist(persList);
}

void RelationWindow::displayComputer(vector<Computers> computer)
{
    ComputerWindow m_computerwindow;
    ui->table_relation_computers->clear();
    ui->table_relation_computers->setColumnCount(6);

    QStringList TableHeader;
    TableHeader<<"Computer name"<<"Computer type"<<"Was created"<<"Year created"<<"Related scientists"<<"id";
    ui->table_relation_computers->setHorizontalHeaderLabels(TableHeader);
    ui->table_relation_computers->setRowCount(computer.size());

    for(unsigned int i = 0; i < computer.size(); i++)
    {
        ui->table_relation_computers->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(computer[i].getNameOfCpu())));
        ui->table_relation_computers->setItem(i, 1, new QTableWidgetItem(m_computerwindow.getType(computer[i].getTypeOfCpu())));
        ui->table_relation_computers->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(computer[i].getWasBuilt()=="y"?"Yes":"No")));
        if (computer[i].getYearBuilt()!=0)
           ui->table_relation_computers->setItem(i, 3, new QTableWidgetItem(QString::number(computer[i].getYearBuilt())));
        else
            ui->table_relation_computers->setItem(i, 3, new QTableWidgetItem(QString::fromStdString("Not built")));

        //ui->tableWidget->setItem(1, 0, new QTableWidgetItem(list[i].getName()));

        ui->table_relation_computers->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(m_domain.getPersList(computer[i].getId()))));
        ui->table_relation_computers->setItem(i, 5, new QTableWidgetItem(QString::number(computer[i].getId())));
    }
}

void RelationWindow::displayScientist(vector<Person> persons)
{
    ui->table_relation_scientists->clear();
    ui->table_relation_scientists->setColumnCount(6);

    QStringList TableHeader;
    TableHeader<<"Scientist name"<<"Gender"<<"Year born"<<"Year died"<<"Related computers"<<"id";


    ui->table_relation_scientists->setHorizontalHeaderLabels(TableHeader);

    ui->table_relation_scientists->setRowCount(persons.size());

    //ui->table_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(unsigned int i = 0; i < persons.size(); i++)
    {
       // Person currentScientist = persons[i];
        ui->table_relation_scientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(persons[i].getName())));
        ui->table_relation_scientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(persons[i].getGender() == "m"?"Male":"Female")));
        ui->table_relation_scientists->setItem(i, 2, new QTableWidgetItem(QString::number(persons[i].getDayOfBirth())));
        if (persons[i].getDayOfDeath() > 0)
            ui->table_relation_scientists->setItem(i, 3, new QTableWidgetItem(QString::number(persons[i].getDayOfDeath())));
        else
            ui->table_relation_scientists->setItem(i, 3, new QTableWidgetItem(QString::fromStdString("Still alive")));
        ui->table_relation_scientists->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(m_domain.getComputerList(persons[i].getId()))));
        ui->table_relation_scientists->setItem(i, 5, new QTableWidgetItem(QString::number(persons[i].getId())));

    }
}

RelationWindow::~RelationWindow()
{
    delete ui;
}

void RelationWindow::on_button_relation_return_clicked()
{
    this->close();
    this->setResult(QDialog::Accepted);
}

void RelationWindow::on_button_relation_relate_clicked()
{
    int persRowid = ui->table_relation_scientists->selectionModel()->currentIndex().row();
    int persId = ui->table_relation_scientists->model()->index(persRowid, 5).data().toInt();
    int compRowid = ui->table_relation_computers->selectionModel()->currentIndex().row();
    int compId = ui->table_relation_computers->model()->index(compRowid, 5).data().toInt();
    m_domain.createRelation(compId, persId);
    fillLists();
}
