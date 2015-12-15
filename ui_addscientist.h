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
    QLabel *label_addScientist_name;
    QLineEdit *line_addScientist_nOs;
    QLabel *label_addScientist_gender;
    QRadioButton *rbutton_addScientist_male;
    QRadioButton *rbutton_addScientist_female;
    QLabel *label_addScientist_yearBorn;
    QLineEdit *line_addScientist_yearBorn;
    QCheckBox *checkBox_addScientist_isdead;
    QLabel *label_addScientist_yearDied;
    QLineEdit *line_addSchientist_yearDied;
    QPushButton *button_addScientist_save;
    QPushButton *button_addScientist_cancel;

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
        label_addScientist_name = new QLabel(AddScientist);
        label_addScientist_name->setObjectName(QStringLiteral("label_addScientist_name"));
        QFont font;
        font.setPointSize(10);
        label_addScientist_name->setFont(font);

        verticalLayout->addWidget(label_addScientist_name);

        line_addScientist_nOs = new QLineEdit(AddScientist);
        line_addScientist_nOs->setObjectName(QStringLiteral("line_addScientist_nOs"));

        verticalLayout->addWidget(line_addScientist_nOs);

        label_addScientist_gender = new QLabel(AddScientist);
        label_addScientist_gender->setObjectName(QStringLiteral("label_addScientist_gender"));
        label_addScientist_gender->setFont(font);

        verticalLayout->addWidget(label_addScientist_gender);

        rbutton_addScientist_male = new QRadioButton(AddScientist);
        rbutton_addScientist_male->setObjectName(QStringLiteral("rbutton_addScientist_male"));

        verticalLayout->addWidget(rbutton_addScientist_male);

        rbutton_addScientist_female = new QRadioButton(AddScientist);
        rbutton_addScientist_female->setObjectName(QStringLiteral("rbutton_addScientist_female"));

        verticalLayout->addWidget(rbutton_addScientist_female);

        label_addScientist_yearBorn = new QLabel(AddScientist);
        label_addScientist_yearBorn->setObjectName(QStringLiteral("label_addScientist_yearBorn"));
        label_addScientist_yearBorn->setFont(font);

        verticalLayout->addWidget(label_addScientist_yearBorn);

        line_addScientist_yearBorn = new QLineEdit(AddScientist);
        line_addScientist_yearBorn->setObjectName(QStringLiteral("line_addScientist_yearBorn"));
        line_addScientist_yearBorn->setMaxLength(4);

        verticalLayout->addWidget(line_addScientist_yearBorn);

        checkBox_addScientist_isdead = new QCheckBox(AddScientist);
        checkBox_addScientist_isdead->setObjectName(QStringLiteral("checkBox_addScientist_isdead"));
        checkBox_addScientist_isdead->setFont(font);

        verticalLayout->addWidget(checkBox_addScientist_isdead);

        label_addScientist_yearDied = new QLabel(AddScientist);
        label_addScientist_yearDied->setObjectName(QStringLiteral("label_addScientist_yearDied"));
        label_addScientist_yearDied->setFont(font);

        verticalLayout->addWidget(label_addScientist_yearDied);

        line_addSchientist_yearDied = new QLineEdit(AddScientist);
        line_addSchientist_yearDied->setObjectName(QStringLiteral("line_addSchientist_yearDied"));
        line_addSchientist_yearDied->setEnabled(false);
        line_addSchientist_yearDied->setMaxLength(4);

        verticalLayout->addWidget(line_addSchientist_yearDied);

        button_addScientist_save = new QPushButton(AddScientist);
        button_addScientist_save->setObjectName(QStringLiteral("button_addScientist_save"));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        button_addScientist_save->setFont(font1);
        button_addScientist_save->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_addScientist_save);

        button_addScientist_cancel = new QPushButton(AddScientist);
        button_addScientist_cancel->setObjectName(QStringLiteral("button_addScientist_cancel"));
        button_addScientist_cancel->setFont(font1);
        button_addScientist_cancel->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_addScientist_cancel);


        retranslateUi(AddScientist);

        QMetaObject::connectSlotsByName(AddScientist);
    } // setupUi

    void retranslateUi(QDialog *AddScientist)
    {
        AddScientist->setWindowTitle(QApplication::translate("AddScientist", "Dialog", 0));
        label_addScientist_name->setText(QApplication::translate("AddScientist", "Name of scientist", 0));
        line_addScientist_nOs->setPlaceholderText(QApplication::translate("AddScientist", "Type name of scientist here", 0));
        label_addScientist_gender->setText(QApplication::translate("AddScientist", "Gender", 0));
        rbutton_addScientist_male->setText(QApplication::translate("AddScientist", "Male", 0));
        rbutton_addScientist_female->setText(QApplication::translate("AddScientist", "Female", 0));
        label_addScientist_yearBorn->setText(QApplication::translate("AddScientist", "Year born", 0));
        line_addScientist_yearBorn->setPlaceholderText(QApplication::translate("AddScientist", "Type here when scientist was born", 0));
        checkBox_addScientist_isdead->setText(QApplication::translate("AddScientist", "Is this scientist dead?", 0));
        label_addScientist_yearDied->setText(QApplication::translate("AddScientist", "Year died", 0));
        line_addSchientist_yearDied->setPlaceholderText(QApplication::translate("AddScientist", "Type here when scientist died", 0));
        button_addScientist_save->setText(QApplication::translate("AddScientist", "Save", 0));
        button_addScientist_cancel->setText(QApplication::translate("AddScientist", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientist: public Ui_AddScientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTIST_H
