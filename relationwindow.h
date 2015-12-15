#ifndef RELATIONWINDOW_H
#define RELATIONWINDOW_H
#include "domain.h"
#include "computers.h"
#include "person.h"

#include <QDialog>

namespace Ui
{
    class RelationWindow;
}

class RelationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RelationWindow(QWidget *parent = 0);           //Sjálfgefinn smiður.
    ~RelationWindow();                                      //Eyðir.

private slots:
    void on_button_relation_return_clicked();               //Hættir keyrslu relation gluggans.
    void on_button_relation_relate_clicked();               //Leyfir notandanum að vensla saman upplýsingar.
    void on_search_relation_searchCpu_textChanged();        //Leyfir notandanum að leita að upplýsingum til að vensla.
    void on_search_relation_searchScientist_textChanged();  //Leyfir notandanum að leita að upplýsingum til að vensla.

private:
    Ui::RelationWindow *ui;
    Domain m_domain;
    void displayScientist(vector<Person> persons);          //Birtir person lista.
    void displayComputer(vector<Computers> computer);       //Birtist computer lista.
    void fillLists();                                       //Sækir tvo lista. Peronlist og computerlist.
};

#endif // RELATIONWINDOW_H
