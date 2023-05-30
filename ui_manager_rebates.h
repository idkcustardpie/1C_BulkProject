/********************************************************************************
** Form generated from reading UI file 'manager_rebates.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_REBATES_H
#define UI_MANAGER_REBATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Rebate
{
public:
    QLabel *label;
    QGroupBox *groupBox_3;
    QListView *listView;
    QHoverSensitiveButton *back;

    void setupUi(QDialog *Rebate)
    {
        if (Rebate->objectName().isEmpty())
            Rebate->setObjectName("Rebate");
        Rebate->resize(700, 700);
        label = new QLabel(Rebate);
        label->setObjectName("label");
        label->setGeometry(QRect(16, 10, 671, 31));
        groupBox_3 = new QGroupBox(Rebate);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(40, 50, 621, 581));
        listView = new QListView(groupBox_3);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(100, 50, 431, 441));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        back = new QHoverSensitiveButton(groupBox_3);
        back->setObjectName("back");
        back->setGeometry(QRect(250,510,131,41));

        retranslateUi(Rebate);

        QMetaObject::connectSlotsByName(Rebate);
    } // setupUi

    void retranslateUi(QDialog *Rebate)
    {
        Rebate->setWindowTitle(QCoreApplication::translate("Rebate", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Rebate", "<html><head/><body><p align=\"center\">Rebates</p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        back->setText(QCoreApplication::translate("Rebate", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rebate: public Ui_Rebate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_REBATES_H
