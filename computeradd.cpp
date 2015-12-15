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

//Eyðir.
ComputerAdd::~ComputerAdd()
{
    delete ui;
}

//Lagfærir tölvu upplýsingar.
void ComputerAdd::edit(Computers c)
{
    isEditing = true;
    this->setWindowTitle("Edit computer");
    ui->line_computerAdd_cpuName->setText(QString::fromStdString(c.getNameOfCpu())); // Setja heiti tölvu inn í svæðið editComputerName
    if(c.getYearBuilt()>0)
        ui->line_computerAdd_yearBuilt->setText(QString::number(c.getYearBuilt())); // Setja ártal inn í svæðið editYearBuilt

    if(c.getTypeOfCpu()=="h")
        ui->rbutton_computerAdd_hybrid->setChecked(true);
    else if(c.getTypeOfCpu()=="d")
        ui->rbutton_computerAdd_digital->setChecked(true);
    else
        ui->rbutton_computerAdd_analog->setChecked(true);

    ui->checkbox_computerAdd_wasBuilt->setChecked(c.getWasBuilt()=="y");
    idToEdit = c.getId();
}

//Sækir private breytuna m_domain.
void ComputerAdd::setDomain(Domain domain)
{
    m_domain = domain;
}

//
void ComputerAdd::on_checkBox_toggled(bool checked)
{
    ui->line_computerAdd_yearBuilt->setEnabled(checked);
}

//Vistar upplýsingar um tölvu.
void ComputerAdd::on_button_computerAdd_save_clicked()
{
    if(ui->line_computerAdd_cpuName->text()=="")
    {
        QMessageBox::warning(this,"Warning",QString::fromStdString("Please enter Computer name!"));
        ui->line_computerAdd_cpuName->setFocus();

        return;
    }

    if((ui->checkbox_computerAdd_wasBuilt->isChecked()) && (ui->line_computerAdd_yearBuilt->text()==""))
    {
        QMessageBox::warning(this,"Warning",QString::fromStdString("Please enter year built!"));
        ui->line_computerAdd_yearBuilt->setFocus();

        return;
    }

    string type;
    if(ui->rbutton_computerAdd_analog->isChecked())
        type = "a";
    else if (ui->rbutton_computerAdd_digital->isChecked())
        type = "d";
    else if (ui->rbutton_computerAdd_hybrid->isChecked())
        type = "h";
    Computers c( ui->line_computerAdd_cpuName->text().toStdString(),
                 ui->line_computerAdd_yearBuilt->text().toInt(),
                 type,
                 ui->checkbox_computerAdd_wasBuilt->isChecked()?"y":"n");

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

//Athugar hvort tölva var byggð.
void ComputerAdd::on_checkbox_computerAdd_wasBuilt_stateChanged(int arg1)
{
    ui->line_computerAdd_yearBuilt->setEnabled(arg1); //ui->checkWasBuilt->isChecked());
}

//Hættir keyrslu computerAdd gluggans.
void ComputerAdd::on_button_computeradd_cancel_clicked()
{
    this->close();
    this->setResult(QDialog::Rejected);
}
