#include "scientistswindow.h"
#include "ui_scientistswindow.h"
#include "domain.h"
#include "person.h"
#include "mainwindow.h"

ScientistsWindow::ScientistsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScientistsWindow)
{
    ui->setupUi(this);
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
    vector<Person> list =  m_domain.getList();
    ui->setupUi(this);

    ui->table_scientists->setRowCount(list.size());

    ui->table_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(unsigned int i = 0; i < persons.size(); i++)
    {
        Person currentScientist = persons[i];

        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(list[i].getName())));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(list[i].getGender())));
        ui->table_scientists->setItem(i, 2, new QTableWidgetItem(QString::number(list[i].getDayOfBirth())));
        ui->table_scientists->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].getDayOfDeath())));
    }
}


void ScientistsWindow::on_search_students_textChanged()
{
    string search = ui->search_students->text().toStdString();
    vector<Person> persons = m_domain.searchScientist(search);
    displayScientists(persons);
}



void ScientistsWindow::on_button_scientist_addScientist_clicked()
{
    QString name = ui->line_name->text();
    QString gender = ui->line_gender->text();
    QString yearOfBirth = ui->line_yearBorn->text();
    QString yearOfDeath = ui->line_yearDied->text();
    Person newPerson(name.toStdString(),gender.toStdString(),yearOfBirth.toInt(),yearOfDeath.toInt());
    m_domain.createPerson(newPerson);
    ui->line_name->clear();
    ui->line_gender->clear();
    ui->line_yearBorn->clear();
    ui->line_yearDied->clear();
}

void ScientistsWindow::on_ret_button_clicked()
{
   this->close();
}
