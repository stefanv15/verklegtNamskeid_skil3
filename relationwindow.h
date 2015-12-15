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
    void setDomain(Domain domain);                          //Sækir aðgang í domain.cpp
    ~RelationWindow();                                      //Eyðir.

private slots:
    void on_button_relation_return_clicked();               //Hættir keyrslu relation gluggans.
    void on_button_relation_relate_clicked();               //Leyfir notandanum að vensla saman upplýsingar.

<<<<<<< HEAD
private:                                                    //Private breytur.
=======
    void on_search_relation_searchCpu_textChanged();

    void on_search_relation_searchScientist_textChanged();

private:
>>>>>>> fa1e4b72003115fd0225f7b271ecfe188f97f8e5
    Ui::RelationWindow *ui;
    Domain m_domain;
    void displayScientist(vector<Person> persons);          //Birtir person lista.
    void displayComputer(vector<Computers> computer);       //Birtist computer lista.
    void fillLists();                                       //Sækir tvo lista. Peronlist og computerlist.
};

#endif // RELATIONWINDOW_H
