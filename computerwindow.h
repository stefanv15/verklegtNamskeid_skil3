#ifndef COMPUTERWINDOW_H
#define COMPUTERWINDOW_H

#include <QDialog>

namespace Ui {
class computerwindow;
}

class computerwindow : public QDialog
{
    Q_OBJECT

public:
    explicit computerwindow(QWidget *parent = 0);
    ~computerwindow();

private:
    Ui::computerwindow *ui;
};

#endif // COMPUTERWINDOW_H
