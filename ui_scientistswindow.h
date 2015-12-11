/********************************************************************************
** Form generated from reading UI file 'scientistswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENTISTSWINDOW_H
#define UI_SCIENTISTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ScientistsWindow
{
public:
    QPushButton *button_schientist_return;
    QLineEdit *search_students;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *line_name;
    QLabel *label_3;
    QLineEdit *line_gender;
    QLabel *label_4;
    QLineEdit *line_yearBorn;
    QLabel *label_5;
    QLineEdit *line_yearDied;
    QPushButton *button_schientist_addSchientist;
    QTableWidget *table_scientists;

    void setupUi(QDialog *ScientistsWindow)
    {
        if (ScientistsWindow->objectName().isEmpty())
            ScientistsWindow->setObjectName(QStringLiteral("ScientistsWindow"));
        ScientistsWindow->resize(446, 483);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(202, 208, 203, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 181, 8, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        ScientistsWindow->setPalette(palette);
        button_schientist_return = new QPushButton(ScientistsWindow);
        button_schientist_return->setObjectName(QStringLiteral("button_schientist_return"));
        button_schientist_return->setGeometry(QRect(310, 440, 121, 31));
        search_students = new QLineEdit(ScientistsWindow);
        search_students->setObjectName(QStringLiteral("search_students"));
        search_students->setGeometry(QRect(10, 10, 381, 20));
        label = new QLabel(ScientistsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 230, 181, 21));
        label_2 = new QLabel(ScientistsWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 260, 61, 21));
        line_name = new QLineEdit(ScientistsWindow);
        line_name->setObjectName(QStringLiteral("line_name"));
        line_name->setGeometry(QRect(20, 280, 241, 20));
        label_3 = new QLabel(ScientistsWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 310, 71, 21));
        line_gender = new QLineEdit(ScientistsWindow);
        line_gender->setObjectName(QStringLiteral("line_gender"));
        line_gender->setGeometry(QRect(20, 330, 241, 20));
        label_4 = new QLabel(ScientistsWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 360, 91, 21));
        line_yearBorn = new QLineEdit(ScientistsWindow);
        line_yearBorn->setObjectName(QStringLiteral("line_yearBorn"));
        line_yearBorn->setGeometry(QRect(20, 380, 241, 20));
        label_5 = new QLabel(ScientistsWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 410, 91, 21));
        line_yearDied = new QLineEdit(ScientistsWindow);
        line_yearDied->setObjectName(QStringLiteral("line_yearDied"));
        line_yearDied->setGeometry(QRect(20, 430, 241, 20));
        button_schientist_addSchientist = new QPushButton(ScientistsWindow);
        button_schientist_addSchientist->setObjectName(QStringLiteral("button_schientist_addSchientist"));
        button_schientist_addSchientist->setGeometry(QRect(10, 460, 251, 23));
        table_scientists = new QTableWidget(ScientistsWindow);
        if (table_scientists->columnCount() < 4)
            table_scientists->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_scientists->setObjectName(QStringLiteral("table_scientists"));
        table_scientists->setGeometry(QRect(10, 40, 431, 192));
        table_scientists->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_scientists->horizontalHeader()->setStretchLastSection(true);

        retranslateUi(ScientistsWindow);

        QMetaObject::connectSlotsByName(ScientistsWindow);
    } // setupUi

    void retranslateUi(QDialog *ScientistsWindow)
    {
        ScientistsWindow->setWindowTitle(QApplication::translate("ScientistsWindow", "Dialog", 0));
        button_schientist_return->setText(QApplication::translate("ScientistsWindow", "return to main menu", 0));
        search_students->setPlaceholderText(QApplication::translate("ScientistsWindow", "Write here to search", 0));
        label->setText(QApplication::translate("ScientistsWindow", "<h2 style=\"color:#FFA500;\">Add a new scientist</h2>", 0));
        label_2->setText(QApplication::translate("ScientistsWindow", "<h2 style=\"color:#FFA500;\">Name</h2>", 0));
        line_name->setPlaceholderText(QApplication::translate("ScientistsWindow", "Write name of scientist here", 0));
        label_3->setText(QApplication::translate("ScientistsWindow", "<h2 style=\"color:#FFA500;\">Gender</h2>", 0));
        line_gender->setPlaceholderText(QApplication::translate("ScientistsWindow", "Write 'm' for male, 'f' for female", 0));
        label_4->setText(QApplication::translate("ScientistsWindow", "<h2 style=\"color:#FFA500;\">Year born</h2>", 0));
        line_yearBorn->setPlaceholderText(QApplication::translate("ScientistsWindow", "When was the scientist born?", 0));
        label_5->setText(QApplication::translate("ScientistsWindow", "<h2 style=\"color:#FFA500;\">Year died</h2>", 0));
        line_yearDied->setPlaceholderText(QApplication::translate("ScientistsWindow", "When did the scientist die. type '-1' if he is alive", 0));
        button_schientist_addSchientist->setText(QApplication::translate("ScientistsWindow", "Add scientist", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ScientistsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ScientistsWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ScientistsWindow", "Year born", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ScientistsWindow", "Year died", 0));
    } // retranslateUi

};

namespace Ui {
    class ScientistsWindow: public Ui_ScientistsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENTISTSWINDOW_H
