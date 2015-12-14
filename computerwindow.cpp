#include "computerwindow.h"
#include "ui_computerwindow.h"
#include "domain.h"
#include "computers.h"
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
    ui->tableWidget->hideColumn(4);
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

QString getType(string type)
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

     ui->tableWidget->clear();
     ui->tableWidget->setColumnCount(5);

     QStringList TableHeader;
     TableHeader<<"Computer name"<<"Computer type"<<"Was created"<<"Year created"<<"id";
     ui->tableWidget->setHorizontalHeaderLabels(TableHeader);
     ui->tableWidget->setRowCount(list.size());


     for(unsigned int i = 0; i < list.size(); i++)
     {
         ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(list[i].getNameOfCpu())));
         ui->tableWidget->setItem(i, 1, new QTableWidgetItem(getType(list[i].getTypeOfCpu())));
         ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(list[i].getWasBuilt()=="y"?"Yes":"No")));
         if (list[i].getYearBuilt()!=0)
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].getYearBuilt())));
         ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(list[i].getId())));
         //ui->tableWidget->setItem(1, 0, new QTableWidgetItem(list[i].getName()));
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
    int mbAnswer = QMessageBox::question(this,"Question","Are you sure you want to delete the selected Computer?");

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
