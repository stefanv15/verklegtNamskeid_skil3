/********************************************************************************
** Form generated from reading UI file 'computeradd.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERADD_H
#define UI_COMPUTERADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ComputerAdd
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ComputerAdd)
    {
        if (ComputerAdd->objectName().isEmpty())
            ComputerAdd->setObjectName(QStringLiteral("ComputerAdd"));
        ComputerAdd->resize(400, 300);
        buttonBox = new QDialogButtonBox(ComputerAdd);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ComputerAdd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 131, 19));
        lineEdit = new QLineEdit(ComputerAdd);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 20, 231, 25));

        retranslateUi(ComputerAdd);
        QObject::connect(buttonBox, SIGNAL(accepted()), ComputerAdd, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ComputerAdd, SLOT(reject()));

        QMetaObject::connectSlotsByName(ComputerAdd);
    } // setupUi

    void retranslateUi(QDialog *ComputerAdd)
    {
        ComputerAdd->setWindowTitle(QApplication::translate("ComputerAdd", "Dialog", 0));
        label->setText(QApplication::translate("ComputerAdd", "Computer name:", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerAdd: public Ui_ComputerAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERADD_H
