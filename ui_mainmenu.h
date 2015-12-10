/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenuWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *layout_menu_options;
    QPushButton *button_menu_computers;
    QPushButton *button_menu_scientists;
    QPushButton *button_menu_exit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainMenuWindow)
    {
        if (MainMenuWindow->objectName().isEmpty())
            MainMenuWindow->setObjectName(QStringLiteral("MainMenuWindow"));
        MainMenuWindow->resize(480, 388);
        centralWidget = new QWidget(MainMenuWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 121, 221, 221));
        layout_menu_options = new QVBoxLayout(widget);
        layout_menu_options->setSpacing(20);
        layout_menu_options->setContentsMargins(11, 11, 11, 11);
        layout_menu_options->setObjectName(QStringLiteral("layout_menu_options"));
        layout_menu_options->setSizeConstraint(QLayout::SetDefaultConstraint);
        layout_menu_options->setContentsMargins(10, 0, 10, 0);
        button_menu_computers = new QPushButton(widget);
        button_menu_computers->setObjectName(QStringLiteral("button_menu_computers"));
        button_menu_computers->setMinimumSize(QSize(40, 40));

        layout_menu_options->addWidget(button_menu_computers);

        button_menu_scientists = new QPushButton(widget);
        button_menu_scientists->setObjectName(QStringLiteral("button_menu_scientists"));
        button_menu_scientists->setMinimumSize(QSize(40, 40));

        layout_menu_options->addWidget(button_menu_scientists);

        button_menu_exit = new QPushButton(widget);
        button_menu_exit->setObjectName(QStringLiteral("button_menu_exit"));
        button_menu_exit->setMinimumSize(QSize(40, 40));

        layout_menu_options->addWidget(button_menu_exit);

        MainMenuWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainMenuWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainMenuWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainMenuWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainMenuWindow->setStatusBar(statusBar);

        retranslateUi(MainMenuWindow);

        QMetaObject::connectSlotsByName(MainMenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenuWindow)
    {
        MainMenuWindow->setWindowTitle(QApplication::translate("MainMenuWindow", "MainWindow", 0));
        button_menu_computers->setText(QApplication::translate("MainMenuWindow", "Computers", 0));
        button_menu_scientists->setText(QApplication::translate("MainMenuWindow", "Scientists", 0));
        button_menu_exit->setText(QApplication::translate("MainMenuWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainMenuWindow: public Ui_MainMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
