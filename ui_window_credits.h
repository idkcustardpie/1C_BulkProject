/********************************************************************************
** Form generated from reading UI file 'window_credits.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_CREDITS_H
#define UI_WINDOW_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Credits
{
public:
    QLabel *CreditsTitle;
    QGroupBox *groupBox;
    QLabel *Jazmine;
    QLabel *picture1;
    QLabel *picture3;
    QGroupBox *groupBox_2;
    QLabel *Cael;
    QLabel *picture2;
    QLabel *picture4;
    QHoverSensitiveButton *backbutton;

    void setupUi(QDialog *Credits)
    {
        if (Credits->objectName().isEmpty())
            Credits->setObjectName("Credits");
        Credits->resize(700, 700);
        CreditsTitle = new QLabel(Credits);
        CreditsTitle->setObjectName("CreditsTitle");
        CreditsTitle->setGeometry(QRect(320, 0, 111, 51));
        groupBox = new QGroupBox(Credits);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 50, 301, 541));
        Jazmine = new QLabel(groupBox);
        Jazmine->setObjectName("Jazmine");
        Jazmine->setGeometry(QRect(0, 40, 301, 31));
        picture1 = new QLabel(groupBox);
        picture1->setObjectName("picture1");
        picture1->setGeometry(QRect(40, 90, 131, 151));
        picture3 = new QLabel(groupBox);
        picture3->setObjectName("picture3");
        picture3->setGeometry(QRect(40, 320, 141, 161));
        groupBox_2 = new QGroupBox(Credits);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(360, 50, 301, 541));
        Cael = new QLabel(groupBox_2);
        Cael->setObjectName("Cael");
        Cael->setGeometry(QRect(0, 40, 301, 31));
        picture2 = new QLabel(groupBox_2);
        picture2->setObjectName("picture2");
        picture2->setGeometry(QRect(40, 90, 131, 161));
        picture4 = new QLabel(groupBox_2);
        picture4->setObjectName("picture4");
        picture4->setGeometry(QRect(40, 320, 141, 161));
        backbutton = new QHoverSensitiveButton(Credits);
        backbutton->setObjectName("backbutton");
        backbutton->setGeometry(QRect(280, 620, 141, 31));

        retranslateUi(Credits);

        QMetaObject::connectSlotsByName(Credits);
    } // setupUi

    void retranslateUi(QDialog *Credits)
    {
        Credits->setWindowTitle(QCoreApplication::translate("Credits", "Dialog", nullptr));
        CreditsTitle->setText(QCoreApplication::translate("Credits", "<html><head/><body><p><span style=\" font-size:20pt;\">Credits</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        Jazmine->setText(QCoreApplication::translate("Credits", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Jazmine Encarnacion</span></p></body></html>", nullptr));
        picture1->setText(QString());
        picture3->setText(QString());
        groupBox_2->setTitle(QString());
        Cael->setText(QCoreApplication::translate("Credits", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Cael Howard</span></p></body></html>", nullptr));
        picture2->setText(QString());
        picture4->setText(QString());
        backbutton->setText(QCoreApplication::translate("Credits", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credits: public Ui_Credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_CREDITS_H
