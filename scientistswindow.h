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
    void displayAllScientists();
    void displayScientists(vector<Person> persons);

private:
    Ui::ScientistsWindow *ui;
    Domain m_domain;
};

#endif // SCIENTISTSWINDOW_H
