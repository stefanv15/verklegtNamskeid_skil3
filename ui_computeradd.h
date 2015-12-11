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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_ComputerAdd
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *checkWasBuilt;
    QLabel *label_4;
    QLineEdit *editYearBuilt;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;
    QLabel *label;
    QLineEdit *editComputerName;
    QRadioButton *radioAnalog;
    QRadioButton *radioHybrid;
    QRadioButton *radioDigital;

    void setupUi(QDialog *ComputerAdd)
    {
        if (ComputerAdd->objectName().isEmpty())
            ComputerAdd->setObjectName(QStringLiteral("ComputerAdd"));
        ComputerAdd->resize(400, 299);
        gridLayout = new QGridLayout(ComputerAdd);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(ComputerAdd);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        checkWasBuilt = new QCheckBox(ComputerAdd);
        checkWasBuilt->setObjectName(QStringLiteral("checkWasBuilt"));
        checkWasBuilt->setLayoutDirection(Qt::LeftToRight);
        checkWasBuilt->setAutoFillBackground(false);

        gridLayout->addWidget(checkWasBuilt, 7, 0, 1, 3);

        label_4 = new QLabel(ComputerAdd);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        editYearBuilt = new QLineEdit(ComputerAdd);
        editYearBuilt->setObjectName(QStringLiteral("editYearBuilt"));
        editYearBuilt->setEnabled(false);

        gridLayout->addWidget(editYearBuilt, 8, 2, 1, 1);

        buttonOK = new QPushButton(ComputerAdd);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));

        gridLayout->addWidget(buttonOK, 9, 2, 1, 1);

        buttonCancel = new QPushButton(ComputerAdd);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        gridLayout->addWidget(buttonCancel, 10, 2, 1, 1);

        label = new QLabel(ComputerAdd);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editComputerName = new QLineEdit(ComputerAdd);
        editComputerName->setObjectName(QStringLiteral("editComputerName"));

        gridLayout->addWidget(editComputerName, 0, 2, 1, 1);

        radioAnalog = new QRadioButton(ComputerAdd);
        radioAnalog->setObjectName(QStringLiteral("radioAnalog"));
        radioAnalog->setChecked(true);

        gridLayout->addWidget(radioAnalog, 1, 2, 1, 1);

        radioHybrid = new QRadioButton(ComputerAdd);
        radioHybrid->setObjectName(QStringLiteral("radioHybrid"));

        gridLayout->addWidget(radioHybrid, 3, 2, 1, 1);

        radioDigital = new QRadioButton(ComputerAdd);
        radioDigital->setObjectName(QStringLiteral("radioDigital"));

        gridLayout->addWidget(radioDigital, 2, 2, 1, 1);

        QWidget::setTabOrder(editComputerName, checkWasBuilt);
        QWidget::setTabOrder(checkWasBuilt, editYearBuilt);
        QWidget::setTabOrder(editYearBuilt, buttonOK);
        QWidget::setTabOrder(buttonOK, buttonCancel);

        retranslateUi(ComputerAdd);

        buttonOK->setDefault(true);


        QMetaObject::connectSlotsByName(ComputerAdd);
    } // setupUi

    void retranslateUi(QDialog *ComputerAdd)
    {
        ComputerAdd->setWindowTitle(QApplication::translate("ComputerAdd", "Add new Computer", 0));
        label_2->setText(QApplication::translate("ComputerAdd", "Computer type:", 0));
        checkWasBuilt->setText(QApplication::translate("ComputerAdd", "Was built?", 0));
        label_4->setText(QApplication::translate("ComputerAdd", "Year built:", 0));
        buttonOK->setText(QApplication::translate("ComputerAdd", "Save", 0));
        buttonCancel->setText(QApplication::translate("ComputerAdd", "Cancel", 0));
        label->setText(QApplication::translate("ComputerAdd", "Computer name:", 0));
        radioAnalog->setText(QApplication::translate("ComputerAdd", "Analog", 0));
        radioHybrid->setText(QApplication::translate("ComputerAdd", "Hybrid", 0));
        radioDigital->setText(QApplication::translate("ComputerAdd", "Digital", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerAdd: public Ui_ComputerAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERADD_H
