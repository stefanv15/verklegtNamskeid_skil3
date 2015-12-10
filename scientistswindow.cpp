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
    ui->list_scientists->clear();

    for(unsigned int i = 0; i < persons.size(); i++)
    {
        Person currentScientist = persons[i];

        ui->list_scientists->addItem(QString::fromStdString(currentScientist.getName()));
        ui->list_scientists->addItem(QString::fromStdString(currentScientist.getGender()));
        ui->list_scientists->addItem(QString::number(currentScientist.getDayOfBirth()));
        ui->list_scientists->addItem(QString::number(currentScientist.getDayOfDeath()));
    }
}


void ScientistsWindow::on_search_students_textChanged()
{
    string search = ui->search_students->text().toStdString();
    vector<Person> persons = m_domain.searchScientist(search);
    displayScientists(persons);
}


void ScientistsWindow::on_button_schientist_return_clicked()
{
    this->close();
}

void ScientistsWindow::on_button_schientist_addSchientist_clicked()
{
    QString name = ui->line_name->text();
    QString gender = ui->line_gender->text();
    QString yearOfBirth = ui->line_yearBorn->text();
    QString yearOfDeath = ui->line_yearDied->text();

    m_domain.createPerson(Person(name.toStdString(),gender.toStdString(),yearOfBirth.toInt(),yearOfDeath.toInt()));
}
