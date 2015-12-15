/********************************************************************************
** Form generated from reading UI file 'relationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATIONWINDOW_H
#define UI_RELATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RelationWindow
{
public:
    QTableWidget *table_relation_computers;
    QLineEdit *search_relation_searchScientist;
    QLineEdit *search_relation_searchCpu;
    QTableWidget *table_relation_scientists;
    QPushButton *button_relation_relate;
    QPushButton *button_relation_return;
    QPushButton *button_relation_remove;

    void setupUi(QDialog *RelationWindow)
    {
        if (RelationWindow->objectName().isEmpty())
            RelationWindow->setObjectName(QStringLiteral("RelationWindow"));
        RelationWindow->resize(723, 264);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        RelationWindow->setPalette(palette);
        table_relation_computers = new QTableWidget(RelationWindow);
        if (table_relation_computers->columnCount() < 5)
            table_relation_computers->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table_relation_computers->setObjectName(QStringLiteral("table_relation_computers"));
        table_relation_computers->setGeometry(QRect(410, 10, 301, 211));
        search_relation_searchScientist = new QLineEdit(RelationWindow);
        search_relation_searchScientist->setObjectName(QStringLiteral("search_relation_searchScientist"));
        search_relation_searchScientist->setGeometry(QRect(10, 230, 301, 20));
        search_relation_searchCpu = new QLineEdit(RelationWindow);
        search_relation_searchCpu->setObjectName(QStringLiteral("search_relation_searchCpu"));
        search_relation_searchCpu->setGeometry(QRect(410, 230, 301, 20));
        table_relation_scientists = new QTableWidget(RelationWindow);
        if (table_relation_scientists->columnCount() < 4)
            table_relation_scientists->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        table_relation_scientists->setObjectName(QStringLiteral("table_relation_scientists"));
        table_relation_scientists->setGeometry(QRect(10, 10, 301, 211));
        button_relation_relate = new QPushButton(RelationWindow);
        button_relation_relate->setObjectName(QStringLiteral("button_relation_relate"));
        button_relation_relate->setEnabled(true);
        button_relation_relate->setGeometry(QRect(320, 90, 81, 71));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        button_relation_relate->setFont(font);
        button_relation_relate->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));
        button_relation_return = new QPushButton(RelationWindow);
        button_relation_return->setObjectName(QStringLiteral("button_relation_return"));
        button_relation_return->setGeometry(QRect(320, 230, 81, 21));
        button_relation_return->setFont(font);
        button_relation_return->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 200, 0); border: none;\n"
"}"));
        button_relation_remove = new QPushButton(RelationWindow);
        button_relation_remove->setObjectName(QStringLiteral("button_relation_remove"));
        button_relation_remove->setGeometry(QRect(320, 170, 81, 41));
        button_relation_remove->setFont(font);
        button_relation_remove->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        retranslateUi(RelationWindow);

        QMetaObject::connectSlotsByName(RelationWindow);
    } // setupUi

    void retranslateUi(QDialog *RelationWindow)
    {
        RelationWindow->setWindowTitle(QApplication::translate("RelationWindow", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = table_relation_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RelationWindow", "Computer name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_relation_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RelationWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_relation_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("RelationWindow", "Was built", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_relation_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("RelationWindow", "Year built", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_relation_computers->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("RelationWindow", "ID", 0));
        search_relation_searchScientist->setPlaceholderText(QApplication::translate("RelationWindow", "Write here to search..", 0));
        search_relation_searchCpu->setPlaceholderText(QApplication::translate("RelationWindow", "Write here to search..", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_relation_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("RelationWindow", "Scientist name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_relation_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("RelationWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_relation_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("RelationWindow", "Year born", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_relation_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("RelationWindow", "Year died", 0));
        button_relation_relate->setText(QApplication::translate("RelationWindow", "Relate!", 0));
        button_relation_return->setText(QApplication::translate("RelationWindow", " Return", 0));
        button_relation_remove->setText(QApplication::translate("RelationWindow", "Remove ", 0));
    } // retranslateUi

};

namespace Ui {
    class RelationWindow: public Ui_RelationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATIONWINDOW_H
