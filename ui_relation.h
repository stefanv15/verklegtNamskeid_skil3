/********************************************************************************
** Form generated from reading UI file 'relation.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATION_H
#define UI_RELATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_relation
{
public:

    void setupUi(QDialog *relation)
    {
        if (relation->objectName().isEmpty())
            relation->setObjectName(QStringLiteral("relation"));
        relation->resize(459, 356);

        retranslateUi(relation);

        QMetaObject::connectSlotsByName(relation);
    } // setupUi

    void retranslateUi(QDialog *relation)
    {
        relation->setWindowTitle(QApplication::translate("relation", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class relation: public Ui_relation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATION_H
