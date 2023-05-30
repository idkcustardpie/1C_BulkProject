/********************************************************************************
** Form generated from reading UI file 'manager_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_SCREEN_H
#define UI_MANAGER_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QHoverSensitiveButton *iteminfobutton;
    QHoverSensitiveButton *expbutton;
    QHoverSensitiveButton *rebate;
    QHoverSensitiveButton *purchases;
    QHoverSensitiveButton *signout;
    QHoverSensitiveButton *sr;
    QLabel *label;
    QTextEdit *descriptionBox;

    void setupUi(QDialog *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName("Manager");
        Manager->resize(700, 700);
        label_2 = new QLabel(Manager);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 661, 20));
        groupBox = new QGroupBox(Manager);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 40, 321, 591));
        iteminfobutton = new QHoverSensitiveButton(groupBox);
        iteminfobutton->setObjectName("iteminfobutton");
        iteminfobutton->setGeometry(QRect(80, 150, 161, 31));
        expbutton = new QHoverSensitiveButton(groupBox);
        expbutton->setObjectName("expbutton");
        expbutton->setGeometry(QRect(80, 190, 161, 31));
        rebate = new QHoverSensitiveButton(groupBox);
        rebate->setObjectName("rebate");
        rebate->setGeometry(QRect(80, 230, 161, 31));
        purchases = new QHoverSensitiveButton(groupBox);
        purchases->setObjectName("purchases");
        purchases->setGeometry(QRect(80, 110, 161, 31));
        signout = new QHoverSensitiveButton(groupBox);
        signout->setObjectName("signout");
        signout->setGeometry(QRect(80, 340, 161, 31));
        sr = new QHoverSensitiveButton(groupBox);
        sr->setObjectName("sr");
        sr->setGeometry(QRect(80, 70, 161, 31));
        label = new QLabel(Manager);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 321, 20));
        descriptionBox = new QTextEdit(Manager);
        descriptionBox->setObjectName("descriptionBox");
        descriptionBox->setGeometry(QRect(360, 60, 321, 571));

        retranslateUi(Manager);

        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QDialog *Manager)
    {
        Manager->setWindowTitle(QCoreApplication::translate("Manager", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Manager", "<html><head/><body><p align=\"center\">Store Manager</p></body></html>", nullptr));
        groupBox->setTitle(QString());
        iteminfobutton->setText(QCoreApplication::translate("Manager", "Item Information", nullptr));
        expbutton->setText(QCoreApplication::translate("Manager", "Expirations", nullptr));
        rebate->setText(QCoreApplication::translate("Manager", "View Rebate", nullptr));
        purchases->setText(QCoreApplication::translate("Manager", "Member Purchases", nullptr));
        signout->setText(QCoreApplication::translate("Manager", "sign out", nullptr));
        sr->setText(QCoreApplication::translate("Manager", "Sales Report", nullptr));
        label->setText(QCoreApplication::translate("Manager", "<html><head/><body><p align=\"center\">Select Options:</p></body></html>", nullptr));
        descriptionBox->setHtml(QCoreApplication::translate("Manager", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> Welcome!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> Please make a select"
                        "ion to continue.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_SCREEN_H
