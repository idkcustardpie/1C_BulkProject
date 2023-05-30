/********************************************************************************
** Form generated from reading UI file 'admin_createpurchases.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_CREATEPURCHASES_H
#define UI_ADMIN_CREATEPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_CreatePurchases
{
public:
    QGroupBox *groupBox;
    QHoverSensitiveButton *back;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLineEdit *number;
    QLineEdit *Item;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *quantity;
    QHoverSensitiveButton *Create;
    QHoverSensitiveButton *clearbutton;
    QLineEdit *message;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *CreatePurchases)
    {
        if (CreatePurchases->objectName().isEmpty())
            CreatePurchases->setObjectName("CreatePurchases");
        CreatePurchases->resize(700, 700);
        groupBox = new QGroupBox(CreatePurchases);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 40, 161, 591));
        back = new QHoverSensitiveButton(groupBox);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 460, 121, 41));
        groupBox_2 = new QGroupBox(CreatePurchases);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(220, 40, 451, 591));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40,120,101,31));
        number = new QLineEdit(groupBox_2);
        number->setObjectName("number");
        number->setGeometry(QRect(160,120,201,31));
        Item = new QLineEdit(groupBox_2);
        Item->setObjectName("Item");
        Item->setGeometry(QRect(160, 180, 201, 31));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 180, 101, 31));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 240, 101, 31));
        quantity = new QLineEdit(groupBox_2);
        quantity->setObjectName("quantity");
        quantity->setGeometry(QRect(160, 240, 201, 31));
        Create = new QHoverSensitiveButton(groupBox_2);
        Create->setObjectName("Create");
        Create->setGeometry(QRect(160, 340, 131, 41));
        clearbutton = new QHoverSensitiveButton(groupBox);
        clearbutton->setObjectName("clearbutton");
        clearbutton->setGeometry(QRect(20, 90, 121, 41));
        message = new QLineEdit(groupBox_2);
        message->setObjectName("message");
        message->setGeometry(QRect(20,420,411,81));
        message->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(CreatePurchases);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 10, 641, 31));
        label = new QLabel(CreatePurchases);
        label->setObjectName("label");
        label->setGeometry(QRect(10,50,301,31));

        retranslateUi(CreatePurchases);

        QMetaObject::connectSlotsByName(CreatePurchases);
    } // setupUi

    void retranslateUi(QDialog *CreatePurchases)
    {
        CreatePurchases->setWindowTitle(QCoreApplication::translate("CreatePurchases", "Dialog", nullptr));
        groupBox->setTitle(QString());
        clearbutton->setText(QCoreApplication::translate("CreatePurchases", "Clear", nullptr));
        back->setText(QCoreApplication::translate("CreatePurchases", "back", nullptr));
        label_4->setText(QCoreApplication::translate("CreatePurchases", "Member Number:", nullptr));
        label_5->setText(QCoreApplication::translate("CreatePurchases", "Item:", nullptr));
        label_6->setText(QCoreApplication::translate("CreatePurchases", "Quantity:", nullptr));
        Create->setText(QCoreApplication::translate("CreatePurchases", "Create Purchase", nullptr));
        label_2->setText(QCoreApplication::translate("CreatePurchases", "<html><head/><body><p align=\"center\">Create Purchases</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("CreatePurchases", "Select Options:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreatePurchases: public Ui_CreatePurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_CREATEPURCHASES_H
