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
    QLabel *label_computerAdd_cpuName;
    QLineEdit *line_computerAdd_cpuName;
    QLabel *label_computerAdd_cpuType;
    QRadioButton *rbutton_computerAdd_analog;
    QRadioButton *rbutton_computerAdd_digital;
    QRadioButton *rbutton_computerAdd_hybrid;
    QCheckBox *checkbox_computerAdd_wasBuilt;
    QLabel *label_computerAdd_yearBuilt;
    QLineEdit *line_computerAdd_yearBuilt;
    QPushButton *button_computerAdd_save;
    QPushButton *button_computeradd_cancel;

    void setupUi(QDialog *ComputerAdd)
    {
        if (ComputerAdd->objectName().isEmpty())
            ComputerAdd->setObjectName(QStringLiteral("ComputerAdd"));
        ComputerAdd->resize(373, 388);
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
        ComputerAdd->setPalette(palette);
        verticalLayout = new QVBoxLayout(ComputerAdd);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_computerAdd_cpuName = new QLabel(ComputerAdd);
        label_computerAdd_cpuName->setObjectName(QStringLiteral("label_computerAdd_cpuName"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_computerAdd_cpuName->setFont(font);

        verticalLayout->addWidget(label_computerAdd_cpuName);

        line_computerAdd_cpuName = new QLineEdit(ComputerAdd);
        line_computerAdd_cpuName->setObjectName(QStringLiteral("line_computerAdd_cpuName"));

        verticalLayout->addWidget(line_computerAdd_cpuName);

        label_computerAdd_cpuType = new QLabel(ComputerAdd);
        label_computerAdd_cpuType->setObjectName(QStringLiteral("label_computerAdd_cpuType"));
        label_computerAdd_cpuType->setFont(font);

        verticalLayout->addWidget(label_computerAdd_cpuType);

        rbutton_computerAdd_analog = new QRadioButton(ComputerAdd);
        rbutton_computerAdd_analog->setObjectName(QStringLiteral("rbutton_computerAdd_analog"));
        QFont font1;
        font1.setPointSize(9);
        rbutton_computerAdd_analog->setFont(font1);
        rbutton_computerAdd_analog->setChecked(true);

        verticalLayout->addWidget(rbutton_computerAdd_analog);

        rbutton_computerAdd_digital = new QRadioButton(ComputerAdd);
        rbutton_computerAdd_digital->setObjectName(QStringLiteral("rbutton_computerAdd_digital"));
        rbutton_computerAdd_digital->setFont(font1);

        verticalLayout->addWidget(rbutton_computerAdd_digital);

        rbutton_computerAdd_hybrid = new QRadioButton(ComputerAdd);
        rbutton_computerAdd_hybrid->setObjectName(QStringLiteral("rbutton_computerAdd_hybrid"));
        rbutton_computerAdd_hybrid->setFont(font1);

        verticalLayout->addWidget(rbutton_computerAdd_hybrid);

        checkbox_computerAdd_wasBuilt = new QCheckBox(ComputerAdd);
        checkbox_computerAdd_wasBuilt->setObjectName(QStringLiteral("checkbox_computerAdd_wasBuilt"));
        checkbox_computerAdd_wasBuilt->setFont(font1);
        checkbox_computerAdd_wasBuilt->setLayoutDirection(Qt::LeftToRight);
        checkbox_computerAdd_wasBuilt->setAutoFillBackground(false);

        verticalLayout->addWidget(checkbox_computerAdd_wasBuilt);

        label_computerAdd_yearBuilt = new QLabel(ComputerAdd);
        label_computerAdd_yearBuilt->setObjectName(QStringLiteral("label_computerAdd_yearBuilt"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_computerAdd_yearBuilt->setFont(font2);

        verticalLayout->addWidget(label_computerAdd_yearBuilt);

        line_computerAdd_yearBuilt = new QLineEdit(ComputerAdd);
        line_computerAdd_yearBuilt->setObjectName(QStringLiteral("line_computerAdd_yearBuilt"));
        line_computerAdd_yearBuilt->setEnabled(false);
        line_computerAdd_yearBuilt->setMaxLength(4);

        verticalLayout->addWidget(line_computerAdd_yearBuilt);

        button_computerAdd_save = new QPushButton(ComputerAdd);
        button_computerAdd_save->setObjectName(QStringLiteral("button_computerAdd_save"));
        QFont font3;
        font3.setFamily(QStringLiteral("Rockwell"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        button_computerAdd_save->setFont(font3);
        button_computerAdd_save->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_computerAdd_save);

        button_computeradd_cancel = new QPushButton(ComputerAdd);
        button_computeradd_cancel->setObjectName(QStringLiteral("button_computeradd_cancel"));
        button_computeradd_cancel->setFont(font3);
        button_computeradd_cancel->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));

        verticalLayout->addWidget(button_computeradd_cancel);

        QWidget::setTabOrder(checkbox_computerAdd_wasBuilt, line_computerAdd_yearBuilt);
        QWidget::setTabOrder(line_computerAdd_yearBuilt, button_computerAdd_save);
        QWidget::setTabOrder(button_computerAdd_save, button_computeradd_cancel);

        retranslateUi(ComputerAdd);

        button_computerAdd_save->setDefault(true);


        QMetaObject::connectSlotsByName(ComputerAdd);
    } // setupUi

    void retranslateUi(QDialog *ComputerAdd)
    {
        ComputerAdd->setWindowTitle(QApplication::translate("ComputerAdd", "Add new Computer", 0));
        label_computerAdd_cpuName->setText(QApplication::translate("ComputerAdd", "Computer name:", 0));
        line_computerAdd_cpuName->setPlaceholderText(QApplication::translate("ComputerAdd", "Type name of computer here", 0));
        label_computerAdd_cpuType->setText(QApplication::translate("ComputerAdd", "Computer type:", 0));
        rbutton_computerAdd_analog->setText(QApplication::translate("ComputerAdd", "Analog", 0));
        rbutton_computerAdd_digital->setText(QApplication::translate("ComputerAdd", "Digital", 0));
        rbutton_computerAdd_hybrid->setText(QApplication::translate("ComputerAdd", "Hybrid", 0));
        checkbox_computerAdd_wasBuilt->setText(QApplication::translate("ComputerAdd", "Was built?", 0));
        label_computerAdd_yearBuilt->setText(QApplication::translate("ComputerAdd", "Year built:", 0));
        line_computerAdd_yearBuilt->setPlaceholderText(QApplication::translate("ComputerAdd", "Type here when computer was built.", 0));
        button_computerAdd_save->setText(QApplication::translate("ComputerAdd", "Save", 0));
        button_computeradd_cancel->setText(QApplication::translate("ComputerAdd", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerAdd: public Ui_ComputerAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERADD_H
