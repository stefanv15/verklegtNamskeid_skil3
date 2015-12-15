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
    //ui->tableWidget->setClickable(true);
    //ui->tableWidget->connect(ui->tableWidget,SIGNAL(sectionClicked(int)),this,SLOT(sectionClicked(int)));

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->hideColumn(5);
}

void ComputerWindow::setDomain(Domain domain)
{
    m_domain = domain;
    fillList();
}

ComputerWindow::~ComputerWindow()
{
    delete ui;
}

void ComputerWindow::sectionClicked(int index)
{
    QMessageBox::about(this,"Hi! Header Click Detected!","Index:"+QString::number(index));
}

void ComputerWindow::on_ComputerWindow_accepted()
{

}

void ComputerWindow::on_button_computer_deleteCpu_clicked()
{
}

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

void ComputerWindow::fillList()
{    vector<Computers> list =  m_domain.getComputerList();
     displayComputer(list);
}

void ComputerWindow::displayComputer(vector<Computers> computer)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(5);

    QStringList TableHeader;
    TableHeader<<"Computer name"<<"Computer type"<<"Was created"<<"Year created"<<"Related scientists"<<"id";
    ui->tableWidget->setHorizontalHeaderLabels(TableHeader);
    ui->tableWidget->setRowCount(computer.size());


    for(unsigned int i = 0; i < computer.size(); i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(computer[i].getNameOfCpu())));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(getType(computer[i].getTypeOfCpu())));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(computer[i].getWasBuilt()=="y"?"Yes":"No")));
        if (computer[i].getYearBuilt()!=0)
           ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(computer[i].getYearBuilt())));
        else
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::fromStdString("Not built")));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(computer[i].getId())));
        //ui->tableWidget->setItem(1, 0, new QTableWidgetItem(list[i].getName()));

        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(m_domain.getPersList(computer[i].getId()))));
    }
}

void ComputerWindow::on_button_computer_addCpu_clicked()
{

    ComputerAdd ca;
    ca.setModal(true);
    ca.exec();
}

void ComputerWindow::on_buttonEdit_clicked()
{
    int rowidx = ui->tableWidget->selectionModel()->currentIndex().row();

    int id = ui->tableWidget->model()->index(rowidx, 4).data().toInt();
    Computers c = m_domain.findComputerById(id);

    ComputerAdd ca;
    ca.setDomain(m_domain);
    ca.edit(c);
    ca.setModal(true);
    ca.exec();
    if(ca.result()==QDialog::Accepted)
        fillList();
}

void ComputerWindow::on_btnAdd_clicked()
{
    //   QMessageBox::question(this,"Question","Are you sure you want to add a new Computer?");

       ComputerAdd ca;
       ca.setModal(true);
       ca.exec();
       if(ca.result()==QDialog::Accepted)
           fillList();
}

void ComputerWindow::on_button_computer_return_clicked()
{
    this->close();
}

void ComputerWindow::on_btnDel_clicked()
{
    int mbAnswer = QMessageBox::question(this,"Question","Are you sure you want to delete the selected computer?");

    if(mbAnswer == QMessageBox::Yes)
    {
        int rowidx = ui->tableWidget->selectionModel()->currentIndex().row();
        int id = ui->tableWidget->model()->index(rowidx, 4).data().toInt();
        m_domain.removeComputer(id);
        fillList();
       // QMessageBox::information(this,"Info","Ok, lets delete!");
    }
    else
        QMessageBox::information(this,"Info","Ok, see you!");
}

void ComputerWindow::on_EditSearch_textChanged()
{
    string search = ui->EditSearch->text().toStdString();
    vector<Computers> computers = m_domain.searchComputer(search);
    displayComputer(computers);
}

void ComputerWindow::on_button_computer_relation_clicked()
{
    RelationWindow relation;
    relation.setDomain(m_domain);
    relation.setModal(true);
    relation.exec();
}
