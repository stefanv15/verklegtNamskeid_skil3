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
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ScientistsWindow
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *ScientistsWindow)
    {
        if (ScientistsWindow->objectName().isEmpty())
            ScientistsWindow->setObjectName(QStringLiteral("ScientistsWindow"));
        ScientistsWindow->resize(413, 317);
        listWidget = new QListWidget(ScientistsWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 381, 192));

        retranslateUi(ScientistsWindow);

        QMetaObject::connectSlotsByName(ScientistsWindow);
    } // setupUi

    void retranslateUi(QDialog *ScientistsWindow)
    {
        ScientistsWindow->setWindowTitle(QApplication::translate("ScientistsWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ScientistsWindow: public Ui_ScientistsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENTISTSWINDOW_H
