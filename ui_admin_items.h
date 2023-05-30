/********************************************************************************
** Form generated from reading UI file 'admin_items.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ITEMS_H
#define UI_ADMIN_ITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_AdminItems
{
public:
    QGroupBox *groupBox;
    QHoverSensitiveButton *back;
    QHoverSensitiveButton *clearAll;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QHoverSensitiveButton *addbutton;
    QHoverSensitiveButton *clear1;
    QLabel *label_3;
    QLineEdit *addquantity;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *addname;
    QLabel *namelabel;
    QLineEdit *addprice;
    QGroupBox *groupBox_3;
    QHoverSensitiveButton *delbutton;
    QHoverSensitiveButton *clear2;
    QLabel *label_4;
    QLabel *namelabel_2;
    QLineEdit *delname;
    QLabel *label_10;
    QSpinBox *delamount;
    QGroupBox *groupBox_4;
    QHoverSensitiveButton *back_4;
    QHoverSensitiveButton *clear3;
    QLabel *label_5;
    QLineEdit *pricename;
    QLabel *namelabel_3;
    QLabel *label_9;
    QLineEdit *pricenew;
    QLabel *label;
    QGroupBox *groupBox_5;
    QTextEdit *descbox;

    void setupUi(QDialog *AdminItems)
    {
        if (AdminItems->objectName().isEmpty())
            AdminItems->setObjectName("AdminItems");
        AdminItems->resize(700, 700);
        groupBox = new QGroupBox(AdminItems);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 50, 111, 601));
        back = new QHoverSensitiveButton(groupBox);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 520, 91, 41));
        clearAll = new QHoverSensitiveButton(groupBox);
        clearAll->setObjectName("clearAll");
        clearAll->setGeometry(QRect(10, 70, 91, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 91, 16));
        groupBox_2 = new QGroupBox(AdminItems);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(130, 50, 180, 381));
        addbutton = new QHoverSensitiveButton(groupBox_2);
        addbutton->setObjectName("addbutton");
        addbutton->setGeometry(QRect(30, 320, 121, 31));
        clear1 = new QHoverSensitiveButton(groupBox_2);
        clear1->setObjectName("clear1");
        clear1->setGeometry(QRect(30, 280, 121, 31));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(16, 30, 151, 20));
        addquantity = new QLineEdit(groupBox_2);
        addquantity->setObjectName("addquantity");
        addquantity->setGeometry(QRect(60, 150, 111, 31));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 150, 51, 31));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 110, 51, 31));
        addname = new QLineEdit(groupBox_2);
        addname->setObjectName("addname");
        addname->setGeometry(QRect(60, 70, 111, 31));
        namelabel = new QLabel(groupBox_2);
        namelabel->setObjectName("namelabel");
        namelabel->setGeometry(QRect(10, 70, 51, 31));
        addprice = new QLineEdit(groupBox_2);
        addprice->setObjectName("addprice");
        addprice->setGeometry(QRect(60, 110, 111, 31));
        groupBox_3 = new QGroupBox(AdminItems);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(320, 50, 180, 381));
        delbutton = new QHoverSensitiveButton(groupBox_3);
        delbutton->setObjectName("delbutton");
        delbutton->setGeometry(QRect(30, 320, 121, 31));
        clear2 = new QHoverSensitiveButton(groupBox_3);
        clear2->setObjectName("clear2");
        clear2->setGeometry(QRect(30, 280, 121, 31));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 30, 141, 20));
        namelabel_2 = new QLabel(groupBox_3);
        namelabel_2->setObjectName("namelabel_2");
        namelabel_2->setGeometry(QRect(10, 70, 51, 31));
        delname = new QLineEdit(groupBox_3);
        delname->setObjectName("delname");
        delname->setGeometry(QRect(60, 70, 111, 31));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 110, 51, 31));
        delamount = new QSpinBox(groupBox_3);
        delamount->setObjectName("delamount");
        delamount->setGeometry(QRect(60, 110, 111, 31));
        groupBox_4 = new QGroupBox(AdminItems);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(510, 50, 180, 381));
        back_4 = new QHoverSensitiveButton(groupBox_4);
        back_4->setObjectName("back_4");
        back_4->setGeometry(QRect(30, 320, 121, 31));
        clear3 = new QHoverSensitiveButton(groupBox_4);
        clear3->setObjectName("clear3");
        clear3->setGeometry(QRect(30, 280, 121, 31));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 30, 141, 20));
        pricename = new QLineEdit(groupBox_4);
        pricename->setObjectName("pricename");
        pricename->setGeometry(QRect(60, 70, 111, 31));
        namelabel_3 = new QLabel(groupBox_4);
        namelabel_3->setObjectName("namelabel_3");
        namelabel_3->setGeometry(QRect(10, 70, 51, 31));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 110, 71, 31));
        pricenew = new QLineEdit(groupBox_4);
        pricenew->setObjectName("pricenew");
        pricenew->setGeometry(QRect(60, 110, 111, 31));
        label = new QLabel(AdminItems);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 0, 131, 41));
        groupBox_5 = new QGroupBox(AdminItems);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(130, 450, 561, 201));
        descbox = new QTextEdit(groupBox_5);
        descbox->setObjectName("descbox");
        descbox->setGeometry(QRect(30, 40, 501, 121));
        QFont font;
        font.setPointSize(12);
        descbox->setFont(font);

        retranslateUi(AdminItems);

        QMetaObject::connectSlotsByName(AdminItems);
    } // setupUi

    void retranslateUi(QDialog *AdminItems)
    {
        AdminItems->setWindowTitle(QCoreApplication::translate("AdminItems", "Dialog", nullptr));
        groupBox->setTitle(QString());
        back->setText(QCoreApplication::translate("AdminItems", "back", nullptr));
        clearAll->setText(QCoreApplication::translate("AdminItems", "Clear All", nullptr));
        label_2->setText(QCoreApplication::translate("AdminItems", "<html><head/><body><p align=\"center\">Select Options:</p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        addbutton->setText(QCoreApplication::translate("AdminItems", "Add Item", nullptr));
        clear1->setText(QCoreApplication::translate("AdminItems", "Clear", nullptr));
        label_3->setText(QCoreApplication::translate("AdminItems", "<html><head/><body><p align=\"center\">Add</p></body></html>", nullptr));
        addquantity->setText(QString());
        label_8->setText(QCoreApplication::translate("AdminItems", "Amount:", nullptr));
        label_7->setText(QCoreApplication::translate("AdminItems", "Price:", nullptr));
        namelabel->setText(QCoreApplication::translate("AdminItems", "Name:", nullptr));
        addprice->setText(QString());
        groupBox_3->setTitle(QString());
        delbutton->setText(QCoreApplication::translate("AdminItems", "Delete Item", nullptr));
        clear2->setText(QCoreApplication::translate("AdminItems", "Clear", nullptr));
        label_4->setText(QCoreApplication::translate("AdminItems", "<html><head/><body><p align=\"center\">Delete</p></body></html>", nullptr));
        namelabel_2->setText(QCoreApplication::translate("AdminItems", "Name:", nullptr));
        label_10->setText(QCoreApplication::translate("AdminItems", "Amount:", nullptr));
        delamount->setSpecialValueText(QCoreApplication::translate("AdminItems", "All", nullptr));
        groupBox_4->setTitle(QString());
        back_4->setText(QCoreApplication::translate("AdminItems", "Change Price", nullptr));
        clear3->setText(QCoreApplication::translate("AdminItems", "Clear", nullptr));
        label_5->setText(QCoreApplication::translate("AdminItems", "<html><head/><body><p align=\"center\">Change</p></body></html>", nullptr));
        namelabel_3->setText(QCoreApplication::translate("AdminItems", "Name:", nullptr));
        label_9->setText(QCoreApplication::translate("AdminItems", "Price:", nullptr));
        label->setText(QCoreApplication::translate("AdminItems", "<html><head/><body><p align=\"center\">Item Customization</p></body></html>", nullptr));
        groupBox_5->setTitle(QString());
        descbox->setHtml(QCoreApplication::translate("AdminItems", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminItems: public Ui_AdminItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ITEMS_H
