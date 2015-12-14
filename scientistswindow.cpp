#include "scientistswindow.h"
#include "ui_scientistswindow.h"
#include "domain.h"
#include "person.h"
#include "mainwindow.h"
#include "addscientist.h"
#include "editscientist.h"
#include <QMessageBox>

ScientistsWindow::ScientistsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScientistsWindow)
{
    ui->setupUi(this);

    ui->table_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_scientists->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_scientists->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->table_scientists->hideColumn(4);
}

void ScientistsWindow::setDomain(Domain domain)
{
    m_domain = domain;
    displayAllScientists();
}

ScientistsWindow::~ScientistsWindow()
{
    delete ui;
}

void ScientistsWindow::displayAllScientists()
{
    vector<Person> persons = m_domain.getList();
    displayScientists(persons);
}

void ScientistsWindow::displayScientists(vector<Person> persons)
{

    ui->table_scientists->clearContents();
    ui->table_scientists->setRowCount(persons.size());

    QStringList TableHeader;
    TableHeader<<"Scientist name"<<"Gender"<<"Year born"<<"Year died"<<"id";


    ui->table_scientists->setHorizontalHeaderLabels(TableHeader);

<<<<<<< HEAD
    ui->table_scientists->setRowCount(list.size());

=======
>>>>>>> ca066509b72e005ffe6546095b765a92481e7161
    //ui->table_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(unsigned int i = 0; i < persons.size(); i++)
    {
        Person currentScientist = persons[i];

<<<<<<< HEAD
        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(list[i].getName())));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(list[i].getGender() == "m"?"Male":"Female")));
        ui->table_scientists->setItem(i, 2, new QTableWidgetItem(QString::number(list[i].getDayOfBirth())));
        if (list[i].getDayOfDeath() > 0)
            ui->table_scientists->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].getDayOfDeath())));
        ui->table_scientists->setItem(i, 4, new QTableWidgetItem(QString::number(list[i].getId())));
=======
        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(persons[i].getName())));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(persons[i].getGender() == "m"?"Male":"Female")));
        ui->table_scientists->setItem(i, 2, new QTableWidgetItem(QString::number(persons[i].getDayOfBirth())));
        if (persons[i].getDayOfDeath() > 0)
            ui->table_scientists->setItem(i, 3, new QTableWidgetItem(QString::number(persons[i].getDayOfDeath())));
        ui->table_scientists->setItem(i, 4, new QTableWidgetItem(QString::number(persons[i].getId())));
>>>>>>> ca066509b72e005ffe6546095b765a92481e7161
    }
}

void ScientistsWindow::on_ret_button_clicked()
{
   this->close();
}


void ScientistsWindow::on_button_scientist_addScientist_clicked()
{
    AddScientist addscientist;
    addscientist.setModal(true);
    addscientist.exec();
}

void ScientistsWindow::on_button_scientist_editscientist_clicked()
{
    EditScientist editscientist;
    editscientist.setModal(true);
    editscientist.exec();
}

void ScientistsWindow::on_search_students_textChanged()
{
    string search = ui->search_students->text().toStdString();
    vector<Person> persons = m_domain.searchScientist(search);
    displayScientists(persons);
}
