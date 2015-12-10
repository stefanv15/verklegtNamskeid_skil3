/********************************************************************************
** Form generated from reading UI file 'scientistswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENTISTSWINDOW_H
#define UI_SCIENTISTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ScientistsWindow
{
public:
    QListWidget *list_scientists;
    QPushButton *ret_button;
    QLineEdit *search_students;

    void setupUi(QDialog *ScientistsWindow)
    {
        if (ScientistsWindow->objectName().isEmpty())
            ScientistsWindow->setObjectName(QStringLiteral("ScientistsWindow"));
        ScientistsWindow->resize(413, 317);
        list_scientists = new QListWidget(ScientistsWindow);
        list_scientists->setObjectName(QStringLiteral("list_scientists"));
        list_scientists->setGeometry(QRect(10, 40, 381, 192));
        ret_button = new QPushButton(ScientistsWindow);
        ret_button->setObjectName(QStringLiteral("ret_button"));
        ret_button->setGeometry(QRect(264, 262, 121, 41));
        search_students = new QLineEdit(ScientistsWindow);
        search_students->setObjectName(QStringLiteral("search_students"));
        search_students->setGeometry(QRect(10, 10, 381, 20));

        retranslateUi(ScientistsWindow);

        QMetaObject::connectSlotsByName(ScientistsWindow);
    } // setupUi

    void retranslateUi(QDialog *ScientistsWindow)
    {
        ScientistsWindow->setWindowTitle(QApplication::translate("ScientistsWindow", "Dialog", 0));
        ret_button->setText(QApplication::translate("ScientistsWindow", "return to main menu", 0));
        search_students->setPlaceholderText(QApplication::translate("ScientistsWindow", "Write here to search", 0));
    } // retranslateUi

};

namespace Ui {
    class ScientistsWindow: public Ui_ScientistsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENTISTSWINDOW_H
