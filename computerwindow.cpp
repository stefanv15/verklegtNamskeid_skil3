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

    //ui->tableWidget->setClickable(true);
    //ui->tableWidget->connect(ui->tableWidget,SIGNAL(sectionClicked(int)),ui->tableWidget,SLOT(sectionClicked(int)));

    vector<Computers> list =  m_domain.getComputerList();
    ui->setupUi(this);

    ui->tableWidget->setRowCount(list.size());

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(unsigned int i = 0; i < list.size(); i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(list[i].getNameOfCpu())));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(list[i].getTypeOfCpu())));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(list[i].getWasBuilt())));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].getYearBuilt())));
        //ui->tableWidget->setItem(1, 0, new QTableWidgetItem(list[i].getName()));
    }
}

ComputerWindow::~ComputerWindow()
{
    delete ui;
}

void ComputerWindow::on_ComputerWindow_accepted()
{

}

void ComputerWindow::on_btnAdd_clicked()
{
    QMessageBox::question(this,"Question","Are you sure you want to add a new Computer?");

    ComputerAdd ca;
    ca.setModal(true);
    ca.exec();
}

void ComputerWindow::on_btnDel_clicked()
{
    int mbAnswer = QMessageBox::question(this,"Question","Are you sure you want to delete the selected Computer?");

    if(mbAnswer == QMessageBox::Yes)
    {
        QMessageBox::information(this,"Info","Ok, lets delete!");
    }
    else
        QMessageBox::information(this,"Info","Ok, see you!");

}


void ComputerWindow::sectionClicked(int index)
{
    QMessageBox::about(this,"Hi! Header Click Detected!","Index:"+QString::number(index));
}
