#ifndef EDITSCIENTIST_H
#define EDITSCIENTIST_H

#include <QDialog>

namespace Ui {
class EditScientist;
}

class EditScientist : public QDialog
{
    Q_OBJECT

public:
    explicit EditScientist(QWidget *parent = 0);
    ~EditScientist();

private slots:
    void on_button_cancel_clicked();

private:
    Ui::EditScientist *ui;
};

#endif // EDITSCIENTIST_H
