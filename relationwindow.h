#ifndef RELATIONWINDOW_H
#define RELATIONWINDOW_H
#include "domain.h"
#include "computers.h"
#include "person.h"

#include <QDialog>

namespace Ui {
class RelationWindow;
}

class RelationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RelationWindow(QWidget *parent = 0);
    ~RelationWindow();

private slots:

    void on_button_relation_return_clicked();

private:
    Ui::RelationWindow *ui;
};

#endif // RELATIONWINDOW_H
