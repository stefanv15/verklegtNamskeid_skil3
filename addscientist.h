#ifndef ADDSCIENTIST_H
#define ADDSCIENTIST_H

#include <QDialog>

namespace Ui {
class AddScientist;
}

class AddScientist : public QDialog
{
    Q_OBJECT

public:
    explicit AddScientist(QWidget *parent = 0);
    ~AddScientist();

private slots:
    void on_button_cancel_clicked();

    void on_check_isdead_stateChanged(int arg1);

private:
    Ui::AddScientist *ui;
};

#endif // ADDSCIENTIST_H
