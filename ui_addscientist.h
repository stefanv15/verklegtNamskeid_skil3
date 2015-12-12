/********************************************************************************
** Form generated from reading UI file 'addscientist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCIENTIST_H
#define UI_ADDSCIENTIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AddScientist
{
public:

    void setupUi(QDialog *AddScientist)
    {
        if (AddScientist->objectName().isEmpty())
            AddScientist->setObjectName(QStringLiteral("AddScientist"));
        AddScientist->resize(400, 300);

        retranslateUi(AddScientist);

        QMetaObject::connectSlotsByName(AddScientist);
    } // setupUi

    void retranslateUi(QDialog *AddScientist)
    {
        AddScientist->setWindowTitle(QApplication::translate("AddScientist", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientist: public Ui_AddScientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTIST_H
