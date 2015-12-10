#ifndef SCIENTISTS_H
#define SCIENTISTS_H

#include <QDialog>

namespace Ui {
class scientists;
}

class scientists : public QDialog
{
    Q_OBJECT

public:
    explicit scientists(QWidget *parent = 0);
    ~scientists();

private:
    Ui::scientists *ui;
};

#endif // SCIENTISTS_H
