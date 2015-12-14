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
    ui->line_yeardied->setText(QString::number(p.getDayOfDeath()));
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
    string gender;
    if(ui->radioButtonFemale->isChecked())
        gender = "f";
    else if(ui->radioButtonMale->isChecked())
        gender = "m";
    Person p(ui->line_nameofscientist->text().toStdString(),
             gender,
             ui->line_yearborn->text().toInt(),
             ui->line_yeardied->text().toInt());
    string res = "";
    if(isEditing)
    {
        p.setId(idToEdit);
        res = m_domain.updatePerson(p);
    }
    else
        res = m_domain.createPerson(p);
    if (res != "")
        QMessageBox::warning(this, "Warning", QString::fromStdString( res));

    this->close();
    this->setResult(QDialog::Accepted);
}
