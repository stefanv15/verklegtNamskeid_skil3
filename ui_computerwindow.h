/********************************************************************************
** Form generated from reading UI file 'computerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERWINDOW_H
#define UI_COMPUTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ComputerWindow
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QPushButton *btnAdd;
    QPushButton *btnDel;

    void setupUi(QDialog *ComputerWindow)
    {
        if (ComputerWindow->objectName().isEmpty())
            ComputerWindow->setObjectName(QStringLiteral("ComputerWindow"));
        ComputerWindow->resize(730, 420);
        gridLayout = new QGridLayout(ComputerWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(ComputerWindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        btnAdd = new QPushButton(ComputerWindow);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        gridLayout->addWidget(btnAdd, 1, 0, 1, 1);

        btnDel = new QPushButton(ComputerWindow);
        btnDel->setObjectName(QStringLiteral("btnDel"));

        gridLayout->addWidget(btnDel, 2, 0, 1, 1);


        retranslateUi(ComputerWindow);

        QMetaObject::connectSlotsByName(ComputerWindow);
    } // setupUi

    void retranslateUi(QDialog *ComputerWindow)
    {
        ComputerWindow->setWindowTitle(QApplication::translate("ComputerWindow", "Computer list", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ComputerWindow", "Computer name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ComputerWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ComputerWindow", "Was built", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ComputerWindow", "Year built", 0));
        btnAdd->setText(QApplication::translate("ComputerWindow", "Add computer", 0));
        btnDel->setText(QApplication::translate("ComputerWindow", "Delete computer", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerWindow: public Ui_ComputerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERWINDOW_H
