#ifndef ADDSCIENTIST_H
#define ADDSCIENTIST_H

#include <QDialog>
#include "domain.h"

namespace Ui
{
    class AddScientist;
}

class AddScientist : public QDialog
{
    Q_OBJECT

public:
    explicit AddScientist(QWidget *parent = 0); //Sjálfgefinn smiður.
    ~AddScientist();                            //Eyðir
    void setDomain(Domain domain);              //Sækir private breytu í domain klasanum.
    void edit(Person p);                        //Leyfir notanda að lagfæra upplýsingar

private slots:
    void on_check_isdead_toggled(bool checked);                     //Athugar hvort persóna sé á lífi eða ekki.
    void on_button_addScientist_save_clicked();                     //Vistar persónu og setur í lista.
    void on_button_addScientist_cancel_clicked();                   //Hættir keyrslu scientist glugga.
    void on_checkBox_addScientist_isdead_stateChanged(int arg1);    //Athugar hvort persóna sé á lífi eða ekki.

private:
    Ui::AddScientist *ui;                       // Private breytur.
    Domain m_domain;
    bool isEditing;
    int idToEdit;
};

#endif // ADDSCIENTIST_H
