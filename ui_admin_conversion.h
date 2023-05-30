/********************************************************************************
** Form generated from reading UI file 'admin_conversion.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_CONVERSION_H
#define UI_ADMIN_CONVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Conversion
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QHoverSensitiveButton *back;
    QRadioButton *name;
    QRadioButton *number;
    QHoverSensitiveButton *generate;
    QLabel *label;
    QGroupBox *groupBox_3;
    QListView *listView;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_4;
    QLabel *label_8;
    QLineEdit *nameconvert;
    QLineEdit *numberconvert;
    QLabel *label_9;
    QHoverSensitiveButton *clear;
    QHoverSensitiveButton *back_2;
    QLabel *label_7;
    QLabel *label_6;

    void setupUi(QDialog *Conversion)
    {
        if (Conversion->objectName().isEmpty())
            Conversion->setObjectName("Conversion");
        Conversion->resize(700, 700);
        groupBox = new QGroupBox(Conversion);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 60, 191, 401));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 161, 16));
        back = new QHoverSensitiveButton(groupBox);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 310, 151, 41));
        name = new QRadioButton(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(20, 100, 151, 31));
        name->setChecked(false);
        name->setAutoExclusive(true);
        number = new QRadioButton(groupBox);
        number->setObjectName("number");
        number->setGeometry(QRect(20, 70, 151, 31));
        number->setChecked(true);
        number->setAutoExclusive(true);
        generate = new QHoverSensitiveButton(groupBox);
        generate->setObjectName("generate");
        generate->setGeometry(QRect(20, 260, 151, 41));
        label = new QLabel(Conversion);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 681, 31));
        groupBox_3 = new QGroupBox(Conversion);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(240, 60, 431, 401));
        listView = new QListView(groupBox_3);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20,70,391,281));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView->setAlternatingRowColors(false);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 171, 21));
        groupBox_2 = new QGroupBox(Conversion);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 470, 191, 221));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 40, 111, 31));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20,80,111,31));
        groupBox_4 = new QGroupBox(Conversion);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(240, 470, 431, 221));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 80, 111, 31));
        nameconvert = new QLineEdit(groupBox_4);
        nameconvert->setObjectName("nameconvert");
        nameconvert->setGeometry(QRect(150, 80, 231, 31));
        numberconvert = new QLineEdit(groupBox_4);
        numberconvert->setObjectName("numberconvert");
        numberconvert->setGeometry(QRect(150, 120, 231, 31));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10,120,121,31));
        clear = new QHoverSensitiveButton(groupBox_4);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(60, 160, 151, 41));
        back_2 = new QHoverSensitiveButton(groupBox_4);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(220, 160, 151, 41));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 40, 411, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20,120,111,31));

        retranslateUi(Conversion);

        QMetaObject::connectSlotsByName(Conversion);
    } // setupUi

    void retranslateUi(QDialog *Conversion)
    {
        Conversion->setWindowTitle(QCoreApplication::translate("Conversion", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("Conversion", "Sort by:", nullptr));
        back->setText(QCoreApplication::translate("Conversion", "back", nullptr));
        name->setText(QCoreApplication::translate("Conversion", "Name", nullptr));
        number->setText(QCoreApplication::translate("Conversion", "Membership Number", nullptr));
        generate->setText(QCoreApplication::translate("Conversion", "Generate", nullptr));
        label->setText(QCoreApplication::translate("Conversion", "<html><head/><body><p align=\"center\">Conversions</p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Conversion", "Reccomended  Conversions", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QCoreApplication::translate("Conversion", "Reg to Exec:", nullptr));
        label_5->setText(QCoreApplication::translate("Conversion", "Exec to Reg:", nullptr));
        label_6->setText(QCoreApplication::translate("Conversion", "Total Count:", nullptr));
        groupBox_4->setTitle(QString());
        label_8->setText(QCoreApplication::translate("Conversion", "<html><head/><body><p align=\"right\">Name:</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Conversion", "<html><head/><body><p align=\"right\">Membership Number:</p></body></html>", nullptr));
        clear->setText(QCoreApplication::translate("Conversion", "Clear", nullptr));
        back_2->setText(QCoreApplication::translate("Conversion", "Convert", nullptr));
        label_7->setText(QCoreApplication::translate("Conversion", "<html><head/><body><p align=\"center\">Convert a member?</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Conversion: public Ui_Conversion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_CONVERSION_H
