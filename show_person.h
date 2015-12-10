#ifndef SHOW_PERSON_H
#define SHOW_PERSON_H

#include <QDialog>

namespace Ui {
class show_person;
}

class show_person : public QDialog
{
    Q_OBJECT

public:
    explicit show_person(QWidget *parent = 0);
    ~show_person();

private:
    Ui::show_person *ui;
};

#endif // SHOW_PERSON_H
