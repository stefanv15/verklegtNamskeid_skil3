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
    //void on_search_relation_searchScientist_textChanged(const QString &arg1);
    
    void on_table_relation_schientists_activated(const QModelIndex &index);
    
private:
    Ui::RelationWindow *ui;
};

#endif // RELATIONWINDOW_H
