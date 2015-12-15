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
    ui->line_addScientist_nOs->setText(QString::fromStdString(p.getName()));
    if(p.getGender()=="m")
        ui->rbutton_addScientist_male->setChecked(true);
    else
        ui->rbutton_addScientist_female->setChecked(true);
    ui->line_addScientist_yearBorn->setText(QString::number(p.getDayOfBirth()));

    if(p.getDayOfDeath()>0)
        ui->line_addSchientist_yearDied->setText(QString::number(p.getDayOfDeath()));
    ui->checkBox_addScientist_isdead->setChecked(p.getDayOfDeath()>0);
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

void AddScientist::on_check_isdead_toggled(bool checked)
{
    ui->line_addSchientist_yearDied->setEnabled(checked);
}

void AddScientist::on_button_addScientist_save_clicked()
{
    if(ui->line_addScientist_nOs->text()=="")
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Please insert scientist name!"));
        ui->line_addScientist_nOs->setFocus();
        return;
    }

    bool ok;

    if(ui->line_addScientist_yearBorn->text().toInt(&ok)<1700)
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Please insert a valid year born!"));
        ui->line_addScientist_yearBorn->setFocus();
        return;
    }

    if((ui->checkBox_addScientist_isdead->isChecked())&&(ui->line_addSchientist_yearDied->text().toInt(&ok)<1700))
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Please insert a valid year died!"));
        ui->line_addSchientist_yearDied->setFocus();
        return;
    }

    if((ui->checkBox_addScientist_isdead->isChecked())&&(ui->line_addSchientist_yearDied->text().toInt()<ui->line_addScientist_yearBorn->text().toInt()))
    {
        QMessageBox::warning(this, "Warning", QString::fromStdString("Year died is not valid before year born!"));
        ui->line_addSchientist_yearDied->setFocus();
        return;
    }

    // Set year died = 0 if isDead not checked
    if(!ui->checkBox_addScientist_isdead->isChecked())
        ui->line_addSchientist_yearDied->setText("0");

    string gender;
    if(ui->rbutton_addScientist_female->isChecked())
        gender = "f";
    else if(ui->rbutton_addScientist_male->isChecked())
        gender = "m";
    Person p(ui->line_addScientist_nOs->text().toStdString(),
             gender,
             ui->line_addScientist_yearBorn->text().toInt(),
             ui->line_addSchientist_yearDied->text().toInt());
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

void AddScientist::on_button_addScientist_cancel_clicked()
{
    this->close();
    this->setResult(QDialog::Rejected);
}

void AddScientist::on_checkBox_addScientist_isdead_stateChanged(int arg1)
{
    ui->line_addSchientist_yearDied->setEnabled(arg1);
}
