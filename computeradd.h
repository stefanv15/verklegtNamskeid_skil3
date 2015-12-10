#ifndef COMPUTERADD_H
#define COMPUTERADD_H

#include <QDialog>

namespace Ui {
class ComputerAdd;
}

class ComputerAdd : public QDialog
{
    Q_OBJECT

public:
    explicit ComputerAdd(QWidget *parent = 0);
    ~ComputerAdd();

private:
    Ui::ComputerAdd *ui;
};

#endif // COMPUTERADD_H
