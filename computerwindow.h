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

public slots:
      void sectionClicked(int index);

private slots:
    void on_ComputerWindow_accepted();

    void on_btnAdd_clicked();

    void on_btnDel_clicked();

    void on_button_schientist_returnMainMenu_clicked();

private:
    Ui::ComputerWindow *ui;
    Domain m_domain;
};

#endif // COMPUTERWINDOW_H
