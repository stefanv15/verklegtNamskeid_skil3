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
        RelationWindow->resize(406, 345);
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
