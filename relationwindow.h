#ifndef RELATION_H
#define RELATION_H

#include <QDialog>

namespace Ui {
class relation;
}

class relation : public QDialog
{
    Q_OBJECT

public:
    explicit relation(QWidget *parent = 0);
    ~relation();

private:
    Ui::relation *ui;
};

#endif // RELATION_H
