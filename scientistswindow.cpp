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

void ScientistsWindow::on_ret_button_clicked()
{
    this->close();
}

void ScientistsWindow::on_search_students_textChanged()
{
    string search = ui->search_students->text().toStdString();
    vector<Person> persons = m_domain.searchScientist(search);
    displayScientists(persons);
}
