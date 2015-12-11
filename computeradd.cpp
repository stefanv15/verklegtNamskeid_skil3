#include "computeradd.h"
#include "ui_computeradd.h"
#include "computers.h"
#include "domain.h"
#include <qmessagebox.h>

ComputerAdd::ComputerAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputerAdd)
{
    ui->setupUi(this);
    isEditing = false;
}

void ComputerAdd::edit(Computers c)
{
    isEditing = true;
    ui->editComputerName->setText(QString::fromStdString(c.getNameOfCpu())); // Setja heiti tölvu inn í svæðið editComputerName
    if(c.getYearBuilt()>0)
        ui->editYearBuilt->setText(QString::number(c.getYearBuilt())); // Setja ártal inn í svæðið editYearBuilt

    if(c.getTypeOfCpu()=="h")
        ui->radioHybrid->setChecked(true);
    else if(c.getTypeOfCpu()=="d")
        ui->radioDigital->setChecked(true);
    else
        ui->radioAnalog->setChecked(true);

    ui->checkWasBuilt->setChecked(c.getWasBuilt()=="y");
    idToEdit = c.getId();
}

void ComputerAdd::setDomain(Domain domain)
{
    m_domain = domain;
}

ComputerAdd::~ComputerAdd()
{
    delete ui;
}

void ComputerAdd::on_checkBox_toggled(bool checked)
{
    ui->editYearBuilt->setEnabled(checked);
}

void ComputerAdd::on_checkWasBuilt_stateChanged(int arg1)
{
    ui->editYearBuilt->setEnabled(arg1); //ui->checkWasBuilt->isChecked());

}

void ComputerAdd::on_buttonOK_clicked()
{
    string type;
    if(ui->radioAnalog->isChecked())
        type = "a";
    else if (ui->radioDigital->isChecked())
        type = "d";
    else if (ui->radioHybrid->isChecked())
        type = "h";
    Computers c( ui->editComputerName->text().toStdString(),
                 ui->editYearBuilt->text().toInt(),
                 type,
                 ui->checkWasBuilt->isChecked()?"y":"n");

    string res = "";
    if (isEditing)
    {
        c.setId(idToEdit);
        res = m_domain.updateComputer(c);
    }
    else
        res = m_domain.createComputer(c);
    if (res!="")
        QMessageBox::warning(this,"Warning",QString::fromStdString( res));


    this->close();
    this->setResult(QDialog::Accepted);
}

void ComputerAdd::on_buttonCancel_clicked()
{
    this->close();
    this->setResult(QDialog::Rejected);
}
