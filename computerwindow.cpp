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

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setColumnCount(6);

    QStringList TableHeader;
    TableHeader<<"Computer name"<<"Computer type"<<"Was created"<<"Year created"<<"Related scientists"<<"id";
    ui->tableWidget->setHorizontalHeaderLabels(TableHeader);
    ui->tableWidget->hideColumn(5);
    displayComputer(m_domain.getComputerList());
}

ComputerWindow::~ComputerWindow()
{
    delete ui;
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
     displayComputer(list);
}

void ComputerWindow::displayComputer(vector<Computers> computer)
{
    ui->tableWidget->clearContents();
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

        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(m_domain.getPersList(computer[i].getId()))));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(computer[i].getId())));
    }

    // Select first row if any data in grid
    if(computer.size()>0)
        ui->tableWidget->selectRow(0);
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

    int id = ui->tableWidget->model()->index(rowidx, 5).data().toInt();
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
        int id = ui->tableWidget->model()->index(rowidx, 5).data().toInt();
        m_domain.removeComputer(id);
        fillList();
    }
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

    relation.exec();
}

void ComputerWindow::on_tableWidget_doubleClicked(const QModelIndex &index)
{
    on_buttonEdit_clicked();
}
