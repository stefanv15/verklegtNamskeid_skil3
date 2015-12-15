#ifndef COMPUTERWINDOW_H
#define COMPUTERWINDOW_H
#include "domain.h"
#include "computers.h"
#include <QDialog>

namespace Ui
{
class ComputerWindow;
}

class ComputerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ComputerWindow(QWidget *parent = 0);
    QString getType(string type);                                             //Sækir tegund tölvu.
    ~ComputerWindow();                                                        //Eyðir.

public slots:
    void sectionClicked(int index);

private slots:
    void on_button_computer_return_clicked();                                 //Lokar computer glugganum.
    void on_button_computer_relation_clicked();                               //Opnar relatino gluggann.
    void on_search_computer_searchCpu_textChanged();                          //Leyfir notanda að leita eftir tölvum.
    void on_button_computer_edit_clicked();                                   //Leyfir notandanum að lagfæra upplýsingar.
    void on_button_computer_delete_clicked();                                 //Leyfir notandanum að eyða upplýsingum.
    void on_button_computer_add_clicked();                                    //Leyfir notandanum að setja inn upplýsingar.
    void on_table_computer_listCpu_doubleClicked();                           //Opnar edit gluggann ef það er tvíklikkað

private:                                                                      //Private breytur.
    Ui::ComputerWindow *ui;
    Domain m_domain;
    void fillList();                                                          //Nær í upplýsingar um computer lista og person lista.
    void displayComputer(vector<Computers> computer);                         //Nær í upplýsingar um computer lista.
};

#endif // COMPUTERWINDOW_H
