#include "scientistswindow.h"
#include "ui_scientistswindow.h"
#include "domain.h"
#include "person.h"
#include "mainwindow.h"
#include "addscientist.h"
#include "editscientist.h"

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
         ui->table_scientists->clear();
         ui->table_scientists->setColumnCount(5);

         QStringList TableHeader;
         TableHeader<<"Scientist name"<<"Gender"<<"Year born"<<"Year died"<<"id";


    ui->table_scientists->setHorizontalHeaderLabels(TableHeader);

    ui->table_scientists->setRowCount(list.size());

    ui->table_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(unsigned int i = 0; i < persons.size(); i++)
    {
        Person currentScientist = persons[i];

        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(list[i].getName())));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(list[i].getGender() == "m"?"Male":"Female")));
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
