#ifndef SCIENTISTSWINDOW_H
#define SCIENTISTSWINDOW_H

#include <QDialog>

namespace Ui {
class ScientistsWindow;
}

class ScientistsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ScientistsWindow(QWidget *parent = 0);
    ~ScientistsWindow();

private:
    Ui::ScientistsWindow *ui;
};

#endif // SCIENTISTSWINDOW_H
