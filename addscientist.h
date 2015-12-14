#ifndef ADDSCIENTIST_H
#define ADDSCIENTIST_H

#include <QDialog>
#include "domain.h"

namespace Ui {
class AddScientist;
}

class AddScientist : public QDialog
{
    Q_OBJECT

public:
    explicit AddScientist(QWidget *parent = 0);
    ~AddScientist();
    void setDomain(Domain domain);
    void edit(Person p);

private slots:
    void on_button_cancel_clicked();

    void on_check_isdead_stateChanged(int arg1);

    void on_check_isdead_toggled(bool checked);

    void on_button_add_clicked();

private:
    Ui::AddScientist *ui;
    Domain m_domain;
    bool isEditing;
    int idToEdit;
};

#endif // ADDSCIENTIST_H
