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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddScientist
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *line_nameofscientist;
    QLabel *label_2;
    QLineEdit *line_gender;
    QLabel *label_3;
    QLineEdit *line_yearborn;
    QCheckBox *check_isdead;
    QLabel *label_4;
    QLineEdit *line_yeardied;
    QPushButton *button_add;
    QPushButton *button_cancel;

    void setupUi(QDialog *AddScientist)
    {
        if (AddScientist->objectName().isEmpty())
            AddScientist->setObjectName(QStringLiteral("AddScientist"));
        AddScientist->resize(455, 325);
        QPalette palette;
        QBrush brush(QColor(255, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        AddScientist->setPalette(palette);
        verticalLayout = new QVBoxLayout(AddScientist);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AddScientist);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line_nameofscientist = new QLineEdit(AddScientist);
        line_nameofscientist->setObjectName(QStringLiteral("line_nameofscientist"));

        verticalLayout->addWidget(line_nameofscientist);

        label_2 = new QLabel(AddScientist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        line_gender = new QLineEdit(AddScientist);
        line_gender->setObjectName(QStringLiteral("line_gender"));

        verticalLayout->addWidget(line_gender);

        label_3 = new QLabel(AddScientist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        line_yearborn = new QLineEdit(AddScientist);
        line_yearborn->setObjectName(QStringLiteral("line_yearborn"));

        verticalLayout->addWidget(line_yearborn);

        check_isdead = new QCheckBox(AddScientist);
        check_isdead->setObjectName(QStringLiteral("check_isdead"));
        check_isdead->setFont(font);

        verticalLayout->addWidget(check_isdead);

        label_4 = new QLabel(AddScientist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        line_yeardied = new QLineEdit(AddScientist);
        line_yeardied->setObjectName(QStringLiteral("line_yeardied"));

        verticalLayout->addWidget(line_yeardied);

        button_add = new QPushButton(AddScientist);
        button_add->setObjectName(QStringLiteral("button_add"));

        verticalLayout->addWidget(button_add);

        button_cancel = new QPushButton(AddScientist);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));

        verticalLayout->addWidget(button_cancel);


        retranslateUi(AddScientist);

        QMetaObject::connectSlotsByName(AddScientist);
    } // setupUi

    void retranslateUi(QDialog *AddScientist)
    {
        AddScientist->setWindowTitle(QApplication::translate("AddScientist", "Dialog", 0));
        label->setText(QApplication::translate("AddScientist", "Name of scientist", 0));
        line_nameofscientist->setPlaceholderText(QApplication::translate("AddScientist", "Type name of scientist here", 0));
        label_2->setText(QApplication::translate("AddScientist", "Gender", 0));
        line_gender->setPlaceholderText(QApplication::translate("AddScientist", "Type \"m\" for male and \"f\" for female", 0));
        label_3->setText(QApplication::translate("AddScientist", "Year born", 0));
        line_yearborn->setPlaceholderText(QApplication::translate("AddScientist", "Type here when scientist was born", 0));
        check_isdead->setText(QApplication::translate("AddScientist", "Is this scientist dead?", 0));
        label_4->setText(QApplication::translate("AddScientist", "Year died", 0));
        line_yeardied->setPlaceholderText(QApplication::translate("AddScientist", "Type here when scientist died", 0));
        button_add->setText(QApplication::translate("AddScientist", "Add this scientist", 0));
        button_cancel->setText(QApplication::translate("AddScientist", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientist: public Ui_AddScientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTIST_H
