/********************************************************************************
** Form generated from reading UI file 'admin_member.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MEMBER_H
#define UI_ADMIN_MEMBER_H

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

class Ui_AdminMember
{
public:
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QHoverSensitiveButton *clear2;
    QHoverSensitiveButton *delbutton;
    QLabel *delname_2;
    QLineEdit *delnumber;
    QLabel *reasonlabel;
    QLineEdit *delreason;
    QGroupBox *groupBox;
    QLabel *label_4;
    QHoverSensitiveButton *clearAll;
    QHoverSensitiveButton *back;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QHoverSensitiveButton *clear1;
    QHoverSensitiveButton *addbutton;
    QLineEdit *addname;
    QLineEdit *addnumber;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLabel *label_7;
    QLabel *label;
    QGroupBox *groupBox_4;
    QTextEdit *descbox;
    QLabel *label_5;

    void setupUi(QDialog *AdminMember)
    {
        if (AdminMember->objectName().isEmpty())
            AdminMember->setObjectName("AdminMember");
        AdminMember->resize(700, 700);
        groupBox_3 = new QGroupBox(AdminMember);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(170, 50, 251, 461));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 50, 191, 21));
        clear2 = new QHoverSensitiveButton(groupBox_3);
        clear2->setObjectName("clear2");
        clear2->setGeometry(QRect(40, 320, 171, 41));
        delbutton = new QHoverSensitiveButton(groupBox_3);
        delbutton->setObjectName("delbutton");
        delbutton->setGeometry(QRect(40, 370, 171, 41));
        delname_2 = new QLabel(groupBox_3);
        delname_2->setObjectName("delname_2");
        delname_2->setGeometry(QRect(20, 100, 121, 31));
        delnumber = new QLineEdit(groupBox_3);
        delnumber->setObjectName("delnumber");
        delnumber->setGeometry(QRect(20, 130, 211, 31));
        reasonlabel = new QLabel(groupBox_3);
        reasonlabel->setObjectName("reasonlabel");
        reasonlabel->setGeometry(QRect(20, 180, 121, 31));
        delreason = new QLineEdit(groupBox_3);
        delreason->setObjectName("delreason");
        delreason->setGeometry(QRect(20, 210, 211, 31));
        groupBox = new QGroupBox(AdminMember);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 50, 141, 591));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 50, 141, 21));
        clearAll = new QHoverSensitiveButton(groupBox);
        clearAll->setObjectName("clearAll");
        clearAll->setGeometry(QRect(20, 80, 101, 41));
        back = new QHoverSensitiveButton(groupBox);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 500, 101, 41));
        groupBox_2 = new QGroupBox(AdminMember);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(430, 50, 251, 461));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 50, 191, 21));
        clear1 = new QHoverSensitiveButton(groupBox_2);
        clear1->setObjectName("clear1");
        clear1->setGeometry(QRect(40, 320, 171, 41));
        addbutton = new QHoverSensitiveButton(groupBox_2);
        addbutton->setObjectName("addbutton");
        addbutton->setGeometry(QRect(40, 370, 171, 41));
        addname = new QLineEdit(groupBox_2);
        addname->setObjectName("addname");
        addname->setGeometry(QRect(20, 120, 201, 31));
        addnumber = new QLineEdit(groupBox_2);
        addnumber->setObjectName("addnumber");
        addnumber->setGeometry(QRect(20, 190, 201, 31));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 170, 121, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20,100,61,21));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(20, 260, 71, 31));
        spinBox->setMinimum(1);
        spinBox->setMaximum(2);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 240, 211, 16));
        label = new QLabel(AdminMember);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 681, 31));
        groupBox_4 = new QGroupBox(AdminMember);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(170, 520, 511, 121));
        descbox = new QTextEdit(groupBox_4);
        descbox->setObjectName("descbox");
        descbox->setGeometry(QRect(20, 40, 471, 51));
        QFont font;
        font.setPointSize(12);
        descbox->setFont(font);

        retranslateUi(AdminMember);

        QMetaObject::connectSlotsByName(AdminMember);
    } // setupUi

    void retranslateUi(QDialog *AdminMember)
    {
        AdminMember->setWindowTitle(QCoreApplication::translate("AdminMember", "Dialog", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QCoreApplication::translate("AdminMember", "<html><head/><body><p align=\"center\">Delete Member</p></body></html>", nullptr));
        clear2->setText(QCoreApplication::translate("AdminMember", "Clear", nullptr));
        delbutton->setText(QCoreApplication::translate("AdminMember", "Delete Member", nullptr));
        delname_2->setText(QCoreApplication::translate("AdminMember", "Membership Number:", nullptr));
        reasonlabel->setText(QCoreApplication::translate("AdminMember", "Reason:", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("AdminMember", "<html><head/><body><p align=\"center\">Select Options:</p></body></html>", nullptr));
        clearAll->setText(QCoreApplication::translate("AdminMember", "Clear All", nullptr));
        back->setText(QCoreApplication::translate("AdminMember", "back", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("AdminMember", "<html><head/><body><p align=\"center\">Add Member</p></body></html>", nullptr));
        clear1->setText(QCoreApplication::translate("AdminMember", "Clear", nullptr));
        addbutton->setText(QCoreApplication::translate("AdminMember", "Add Member", nullptr));
        label_6->setText(QCoreApplication::translate("AdminMember", "Membership Number:", nullptr));
        label_7->setText(QCoreApplication::translate("AdminMember", "Membership Type", nullptr));
        label_5->setText(QCoreApplication::translate("AdminMember", "Name:", nullptr));
        label->setText(QCoreApplication::translate("AdminMember", "<html><head/><body><p align=\"center\">Add or Delete Member</p></body></html>", nullptr));
        groupBox_4->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminMember: public Ui_AdminMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MEMBER_H
