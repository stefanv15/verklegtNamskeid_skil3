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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComputerAdd
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *editComputerName;
    QLabel *label_2;
    QRadioButton *radioAnalog;
    QRadioButton *radioDigital;
    QRadioButton *radioHybrid;
    QCheckBox *checkWasBuilt;
    QLabel *label_4;
    QLineEdit *editYearBuilt;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;

    void setupUi(QDialog *ComputerAdd)
    {
        if (ComputerAdd->objectName().isEmpty())
            ComputerAdd->setObjectName(QStringLiteral("ComputerAdd"));
        ComputerAdd->resize(373, 299);
        verticalLayout = new QVBoxLayout(ComputerAdd);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ComputerAdd);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        editComputerName = new QLineEdit(ComputerAdd);
        editComputerName->setObjectName(QStringLiteral("editComputerName"));

        verticalLayout->addWidget(editComputerName);

        label_2 = new QLabel(ComputerAdd);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        radioAnalog = new QRadioButton(ComputerAdd);
        radioAnalog->setObjectName(QStringLiteral("radioAnalog"));
        radioAnalog->setChecked(true);

        verticalLayout->addWidget(radioAnalog);

        radioDigital = new QRadioButton(ComputerAdd);
        radioDigital->setObjectName(QStringLiteral("radioDigital"));

        verticalLayout->addWidget(radioDigital);

        radioHybrid = new QRadioButton(ComputerAdd);
        radioHybrid->setObjectName(QStringLiteral("radioHybrid"));

        verticalLayout->addWidget(radioHybrid);

        checkWasBuilt = new QCheckBox(ComputerAdd);
        checkWasBuilt->setObjectName(QStringLiteral("checkWasBuilt"));
        checkWasBuilt->setLayoutDirection(Qt::LeftToRight);
        checkWasBuilt->setAutoFillBackground(false);

        verticalLayout->addWidget(checkWasBuilt);

        label_4 = new QLabel(ComputerAdd);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        editYearBuilt = new QLineEdit(ComputerAdd);
        editYearBuilt->setObjectName(QStringLiteral("editYearBuilt"));
        editYearBuilt->setEnabled(false);

        verticalLayout->addWidget(editYearBuilt);

        buttonOK = new QPushButton(ComputerAdd);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));

        verticalLayout->addWidget(buttonOK);

        buttonCancel = new QPushButton(ComputerAdd);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        verticalLayout->addWidget(buttonCancel);

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
        label->setText(QApplication::translate("ComputerAdd", "Computer name:", 0));
        editComputerName->setPlaceholderText(QApplication::translate("ComputerAdd", "Type name of computer here", 0));
        label_2->setText(QApplication::translate("ComputerAdd", "Computer type:", 0));
        radioAnalog->setText(QApplication::translate("ComputerAdd", "Analog", 0));
        radioDigital->setText(QApplication::translate("ComputerAdd", "Digital", 0));
        radioHybrid->setText(QApplication::translate("ComputerAdd", "Hybrid", 0));
        checkWasBuilt->setText(QApplication::translate("ComputerAdd", "Was built?", 0));
        label_4->setText(QApplication::translate("ComputerAdd", "Year built:", 0));
        editYearBuilt->setPlaceholderText(QApplication::translate("ComputerAdd", "Type here when computer was built.", 0));
        buttonOK->setText(QApplication::translate("ComputerAdd", "Save", 0));
        buttonCancel->setText(QApplication::translate("ComputerAdd", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerAdd: public Ui_ComputerAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERADD_H
