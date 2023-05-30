/********************************************************************************
** Form generated from reading UI file 'admin_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_SCREEN_H
#define UI_ADMIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QHoverSensitiveButton *bulkmember;
    QHoverSensitiveButton *items;
    QHoverSensitiveButton *conversion;
    QHoverSensitiveButton *signout;
    QHoverSensitiveButton *createpurchases;
    QLabel *label_2;
    QTextEdit *descriptionBox;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(700, 700);
        label = new QLabel(Admin);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 661, 20));
        groupBox = new QGroupBox(Admin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 30, 331, 641));
        bulkmember = new QHoverSensitiveButton(groupBox);
        bulkmember->setObjectName("bulkmember");
        bulkmember->setGeometry(QRect(80, 60, 171, 31));
        items = new QHoverSensitiveButton(groupBox);
        items->setObjectName("items");
        items->setGeometry(QRect(80, 120, 171, 31));
        conversion = new QHoverSensitiveButton(groupBox);
        conversion->setObjectName("conversion");
        conversion->setGeometry(QRect(80, 180, 171, 31));
        signout = new QHoverSensitiveButton(groupBox);
        signout->setObjectName("signout");
        signout->setGeometry(QRect(80, 300, 171, 31));
        createpurchases = new QHoverSensitiveButton(groupBox);
        createpurchases->setObjectName("createpurchases");
        createpurchases->setGeometry(QRect(80, 240, 171, 31));
        label_2 = new QLabel(Admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 331, 20));
        descriptionBox = new QTextEdit(Admin);
        descriptionBox->setObjectName("descriptionBox");
        descriptionBox->setGeometry(QRect(360, 50, 321, 621));

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Admin", "<html><head/><body><p align=\"center\">Administrator</p></body></html>", nullptr));
        groupBox->setTitle(QString());
        bulkmember->setText(QCoreApplication::translate("Admin", "Bulk Member", nullptr));
        items->setText(QCoreApplication::translate("Admin", "Items", nullptr));
        conversion->setText(QCoreApplication::translate("Admin", "Conversions", nullptr));
        signout->setText(QCoreApplication::translate("Admin", "sign out", nullptr));
        createpurchases->setText(QCoreApplication::translate("Admin", "Create Purchases", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "<html><head/><body><p align=\"center\">Select Options:</p></body></html>", nullptr));
        descriptionBox->setHtml(QCoreApplication::translate("Admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Welcome!<br /> Please select an option to continue.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_SCREEN_H
