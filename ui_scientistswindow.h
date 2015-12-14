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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScientistsWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *search_students;
    QPushButton *button_scientist_relation;
    QTableWidget *table_scientists;
    QPushButton *button_scientist_addScientist;
    QPushButton *button_scientist_editscientist;
    QPushButton *button_Scientist_delscientist;
    QPushButton *ret_button;

    void setupUi(QDialog *ScientistsWindow)
    {
        if (ScientistsWindow->objectName().isEmpty())
            ScientistsWindow->setObjectName(QStringLiteral("ScientistsWindow"));
        ScientistsWindow->resize(498, 481);
        ScientistsWindow->setMinimumSize(QSize(498, 481));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(202, 208, 203, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(255, 181, 8, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        ScientistsWindow->setPalette(palette);
        verticalLayout = new QVBoxLayout(ScientistsWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        search_students = new QLineEdit(ScientistsWindow);
        search_students->setObjectName(QStringLiteral("search_students"));

        verticalLayout->addWidget(search_students);

        button_scientist_relation = new QPushButton(ScientistsWindow);
        button_scientist_relation->setObjectName(QStringLiteral("button_scientist_relation"));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell"));
        font.setBold(true);
        font.setWeight(75);
        button_scientist_relation->setFont(font);
        button_scientist_relation->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0);\n"
"	border: none;\n"
"}"));

        verticalLayout->addWidget(button_scientist_relation);

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
        table_scientists->setMinimumSize(QSize(452, 140));
        QPalette palette1;
        QBrush brush4(QColor(248, 255, 250, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        table_scientists->setPalette(palette1);
        table_scientists->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_scientists->setSortingEnabled(true);
        table_scientists->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(table_scientists);

        button_scientist_addScientist = new QPushButton(ScientistsWindow);
        button_scientist_addScientist->setObjectName(QStringLiteral("button_scientist_addScientist"));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        button_scientist_addScientist->setFont(font1);
        button_scientist_addScientist->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_scientist_addScientist);

        button_scientist_editscientist = new QPushButton(ScientistsWindow);
        button_scientist_editscientist->setObjectName(QStringLiteral("button_scientist_editscientist"));
        button_scientist_editscientist->setFont(font1);
        button_scientist_editscientist->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_scientist_editscientist);

        button_Scientist_delscientist = new QPushButton(ScientistsWindow);
        button_Scientist_delscientist->setObjectName(QStringLiteral("button_Scientist_delscientist"));
        button_Scientist_delscientist->setFont(font1);
        button_Scientist_delscientist->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_Scientist_delscientist);

        ret_button = new QPushButton(ScientistsWindow);
        ret_button->setObjectName(QStringLiteral("ret_button"));
        QFont font2;
        font2.setFamily(QStringLiteral("Rockwell"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        ret_button->setFont(font2);
        ret_button->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 200, 0);\n"
"	border: none;\n"
"}"));

        verticalLayout->addWidget(ret_button);


        retranslateUi(ScientistsWindow);

        QMetaObject::connectSlotsByName(ScientistsWindow);
    } // setupUi

    void retranslateUi(QDialog *ScientistsWindow)
    {
        ScientistsWindow->setWindowTitle(QApplication::translate("ScientistsWindow", "Dialog", 0));
        search_students->setPlaceholderText(QApplication::translate("ScientistsWindow", "Write here to search", 0));
        button_scientist_relation->setText(QApplication::translate("ScientistsWindow", "Relate", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ScientistsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ScientistsWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ScientistsWindow", "Year born", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ScientistsWindow", "Year died", 0));
        button_scientist_addScientist->setText(QApplication::translate("ScientistsWindow", "Add Scientist", 0));
        button_scientist_editscientist->setText(QApplication::translate("ScientistsWindow", "Edit Scientist", 0));
        button_Scientist_delscientist->setText(QApplication::translate("ScientistsWindow", "Delete Scientist", 0));
        ret_button->setText(QApplication::translate("ScientistsWindow", "Return To Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class ScientistsWindow: public Ui_ScientistsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENTISTSWINDOW_H
