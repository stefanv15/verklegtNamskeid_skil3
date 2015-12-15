#ifndef SCIENTISTSWINDOW_H
#define SCIENTISTSWINDOW_H
#include "domain.h"
#include "person.h"
#include <vector>

#include <QDialog>
using namespace std;

namespace Ui {
class ScientistsWindow;
}

class ScientistsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ScientistsWindow(QWidget *parent = 0);
    ~ScientistsWindow();                                            //Eyðir.
    void setDomain(Domain domain);                                  //Sækir aðgang að domain fallinu í gegnum m_domain breytu.

private slots:
    void on_button_scientist_addScientist_clicked();                //Opnar addScientist gluggann.
    void on_button_scientist_editscientist_clicked();               //Opnar editScientist gluggann.
    void on_button_Scientist_delscientist_clicked();                //Leyfir notandanum að eyða persónu.
    void on_button_scientist_relation_clicked();                    //Opnar relation glugann
    void on_table_scientist_scientists_doubleClicked();             //Leyfir notandanum að tvíklikka á persónu og opnar svo edit gluggann.
    void on_button_scientist_return_clicked();                      //Hættir keyrslu addScientist gluggans.
    void on_search_scientist_scientists_textChanged();              //Leyfir notandanaum að leita eftir persónu.

private:                                                            //Private breytur.
    Ui::ScientistsWindow *ui;
    Domain m_domain;
    void displayAllScientists();                                    //Sækir lista yfir tölvunarfræðinga.
    void displayScientists(vector<Person> persons);                 //Sýnir notanda lista yfir tölvunarfræðinga.
};

#endif // SCIENTISTSWINDOW_H
