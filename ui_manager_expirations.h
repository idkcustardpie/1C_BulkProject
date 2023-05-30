/********************************************************************************
** Form generated from reading UI file 'manager_expirations.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_EXPIRATIONS_H
#define UI_MANAGER_EXPIRATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Expirations
{
public:
    QGroupBox *groupBox;
    QSpinBox *SelectMonth;
    QLabel *label_2;
    QHoverSensitiveButton *back;
    QPushButton *DisplayMembers;
    QLabel *label;
    QGroupBox *groupBox_3;
    QListView *listView;
    QLineEdit *searchbar;
    QPushButton *searchButton;
    QGroupBox *groupBox_2;
    QLabel *MonthlyCount;
    QLabel *TotalCount;
    QLineEdit *MonthCount;
    QLineEdit *Total;

    void setupUi(QDialog *Expirations)
    {
        if (Expirations->objectName().isEmpty())
            Expirations->setObjectName("Expirations");
        Expirations->resize(700, 700);
        groupBox = new QGroupBox(Expirations);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(24, 50, 151, 581));
        SelectMonth = new QSpinBox(groupBox);
        SelectMonth->setObjectName("SelectMonth");
        SelectMonth->setGeometry(QRect(10, 70, 131, 31));
        SelectMonth->setMinimum(1);
        SelectMonth->setMaximum(12);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 121, 21));
        back = new QHoverSensitiveButton(groupBox);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 470, 131, 41));
        DisplayMembers = new QPushButton(groupBox);
        DisplayMembers->setObjectName("DisplayMembers");
        DisplayMembers->setGeometry(QRect(20, 120, 111, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplayMembers->sizePolicy().hasHeightForWidth());
        DisplayMembers->setSizePolicy(sizePolicy);
        DisplayMembers->setAutoDefault(true);
        label = new QLabel(Expirations);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 671, 31));
        groupBox_3 = new QGroupBox(Expirations);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(194, 50, 481, 421));
        listView = new QListView(groupBox_3);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 80, 441, 291));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        searchbar = new QLineEdit(groupBox_3);
        searchbar->setObjectName("searchbar");
        searchbar->setGeometry(QRect(20, 40, 351, 31));
        searchbar->setClearButtonEnabled(true);
        searchButton = new QPushButton(groupBox_3);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(380, 40, 71, 31));
        sizePolicy.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy);
        searchButton->setAutoDefault(true);
        groupBox_2 = new QGroupBox(Expirations);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(194, 480, 481, 151));
        MonthlyCount = new QLabel(groupBox_2);
        MonthlyCount->setObjectName("MonthlyCount");
        MonthlyCount->setGeometry(QRect(30, 40, 81, 21));
        TotalCount = new QLabel(groupBox_2);
        TotalCount->setObjectName("TotalCount");
        TotalCount->setGeometry(QRect(30, 70, 81, 21));
        MonthCount = new QLineEdit(groupBox_2);
        MonthCount->setObjectName("MonthCount");
        MonthCount->setGeometry(QRect(120, 40, 31, 24));
        MonthCount->setReadOnly(true);
        Total = new QLineEdit(groupBox_2);
        Total->setObjectName("Total");
        Total->setGeometry(QRect(120, 70, 31, 24));
        Total->setReadOnly(true);

        retranslateUi(Expirations);

        DisplayMembers->setDefault(false);
        searchButton->setDefault(false);


        QMetaObject::connectSlotsByName(Expirations);
    } // setupUi

    void retranslateUi(QDialog *Expirations)
    {
        Expirations->setWindowTitle(QCoreApplication::translate("Expirations", "Dialog", nullptr));
        groupBox->setTitle(QString());
        SelectMonth->setSpecialValueText(QString());
        label_2->setText(QCoreApplication::translate("Expirations", "Select Month:", nullptr));
        back->setText(QCoreApplication::translate("Expirations", "back", nullptr));
        DisplayMembers->setText(QCoreApplication::translate("Expirations", "Display Members", nullptr));
        label->setText(QCoreApplication::translate("Expirations", "<html><head/><body><p align=\"center\">Expirations</p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        searchbar->setText(QString());
        searchbar->setPlaceholderText(QCoreApplication::translate("Expirations", "search...", nullptr));
        searchButton->setText(QCoreApplication::translate("Expirations", "Search", nullptr));
        groupBox_2->setTitle(QString());
        MonthlyCount->setText(QCoreApplication::translate("Expirations", "Monthly Count:", nullptr));
        TotalCount->setText(QCoreApplication::translate("Expirations", "Total Count:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Expirations: public Ui_Expirations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_EXPIRATIONS_H
