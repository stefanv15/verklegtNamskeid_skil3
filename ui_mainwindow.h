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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *Add;
    QToolButton *ShowList;
    QToolButton *Search;
    QToolButton *Exit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Add = new QToolButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(50, 50, 161, 31));
        Add->setAutoFillBackground(false);
        ShowList = new QToolButton(centralWidget);
        ShowList->setObjectName(QStringLiteral("ShowList"));
        ShowList->setGeometry(QRect(50, 80, 161, 31));
        Search = new QToolButton(centralWidget);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(50, 110, 161, 31));
        Exit = new QToolButton(centralWidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(50, 140, 161, 31));
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
        Add->setText(QApplication::translate("MainWindow", "Add", 0));
        ShowList->setText(QApplication::translate("MainWindow", "Show List", 0));
        Search->setText(QApplication::translate("MainWindow", "Search", 0));
        Exit->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
