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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddScientist
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLineEdit *line_nameofscientist;
    QLabel *gender;
    QRadioButton *radioButtonMale;
    QRadioButton *radioButtonFemale;
    QLabel *YearBorn;
    QLineEdit *line_yearborn;
    QCheckBox *check_isdead;
    QLabel *yearDied;
    QLineEdit *line_yeardied;
    QPushButton *button_add;
    QPushButton *button_cancel;

    void setupUi(QDialog *AddScientist)
    {
        if (AddScientist->objectName().isEmpty())
            AddScientist->setObjectName(QStringLiteral("AddScientist"));
        AddScientist->resize(455, 418);
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
        name = new QLabel(AddScientist);
        name->setObjectName(QStringLiteral("name"));
        QFont font;
        font.setPointSize(10);
        name->setFont(font);

        verticalLayout->addWidget(name);

        line_nameofscientist = new QLineEdit(AddScientist);
        line_nameofscientist->setObjectName(QStringLiteral("line_nameofscientist"));

        verticalLayout->addWidget(line_nameofscientist);

        gender = new QLabel(AddScientist);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setFont(font);

        verticalLayout->addWidget(gender);

        radioButtonMale = new QRadioButton(AddScientist);
        radioButtonMale->setObjectName(QStringLiteral("radioButtonMale"));

        verticalLayout->addWidget(radioButtonMale);

        radioButtonFemale = new QRadioButton(AddScientist);
        radioButtonFemale->setObjectName(QStringLiteral("radioButtonFemale"));

        verticalLayout->addWidget(radioButtonFemale);

        YearBorn = new QLabel(AddScientist);
        YearBorn->setObjectName(QStringLiteral("YearBorn"));
        YearBorn->setFont(font);

        verticalLayout->addWidget(YearBorn);

        line_yearborn = new QLineEdit(AddScientist);
        line_yearborn->setObjectName(QStringLiteral("line_yearborn"));
        line_yearborn->setMaxLength(4);

        verticalLayout->addWidget(line_yearborn);

        check_isdead = new QCheckBox(AddScientist);
        check_isdead->setObjectName(QStringLiteral("check_isdead"));
        check_isdead->setFont(font);

        verticalLayout->addWidget(check_isdead);

        yearDied = new QLabel(AddScientist);
        yearDied->setObjectName(QStringLiteral("yearDied"));
        yearDied->setFont(font);

        verticalLayout->addWidget(yearDied);

        line_yeardied = new QLineEdit(AddScientist);
        line_yeardied->setObjectName(QStringLiteral("line_yeardied"));
        line_yeardied->setEnabled(false);
        line_yeardied->setMaxLength(4);

        verticalLayout->addWidget(line_yeardied);

        button_add = new QPushButton(AddScientist);
        button_add->setObjectName(QStringLiteral("button_add"));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        button_add->setFont(font1);
        button_add->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_add);

        button_cancel = new QPushButton(AddScientist);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));
        button_cancel->setFont(font1);
        button_cancel->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_cancel);


        retranslateUi(AddScientist);

        QMetaObject::connectSlotsByName(AddScientist);
    } // setupUi

    void retranslateUi(QDialog *AddScientist)
    {
        AddScientist->setWindowTitle(QApplication::translate("AddScientist", "Dialog", 0));
        name->setText(QApplication::translate("AddScientist", "Name of scientist", 0));
        line_nameofscientist->setPlaceholderText(QApplication::translate("AddScientist", "Type name of scientist here", 0));
        gender->setText(QApplication::translate("AddScientist", "Gender", 0));
        radioButtonMale->setText(QApplication::translate("AddScientist", "Male", 0));
        radioButtonFemale->setText(QApplication::translate("AddScientist", "Female", 0));
        YearBorn->setText(QApplication::translate("AddScientist", "Year born", 0));
        line_yearborn->setPlaceholderText(QApplication::translate("AddScientist", "Type here when scientist was born", 0));
        check_isdead->setText(QApplication::translate("AddScientist", "Is this scientist dead?", 0));
        yearDied->setText(QApplication::translate("AddScientist", "Year died", 0));
        line_yeardied->setPlaceholderText(QApplication::translate("AddScientist", "Type here when scientist died", 0));
        button_add->setText(QApplication::translate("AddScientist", "Confirm", 0));
        button_cancel->setText(QApplication::translate("AddScientist", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientist: public Ui_AddScientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTIST_H
