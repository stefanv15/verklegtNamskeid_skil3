#ifndef VARA_H
#define VARA_H

#include <QDialog>

namespace Ui {
class Vara;
}

class Vara : public QDialog
{
    Q_OBJECT

public:
    explicit Vara(QWidget *parent = 0);
    ~Vara();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Vara *ui;
};

#endif // VARA_H
