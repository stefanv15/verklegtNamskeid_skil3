#include "addscientist.h"
#include "ui_addscientist.h"
#include "domain.h"
#include <qmessagebox.h>
#include "Person.h"

AddScientist::AddScientist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddScientist)
{
    ui->setupUi(this);
    isEditing = false;
}

void AddScientist::edit(Person p)
{
    isEditing = true;
    this->setWindowTitle("Edit scientist");
    ui->line_nameofscientist->setText(QString::fromStdString(p.getName()));
    if(p.getGender()=="m")
        ui->radioButtonMale->setChecked(true);
    else
        ui->radioButtonFemale->setChecked(true);
    ui->line_yearborn->setText(QString::number(p.getDayOfBirth()));

    if(p.getDayOfDeath()>0)
        ui->line_yeardied->setText(QString::number(p.getDayOfDeath()));
    ui->check_isdead->setChecked(p.getDayOfDeath()>0);
    idToEdit = p.getId();
}

AddScientist::~AddScientist()
{
    delete ui;
}

void AddScientist::setDomain(Domain domain)
{
    m_domain = domain;
}

void AddScientist::on_button_cancel_clicked()
{
    this->close();
    this->setResult(QDialog::Rejected);
}

void AddScientist::on_check_isdead_toggled(bool checked)
{
    ui->line_yeardied->setEnabled(checked);
}

void AddScientist::on_check_isdead_stateChanged(int arg1)
{
    ui->line_yeardied->setEnabled(arg1);
}



void AddScientist::on_button_add_clicked()
{
    if(ui->line_nameofscientist->text()=="")
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Please insert scientist name!"));
        ui->line_nameofscientist->setFocus();
        return;
    }

    bool ok;

    if(ui->line_yearborn->text().toInt(&ok)<1700)
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Please insert a valid year born!"));
        ui->line_yearborn->setFocus();
        return;
    }

    if((ui->check_isdead->isChecked())&&(ui->line_yeardied->text().toInt(&ok)<1700))
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Please insert a valid year died!"));
        ui->line_yeardied->setFocus();
        return;
    }

    if((ui->check_isdead->isChecked())&&(ui->line_yeardied->text().toInt()<ui->line_yearborn->text().toInt()))
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Year died is not valid before year born!"));
        ui->line_yeardied->setFocus();
        return;
    }

    // Set year died = 0 if isDead not checked
    if(!ui->check_isdead->isChecked())
        ui->line_yeardied->setText("0");

    string gender;
    if(ui->radioButtonFemale->isChecked())
        gender = "f";
    else if(ui->radioButtonMale->isChecked())
        gender = "m";
    Person p(ui->line_nameofscientist->text().toStdString(),
             gender,
             ui->line_yearborn->text().toInt(),
             ui->line_yeardied->text().toInt());
    string ErrorMessage = "";
    if(isEditing)
    {
        p.setId(idToEdit);
        ErrorMessage = m_domain.updatePerson(p);
    }
    else
        ErrorMessage = m_domain.createPerson(p);
    if (ErrorMessage != "")
        QMessageBox::warning(this, "Warning", QString::fromStdString(ErrorMessage));

    this->close();
    this->setResult(QDialog::Accepted);
}
