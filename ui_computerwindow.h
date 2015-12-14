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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComputerWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *EditSearch;
    QTableWidget *tableWidget;
    QPushButton *btnAdd;
    QPushButton *buttonEdit;
    QPushButton *btnDel;
    QPushButton *button_computer_return;

    void setupUi(QDialog *ComputerWindow)
    {
        if (ComputerWindow->objectName().isEmpty())
            ComputerWindow->setObjectName(QStringLiteral("ComputerWindow"));
        ComputerWindow->resize(533, 502);
        verticalLayout = new QVBoxLayout(ComputerWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        EditSearch = new QLineEdit(ComputerWindow);
        EditSearch->setObjectName(QStringLiteral("EditSearch"));

        verticalLayout->addWidget(EditSearch);

        tableWidget = new QTableWidget(ComputerWindow);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(505, 284));
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget);

        btnAdd = new QPushButton(ComputerWindow);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        verticalLayout->addWidget(btnAdd);

        buttonEdit = new QPushButton(ComputerWindow);
        buttonEdit->setObjectName(QStringLiteral("buttonEdit"));

        verticalLayout->addWidget(buttonEdit);

        btnDel = new QPushButton(ComputerWindow);
        btnDel->setObjectName(QStringLiteral("btnDel"));

        verticalLayout->addWidget(btnDel);

        button_computer_return = new QPushButton(ComputerWindow);
        button_computer_return->setObjectName(QStringLiteral("button_computer_return"));

        verticalLayout->addWidget(button_computer_return);


        retranslateUi(ComputerWindow);

        QMetaObject::connectSlotsByName(ComputerWindow);
    } // setupUi

    void retranslateUi(QDialog *ComputerWindow)
    {
        ComputerWindow->setWindowTitle(QApplication::translate("ComputerWindow", "Computer list", 0));
        EditSearch->setPlaceholderText(QApplication::translate("ComputerWindow", "Write here to search", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ComputerWindow", "Computer name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ComputerWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ComputerWindow", "Was built", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ComputerWindow", "Year built", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ComputerWindow", "id", 0));
        btnAdd->setText(QApplication::translate("ComputerWindow", "Add Computer", 0));
        buttonEdit->setText(QApplication::translate("ComputerWindow", "Edit Computer", 0));
        btnDel->setText(QApplication::translate("ComputerWindow", "Delete Computer", 0));
        button_computer_return->setText(QApplication::translate("ComputerWindow", "Return to Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerWindow: public Ui_ComputerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERWINDOW_H
