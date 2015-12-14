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
    ui->table_scientists->setColumnCount(5);

    QStringList TableHeader;
    TableHeader<<"Scientist name"<<"Gender"<<"Year born"<<"Year died"<<"id";


    ui->table_scientists->setHorizontalHeaderLabels(TableHeader);

    ui->table_scientists->setRowCount(persons.size());

    //ui->table_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(unsigned int i = 0; i < persons.size(); i++)
    {
       // Person currentScientist = persons[i];


        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(persons[i].getName())));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(persons[i].getGender() == "m"?"Male":"Female")));
        ui->table_scientists->setItem(i, 2, new QTableWidgetItem(QString::number(persons[i].getDayOfBirth())));
        if (persons[i].getDayOfDeath() > 0)
            ui->table_scientists->setItem(i, 3, new QTableWidgetItem(QString::number(persons[i].getDayOfDeath())));
        ui->table_scientists->setItem(i, 4, new QTableWidgetItem(QString::number(persons[i].getId())));

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

void ScientistsWindow::on_button_Scientist_delscientist_clicked()
{
    int answer = QMessageBox::question(this,"Question","Are you sure you want to delete selected scientist?");
    if (answer == QMessageBox::Yes)
    {
        int rowid = ui->table_scientists->selectionModel()->currentIndex().row();
        int id = ui->table_scientists->model()->index(rowid, 4).data().toInt();
        m_domain.removeScientist(id);
        displayAllScientists();
    }
    else
    {
        QMessageBox::information(this,"Info","Oh well");
    }
}
