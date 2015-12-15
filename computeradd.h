#ifndef COMPUTERADD_H
#define COMPUTERADD_H

#include <QDialog>
#include "domain.h"

namespace Ui {
class ComputerAdd;
}

class ComputerAdd : public QDialog
{
    Q_OBJECT

public:
    explicit ComputerAdd(QWidget *parent = 0);
    void setDomain(Domain domain);
    void edit(Computers c);
    ~ComputerAdd();

private slots:
    void on_checkBox_toggled(bool checked);

    void on_button_computerAdd_save_clicked();

    void on_checkbox_computerAdd_wasBuilt_stateChanged(int arg1);

    void on_button_computeradd_cancel_clicked();

private:
    Ui::ComputerAdd *ui;
    Domain m_domain;
    bool isEditing;
    int idToEdit;
};

#endif // COMPUTERADD_H
