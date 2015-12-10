/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *layout_menu_options;
    QToolButton *button_menu_add;
    QToolButton *button_menu_showList;
    QToolButton *button_menu_showList_2;
    QToolButton *button_menu_showList_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(467, 383);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 120, 231, 222));
        layout_menu_options = new QVBoxLayout(widget);
        layout_menu_options->setSpacing(20);
        layout_menu_options->setContentsMargins(11, 11, 11, 11);
        layout_menu_options->setObjectName(QStringLiteral("layout_menu_options"));
        layout_menu_options->setSizeConstraint(QLayout::SetDefaultConstraint);
        layout_menu_options->setContentsMargins(10, 0, 10, 0);
        button_menu_add = new QToolButton(widget);
        button_menu_add->setObjectName(QStringLiteral("button_menu_add"));
        button_menu_add->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_menu_add->sizePolicy().hasHeightForWidth());
        button_menu_add->setSizePolicy(sizePolicy);
        button_menu_add->setMinimumSize(QSize(40, 40));
        QFont font;
        font.setFamily(QStringLiteral("Century"));
        font.setPointSize(10);
        button_menu_add->setFont(font);
        button_menu_add->setAutoFillBackground(false);
        button_menu_add->setCheckable(false);
        button_menu_add->setAutoRepeat(false);
        button_menu_add->setAutoExclusive(false);
        button_menu_add->setAutoRepeatDelay(300);
        button_menu_add->setPopupMode(QToolButton::DelayedPopup);
        button_menu_add->setToolButtonStyle(Qt::ToolButtonIconOnly);
        button_menu_add->setAutoRaise(false);
        button_menu_add->setArrowType(Qt::NoArrow);

        layout_menu_options->addWidget(button_menu_add);

        button_menu_showList = new QToolButton(widget);
        button_menu_showList->setObjectName(QStringLiteral("button_menu_showList"));
        sizePolicy.setHeightForWidth(button_menu_showList->sizePolicy().hasHeightForWidth());
        button_menu_showList->setSizePolicy(sizePolicy);
        button_menu_showList->setMinimumSize(QSize(40, 40));
        button_menu_showList->setFont(font);

        layout_menu_options->addWidget(button_menu_showList);

        button_menu_showList_2 = new QToolButton(widget);
        button_menu_showList_2->setObjectName(QStringLiteral("button_menu_showList_2"));
        sizePolicy.setHeightForWidth(button_menu_showList_2->sizePolicy().hasHeightForWidth());
        button_menu_showList_2->setSizePolicy(sizePolicy);
        button_menu_showList_2->setMinimumSize(QSize(40, 40));
        button_menu_showList_2->setFont(font);
        button_menu_showList_2->setAutoFillBackground(false);

        layout_menu_options->addWidget(button_menu_showList_2);

        button_menu_showList_3 = new QToolButton(widget);
        button_menu_showList_3->setObjectName(QStringLiteral("button_menu_showList_3"));
        sizePolicy.setHeightForWidth(button_menu_showList_3->sizePolicy().hasHeightForWidth());
        button_menu_showList_3->setSizePolicy(sizePolicy);
        button_menu_showList_3->setMinimumSize(QSize(40, 40));
        button_menu_showList_3->setFont(font);

        layout_menu_options->addWidget(button_menu_showList_3);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        button_menu_add->setText(QApplication::translate("MainWindow", "Add", 0));
        button_menu_showList->setText(QApplication::translate("MainWindow", "Show list", 0));
        button_menu_showList_2->setText(QApplication::translate("MainWindow", "Search list", 0));
        button_menu_showList_3->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
