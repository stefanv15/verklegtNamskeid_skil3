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

    void on_checkWasBuilt_stateChanged(int arg1);

    void on_buttonOK_clicked();

    void on_buttonCancel_clicked();

private:
    Ui::ComputerAdd *ui;
    Domain m_domain;
    bool isEditing;
    int idToEdit;
};

#endif // COMPUTERADD_H
