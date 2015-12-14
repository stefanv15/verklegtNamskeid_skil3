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
    ~ScientistsWindow();
    void setDomain(Domain domain);

private slots:

    void on_ret_button_clicked();

    void on_button_scientist_addScientist_clicked();

    void on_button_scientist_editscientist_clicked();

    void on_search_students_textChanged();

    void on_button_Scientist_delscientist_clicked();

private:
    Ui::ScientistsWindow *ui;
    Domain m_domain;
    void displayAllScientists();
    void displayScientists(vector<Person> persons);
};

#endif // SCIENTISTSWINDOW_H
