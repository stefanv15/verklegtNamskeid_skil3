/********************************************************************************
** Form generated from reading UI file 'editscientist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSCIENTIST_H
#define UI_EDITSCIENTIST_H

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

QT_BEGIN_NAMESPACE

class Ui_EditScientist
{
public:
    QLineEdit *line_editnameofscientist;
    QPushButton *button_edit;
    QLabel *label;
    QLabel *label_3;
    QPushButton *button_cancel;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *line_edityearborn;
    QLineEdit *line_edityeardied;
    QCheckBox *check_editisdead;
    QLineEdit *line_editgender;

    void setupUi(QDialog *EditScientist)
    {
        if (EditScientist->objectName().isEmpty())
            EditScientist->setObjectName(QStringLiteral("EditScientist"));
        EditScientist->resize(471, 333);
        QPalette palette;
        QBrush brush(QColor(255, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        EditScientist->setPalette(palette);
        line_editnameofscientist = new QLineEdit(EditScientist);
        line_editnameofscientist->setObjectName(QStringLiteral("line_editnameofscientist"));
        line_editnameofscientist->setGeometry(QRect(0, 32, 437, 20));
        button_edit = new QPushButton(EditScientist);
        button_edit->setObjectName(QStringLiteral("button_edit"));
        button_edit->setGeometry(QRect(0, 255, 437, 23));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        button_edit->setFont(font);
        button_edit->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));
        label = new QLabel(EditScientist);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 437, 26));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_3 = new QLabel(EditScientist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 116, 437, 26));
        label_3->setFont(font1);
        button_cancel = new QPushButton(EditScientist);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));
        button_cancel->setGeometry(QRect(0, 284, 437, 23));
        button_cancel->setFont(font);
        button_cancel->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));
        label_4 = new QLabel(EditScientist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 197, 437, 26));
        label_4->setFont(font1);
        label_2 = new QLabel(EditScientist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 58, 437, 26));
        label_2->setFont(font1);
        line_edityearborn = new QLineEdit(EditScientist);
        line_edityearborn->setObjectName(QStringLiteral("line_edityearborn"));
        line_edityearborn->setGeometry(QRect(0, 148, 437, 20));
        line_edityeardied = new QLineEdit(EditScientist);
        line_edityeardied->setObjectName(QStringLiteral("line_edityeardied"));
        line_edityeardied->setGeometry(QRect(0, 229, 437, 20));
        check_editisdead = new QCheckBox(EditScientist);
        check_editisdead->setObjectName(QStringLiteral("check_editisdead"));
        check_editisdead->setGeometry(QRect(0, 174, 437, 17));
        QFont font2;
        font2.setPointSize(10);
        check_editisdead->setFont(font2);
        line_editgender = new QLineEdit(EditScientist);
        line_editgender->setObjectName(QStringLiteral("line_editgender"));
        line_editgender->setGeometry(QRect(0, 90, 437, 20));

        retranslateUi(EditScientist);

        QMetaObject::connectSlotsByName(EditScientist);
    } // setupUi

    void retranslateUi(QDialog *EditScientist)
    {
        EditScientist->setWindowTitle(QApplication::translate("EditScientist", "Dialog", 0));
        line_editnameofscientist->setPlaceholderText(QApplication::translate("EditScientist", "Type name of scientist here", 0));
        button_edit->setText(QApplication::translate("EditScientist", "Edit", 0));
        label->setText(QApplication::translate("EditScientist", "Name of scientist", 0));
        label_3->setText(QApplication::translate("EditScientist", "Year born", 0));
        button_cancel->setText(QApplication::translate("EditScientist", "Cancel", 0));
        label_4->setText(QApplication::translate("EditScientist", "Year died", 0));
        label_2->setText(QApplication::translate("EditScientist", "Gender", 0));
        line_edityearborn->setPlaceholderText(QApplication::translate("EditScientist", "Type here when scientist was born", 0));
        line_edityeardied->setPlaceholderText(QApplication::translate("EditScientist", "Type here when scientist died", 0));
        check_editisdead->setText(QApplication::translate("EditScientist", "Is this scientist dead?", 0));
        line_editgender->setPlaceholderText(QApplication::translate("EditScientist", "Type \"m\" for male and \"f\" for female", 0));
    } // retranslateUi

};

namespace Ui {
    class EditScientist: public Ui_EditScientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSCIENTIST_H
