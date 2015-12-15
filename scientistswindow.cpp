#include "scientistswindow.h"
#include "ui_scientistswindow.h"
#include "domain.h"
#include "person.h"
#include "mainwindow.h"
#include "addscientist.h"
#include "relationwindow.h"
#include <QMessageBox>

ScientistsWindow::ScientistsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScientistsWindow)
{
    ui->setupUi(this);

    ui->table_scientist_scientists->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_scientist_scientists->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_scientist_scientists->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->table_scientist_scientists->setColumnCount(6);

    QStringList TableHeader;
    TableHeader<<"Scientist name"<<"Gender"<<"Year born"<<"Year died"<<"Related computers"<<"id";
    ui->table_scientist_scientists->setHorizontalHeaderLabels(TableHeader);
    ui->table_scientist_scientists->hideColumn(5);

    displayAllScientists();
}

//Eyðir.
ScientistsWindow::~ScientistsWindow()
{
    delete ui;
}

//Sækir lista yfir tölvunarfræðinga.
void ScientistsWindow::displayAllScientists()
{
    vector<Person> persons = m_domain.getList();
    displayScientists(persons);
}

//Sýnir notanda lista yfir tölvunarfræðinga.
void ScientistsWindow::displayScientists(vector<Person> persons)
{
    ui->table_scientist_scientists->setSortingEnabled(false);
    ui->table_scientist_scientists->clearContents();
    ui->table_scientist_scientists->setRowCount(persons.size());

    for(unsigned int i = 0; i < persons.size(); i++)
    {
        ui->table_scientist_scientists->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(persons[i].getName())));
        ui->table_scientist_scientists->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(persons[i].getGender() == "m"?"Male":"Female")));
        ui->table_scientist_scientists->setItem(i, 2, new QTableWidgetItem(QString::number(persons[i].getDayOfBirth())));
        if (persons[i].getDayOfDeath() > 0)
            ui->table_scientist_scientists->setItem(i, 3, new QTableWidgetItem(QString::number(persons[i].getDayOfDeath())));
        else
            ui->table_scientist_scientists->setItem(i, 3, new QTableWidgetItem(QString::fromStdString("Still alive")));
        ui->table_scientist_scientists->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(m_domain.getComputerList(persons[i].getId()))));
        ui->table_scientist_scientists->setItem(i, 5, new QTableWidgetItem(QString::number(persons[i].getId())));
    }

    if(persons.size()> 0)
        ui->table_scientist_scientists->selectRow(0);
    ui->table_scientist_scientists->setSortingEnabled(true);
}

//Opnar addScientist gluggann.
void ScientistsWindow::on_button_scientist_addScientist_clicked()
{
    AddScientist addscientist;
    addscientist.setModal(true);
    addscientist.exec();
    if(addscientist.result()==QDialog::Accepted)
        on_search_scientist_scientists_textChanged();
}

//Opnar editScientist gluggann.
void ScientistsWindow::on_button_scientist_editscientist_clicked()
{
    int rowidx = ui->table_scientist_scientists->selectionModel()->currentIndex().row();
    int id = ui->table_scientist_scientists->model()->index(rowidx, 5).data().toInt();
    Person p = m_domain.findPersonById(id);

    AddScientist editScientist;
    editScientist.setDomain(m_domain);
    editScientist.edit(p);
    editScientist.setModal(true);
    editScientist.exec();
    if(editScientist.result()==QDialog::Accepted)
        on_search_scientist_scientists_textChanged();
}

//Leyfir notandanum að eyða persónu.
void ScientistsWindow::on_button_Scientist_delscientist_clicked()
{
    int answer = QMessageBox::question(this,"Question","Are you sure you want to delete selected scientist?");
    if (answer == QMessageBox::Yes)
    {
        int rowid = ui->table_scientist_scientists->selectionModel()->currentIndex().row();
        int id = ui->table_scientist_scientists->model()->index(rowid, 5).data().toInt();
        m_domain.removeScientist(id);
        on_search_scientist_scientists_textChanged();
    }
    else
    {
        QMessageBox::information(this,"Info","Oh well");
    }
}

//Opnar relation glugann
void ScientistsWindow::on_button_scientist_relation_clicked()
{
    RelationWindow relation;
    relation.setModal(true);
    relation.exec();
    displayAllScientists();
}

//Leyfir notandanum að tvíklikka á persónu og opnar svo edit gluggann.
void ScientistsWindow::on_table_scientist_scientists_doubleClicked()
{
    on_button_scientist_editscientist_clicked();
}

//Hættir keyrslu addScientist gluggans.
void ScientistsWindow::on_button_scientist_return_clicked()
{
   this->close();
}

//Leyfir notandanaum að leita eftir persónu.
void ScientistsWindow::on_search_scientist_scientists_textChanged()
{
    string search = ui->search_scientist_scientists->text().toStdString();
    vector<Person> persons = m_domain.searchScientist(search);
    displayScientists(persons);
}
