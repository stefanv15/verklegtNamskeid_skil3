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
    QLineEdit *search_computer_searchCpu;
    QTableWidget *table_computer_listCpu;
    QPushButton *button_computer_add;
    QPushButton *button_computer_edit;
    QPushButton *button_computer_delete;
    QPushButton *button_computer_relation;
    QPushButton *button_computer_return;

    void setupUi(QDialog *ComputerWindow)
    {
        if (ComputerWindow->objectName().isEmpty())
            ComputerWindow->setObjectName(QStringLiteral("ComputerWindow"));
        ComputerWindow->resize(903, 512);
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
        ComputerWindow->setPalette(palette);
        verticalLayout = new QVBoxLayout(ComputerWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        search_computer_searchCpu = new QLineEdit(ComputerWindow);
        search_computer_searchCpu->setObjectName(QStringLiteral("search_computer_searchCpu"));

        verticalLayout->addWidget(search_computer_searchCpu);

        table_computer_listCpu = new QTableWidget(ComputerWindow);
        table_computer_listCpu->setObjectName(QStringLiteral("table_computer_listCpu"));
        table_computer_listCpu->setMinimumSize(QSize(505, 284));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 170, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        table_computer_listCpu->setPalette(palette1);
        table_computer_listCpu->setSortingEnabled(true);
        table_computer_listCpu->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(table_computer_listCpu);

        button_computer_add = new QPushButton(ComputerWindow);
        button_computer_add->setObjectName(QStringLiteral("button_computer_add"));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        button_computer_add->setFont(font);
        button_computer_add->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_computer_add);

        button_computer_edit = new QPushButton(ComputerWindow);
        button_computer_edit->setObjectName(QStringLiteral("button_computer_edit"));
        button_computer_edit->setFont(font);
        button_computer_edit->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_computer_edit);

        button_computer_delete = new QPushButton(ComputerWindow);
        button_computer_delete->setObjectName(QStringLiteral("button_computer_delete"));
        button_computer_delete->setFont(font);
        button_computer_delete->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_computer_delete);

        button_computer_relation = new QPushButton(ComputerWindow);
        button_computer_relation->setObjectName(QStringLiteral("button_computer_relation"));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        button_computer_relation->setFont(font1);
        button_computer_relation->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_computer_relation);

        button_computer_return = new QPushButton(ComputerWindow);
        button_computer_return->setObjectName(QStringLiteral("button_computer_return"));
        QFont font2;
        font2.setFamily(QStringLiteral("Rockwell"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        button_computer_return->setFont(font2);
        button_computer_return->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 200, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_computer_return);


        retranslateUi(ComputerWindow);

        QMetaObject::connectSlotsByName(ComputerWindow);
    } // setupUi

    void retranslateUi(QDialog *ComputerWindow)
    {
        ComputerWindow->setWindowTitle(QApplication::translate("ComputerWindow", "Computers", 0));
        search_computer_searchCpu->setPlaceholderText(QApplication::translate("ComputerWindow", "Write here to search", 0));
        button_computer_add->setText(QApplication::translate("ComputerWindow", "Add Computer", 0));
        button_computer_edit->setText(QApplication::translate("ComputerWindow", "Edit Computer", 0));
        button_computer_delete->setText(QApplication::translate("ComputerWindow", "Delete Computer", 0));
        button_computer_relation->setText(QApplication::translate("ComputerWindow", "Relate Computer", 0));
        button_computer_return->setText(QApplication::translate("ComputerWindow", "Return to Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerWindow: public Ui_ComputerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERWINDOW_H
