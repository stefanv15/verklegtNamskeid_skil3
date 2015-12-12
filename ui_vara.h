/********************************************************************************
** Form generated from reading UI file 'vara.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARA_H
#define UI_VARA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Vara
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Vara)
    {
        if (Vara->objectName().isEmpty())
            Vara->setObjectName(QStringLiteral("Vara"));
        Vara->resize(400, 300);
        pushButton = new QPushButton(Vara);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 270, 75, 23));

        retranslateUi(Vara);

        QMetaObject::connectSlotsByName(Vara);
    } // setupUi

    void retranslateUi(QDialog *Vara)
    {
        Vara->setWindowTitle(QApplication::translate("Vara", "Dialog", 0));
        pushButton->setText(QApplication::translate("Vara", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Vara: public Ui_Vara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARA_H
