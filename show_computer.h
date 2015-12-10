#ifndef SHOW_COMPUTER_H
#define SHOW_COMPUTER_H

#include <QDialog>

namespace Ui {
class show_computer;
}

class show_computer : public QDialog
{
    Q_OBJECT

public:
    explicit show_computer(QWidget *parent = 0);
    ~show_computer();

private:
    Ui::show_computer *ui;
};

#endif // SHOW_COMPUTER_H
