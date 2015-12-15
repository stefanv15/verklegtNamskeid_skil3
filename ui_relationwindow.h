/********************************************************************************
** Form generated from reading UI file 'relationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATIONWINDOW_H
#define UI_RELATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RelationWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *table_relation_scientists;
    QLineEdit *search_relation_searchScientist;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *button_relation_relate;
    QPushButton *button_relation_return;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *table_relation_computers;
    QLineEdit *search_relation_searchCpu;

    void setupUi(QDialog *RelationWindow)
    {
        if (RelationWindow->objectName().isEmpty())
            RelationWindow->setObjectName(QStringLiteral("RelationWindow"));
        RelationWindow->resize(781, 275);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RelationWindow->sizePolicy().hasHeightForWidth());
        RelationWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        RelationWindow->setPalette(palette);
        horizontalLayout = new QHBoxLayout(RelationWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, -1, 5, -1);
        table_relation_scientists = new QTableWidget(RelationWindow);
        if (table_relation_scientists->columnCount() < 6)
            table_relation_scientists->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_relation_scientists->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_relation_scientists->setObjectName(QStringLiteral("table_relation_scientists"));
        table_relation_scientists->setColumnCount(6);

        verticalLayout_2->addWidget(table_relation_scientists);

        search_relation_searchScientist = new QLineEdit(RelationWindow);
        search_relation_searchScientist->setObjectName(QStringLiteral("search_relation_searchScientist"));

        verticalLayout_2->addWidget(search_relation_searchScientist);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalFrame = new QFrame(RelationWindow);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy1);
        verticalFrame->setMinimumSize(QSize(45, 0));
        verticalFrame->setMaximumSize(QSize(16777215, 257));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_relation_relate = new QPushButton(verticalFrame);
        button_relation_relate->setObjectName(QStringLiteral("button_relation_relate"));
        button_relation_relate->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_relation_relate->sizePolicy().hasHeightForWidth());
        button_relation_relate->setSizePolicy(sizePolicy2);
        button_relation_relate->setMaximumSize(QSize(60, 60));
        button_relation_relate->setSizeIncrement(QSize(50, 50));
        button_relation_relate->setBaseSize(QSize(50, 50));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        button_relation_relate->setFont(font);
        button_relation_relate->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 170, 0); border: none;\n"
"}"));
        button_relation_relate->setAutoDefault(true);
        button_relation_relate->setFlat(false);

        verticalLayout->addWidget(button_relation_relate);

        button_relation_return = new QPushButton(verticalFrame);
        button_relation_return->setObjectName(QStringLiteral("button_relation_return"));
        button_relation_return->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(button_relation_return->sizePolicy().hasHeightForWidth());
        button_relation_return->setSizePolicy(sizePolicy3);
        button_relation_return->setMaximumSize(QSize(60, 60));
        button_relation_return->setFont(font);
        button_relation_return->setToolTipDuration(0);
        button_relation_return->setLayoutDirection(Qt::RightToLeft);
        button_relation_return->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	color: black;\n"
"	background-color: rgba(255, 200, 0); border: none;\n"
"}"));
        button_relation_return->setAutoRepeat(false);
        button_relation_return->setAutoExclusive(false);

        verticalLayout->addWidget(button_relation_return);


        horizontalLayout->addWidget(verticalFrame);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, -1, 5, -1);
        table_relation_computers = new QTableWidget(RelationWindow);
        if (table_relation_computers->columnCount() < 6)
            table_relation_computers->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_relation_computers->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        table_relation_computers->setObjectName(QStringLiteral("table_relation_computers"));
        table_relation_computers->setColumnCount(6);

        verticalLayout_4->addWidget(table_relation_computers);

        search_relation_searchCpu = new QLineEdit(RelationWindow);
        search_relation_searchCpu->setObjectName(QStringLiteral("search_relation_searchCpu"));

        verticalLayout_4->addWidget(search_relation_searchCpu);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(RelationWindow);

        button_relation_relate->setDefault(false);


        QMetaObject::connectSlotsByName(RelationWindow);
    } // setupUi

    void retranslateUi(QDialog *RelationWindow)
    {
        RelationWindow->setWindowTitle(QApplication::translate("RelationWindow", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = table_relation_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RelationWindow", "Scientist name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_relation_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RelationWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_relation_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("RelationWindow", "Year born", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_relation_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("RelationWindow", "Year died", 0));
        search_relation_searchScientist->setPlaceholderText(QApplication::translate("RelationWindow", "Write here to search..", 0));
        button_relation_relate->setText(QApplication::translate("RelationWindow", "Relate!", 0));
        button_relation_return->setText(QApplication::translate("RelationWindow", " Return", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_relation_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("RelationWindow", "Computer name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_relation_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("RelationWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_relation_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("RelationWindow", "Was built", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_relation_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("RelationWindow", "Year built", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_relation_computers->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("RelationWindow", "ID", 0));
        search_relation_searchCpu->setPlaceholderText(QApplication::translate("RelationWindow", "Write here to search..", 0));
    } // retranslateUi

};

namespace Ui {
    class RelationWindow: public Ui_RelationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATIONWINDOW_H
