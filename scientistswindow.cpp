#include "scientistswindow.h"
#include "ui_scientistswindow.h"
#include "domain.h"
#include "person.h"

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

    }
}
