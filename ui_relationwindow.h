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

QT_BEGIN_NAMESPACE

class Ui_RelationWindow
{
public:

    void setupUi(QDialog *RelationWindow)
    {
        if (RelationWindow->objectName().isEmpty())
            RelationWindow->setObjectName(QStringLiteral("RelationWindow"));
        RelationWindow->resize(400, 300);

        retranslateUi(RelationWindow);

        QMetaObject::connectSlotsByName(RelationWindow);
    } // setupUi

    void retranslateUi(QDialog *RelationWindow)
    {
        RelationWindow->setWindowTitle(QApplication::translate("RelationWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class RelationWindow: public Ui_RelationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATIONWINDOW_H
