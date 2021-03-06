#include "computerwindow.h"
#include "ui_computerwindow.h"
#include "domain.h"
#include "computers.h"
#include "relationwindow.h"
#include <QMessageBox>
#include "computeradd.h"

ComputerWindow::ComputerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputerWindow)
{
    ui->setupUi(this);

    // Enable minimize and maximize buttons
    Qt::WindowFlags flags = this->windowFlags();
    flags |= Qt::WindowMaximizeButtonHint;
    flags |= Qt::WindowMinimizeButtonHint;
    setWindowFlags( flags );

    ui->table_computer_listCpu->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_computer_listCpu->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_computer_listCpu->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->table_computer_listCpu->setColumnCount(6);

    QStringList TableHeader;
    TableHeader<<"Computer name"<<"Computer type"<<"Was created"<<"Year created"<<"Related scientists"<<"id";
    ui->table_computer_listCpu->setHorizontalHeaderLabels(TableHeader);
    ui->table_computer_listCpu->hideColumn(5);
    displayComputer(m_domain.getComputerList());
}

//Eyðir.
ComputerWindow::~ComputerWindow()
{
    delete ui;
}

//Sækir tegund tölvu.
QString ComputerWindow::getType(string type)
{
    if (type=="h")
        return "Hybrid";
    else if (type=="d")
        return "Digital";
    else if (type=="a")
        return "Analog";
    else
        return "";
}

void ComputerWindow::sectionClicked(int index)
{
    QMessageBox::about(this,"Hi! Header Click Detected!","Index:"+QString::number(index));
}

//Nær í upplýsingar um computer lista og person lista.
void ComputerWindow::fillList()
{
    vector<Computers> list =  m_domain.getComputerList();
    displayComputer(list);
}

//Nær í upplýsingar um computer lista.
void ComputerWindow::displayComputer(vector<Computers> computer)
{
    ui->table_computer_listCpu->setSortingEnabled(false);
    ui->table_computer_listCpu->clearContents();
    ui->table_computer_listCpu->setRowCount(computer.size());

    for(unsigned int i = 0; i < computer.size(); i++)
    {
        ui->table_computer_listCpu->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(computer[i].getNameOfCpu())));
        ui->table_computer_listCpu->setItem(i, 1, new QTableWidgetItem(getType(computer[i].getTypeOfCpu())));
        ui->table_computer_listCpu->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(computer[i].getWasBuilt()=="y"?"Yes":"No")));
        if (computer[i].getYearBuilt()!=0)
            ui->table_computer_listCpu->setItem(i, 3, new QTableWidgetItem(QString::number(computer[i].getYearBuilt())));
        else
            ui->table_computer_listCpu->setItem(i, 3, new QTableWidgetItem(QString::fromStdString("Not built")));
        ui->table_computer_listCpu->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(m_domain.getPersList(computer[i].getId()))));
        ui->table_computer_listCpu->setItem(i, 5, new QTableWidgetItem(QString::number(computer[i].getId())));
    }
    if(computer.size()>0)
        ui->table_computer_listCpu->selectRow(0);
    ui->table_computer_listCpu->setSortingEnabled(true);
}

//Lokar computer glugganum.
void ComputerWindow::on_button_computer_return_clicked()
{
    this->close();
}

//Leyfir notanda að leita eftir tölvum.
void ComputerWindow::on_search_computer_searchCpu_textChanged()
{
    string search = ui->search_computer_searchCpu->text().toStdString();
    vector<Computers> computers = m_domain.searchComputer(search);
    displayComputer(computers);
}

//Leyfir notandanum að lagfæra upplýsingar.
void ComputerWindow::on_button_computer_edit_clicked()
{
    int rowidx = ui->table_computer_listCpu->selectionModel()->currentIndex().row();
    int id = ui->table_computer_listCpu->model()->index(rowidx, 5).data().toInt();
    Computers c = m_domain.findComputerById(id);

    ComputerAdd ca;
    ca.setDomain(m_domain);
    ca.edit(c);
    ca.setModal(true);
    ca.exec();
    if(ca.result()==QDialog::Accepted)
        fillList();
}

//Leyfir notandanum að eyða upplýsingum.
void ComputerWindow::on_button_computer_delete_clicked()
{
    int mbAnswer = QMessageBox::question(this,"Question","Are you sure you want to delete the selected computer?");

    if(mbAnswer == QMessageBox::Yes)
    {
        int rowidx = ui->table_computer_listCpu->selectionModel()->currentIndex().row();
        int id = ui->table_computer_listCpu->model()->index(rowidx, 5).data().toInt();
        m_domain.removeComputer(id);
        fillList();
    }
}

//Leyfir notandanum að setja inn upplýsingar.
void ComputerWindow::on_button_computer_add_clicked()
{
    ComputerAdd ca;
    ca.setModal(true);
    ca.exec();
    if(ca.result()==QDialog::Accepted)
       fillList();
}

//Opnar relation gluggann.
void ComputerWindow::on_button_computer_relation_clicked()
{
    RelationWindow relation;
    relation.setModal(true);
    relation.exec();
    fillList();
}

//Opnar edit gluggann ef það er tvíklikkað
void ComputerWindow::on_table_computer_listCpu_doubleClicked()
{
    on_button_computer_edit_clicked();
}
