#ifndef COMPUTERWINDOW_H
#define COMPUTERWINDOW_H
#include "domain.h"
#include "computers.h"
#include <QDialog>

namespace Ui {
class ComputerWindow;
}

class ComputerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ComputerWindow(QWidget *parent = 0);
    ~ComputerWindow();

private slots:
    void on_button_computer_return_clicked();
    void on_button_computer_addCpu_clicked();
    void on_buttonEdit_clicked();
    void on_btnAdd_clicked();
    void on_btnDel_clicked();
    void on_EditSearch_textChanged();
    void on_button_computer_relation_clicked();

    void on_tableWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::ComputerWindow *ui;
    Domain m_domain;
    void fillList();
    void displayComputer(vector<Computers> computer);
};

#endif // COMPUTERWINDOW_H
