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
    explicit ComputerAdd(QWidget *parent = 0);                      //Sjálfgefinn smiður.
    void setDomain(Domain domain);                                  //Sækir private breytuna m_domain.
    void edit(Computers c);                                         //Lagfærir tölvu upplýsingar.
    ~ComputerAdd();                                                 //Eyðir sjálfgefnasmið.

private slots:
    void on_checkBox_toggled(bool checked);                         //Athugar hvort tölva var byggð.
    void on_button_computerAdd_save_clicked();                      //Vistar upplýsingar um tölvu.
    void on_checkbox_computerAdd_wasBuilt_stateChanged(int arg1);   //Athugar hvort tölva var byggð.
    void on_button_computeradd_cancel_clicked();                    //Hættir keyrslu computerAdd gluggans.

private:                                                            //Private breytur fyrir Computer add klasann.
    Ui::ComputerAdd *ui;
    Domain m_domain;
    bool isEditing;
    int idToEdit;
};

#endif // COMPUTERADD_H
