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

    QString getType(string type);
public slots:
      void sectionClicked(int index);

private slots:
    void on_button_computer_return_clicked();
    void on_button_computer_relation_clicked();
    void on_search_computer_searchCpu_textChanged();
    void on_button_computer_edit_clicked();
    void on_button_computer_delete_clicked();
    void on_button_computer_add_clicked();

    void on_table_computer_listCpu_doubleClicked(const QModelIndex &index);

private:
    Ui::ComputerWindow *ui;
    Domain m_domain;
    void fillList();
    void displayComputer(vector<Computers> computer);
};

#endif // COMPUTERWINDOW_H
