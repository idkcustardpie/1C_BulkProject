/********************************************************************************
** Form generated from reading UI file 'manager_memberpurchases.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_MEMBERPURCHASES_H
#define UI_MANAGER_MEMBERPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_MemberPurchases
{
public:
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QListView *listView;
    QLineEdit *searchbar;
    QHoverSensitiveButton *SearchBar;
    QGroupBox *groupBox;
    QLabel *label_2;
    QHoverSensitiveButton *back;
    QHoverSensitiveButton *name;
    QHoverSensitiveButton *membernumber;
    QLabel *label;

    void setupUi(QDialog *MemberPurchases)
    {
        if (MemberPurchases->objectName().isEmpty())
            MemberPurchases->setObjectName("MemberPurchases");
        MemberPurchases->resize(700, 700);
        groupBox_2 = new QGroupBox(MemberPurchases);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(190, 560, 491, 101));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        groupBox_3 = new QGroupBox(MemberPurchases);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(190, 40, 491, 501));
        listView = new QListView(groupBox_3);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 80, 451, 391));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        searchbar = new QLineEdit(groupBox_3);
        searchbar->setObjectName("searchbar");
        searchbar->setGeometry(QRect(20, 40, 361, 31));
        searchbar->setClearButtonEnabled(true);
        SearchBar = new QHoverSensitiveButton(groupBox_3);
        SearchBar->setObjectName("SearchBar");
        SearchBar->setGeometry(QRect(390, 40, 81, 31));
        groupBox = new QGroupBox(MemberPurchases);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 40, 151, 621));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 111, 16));
        back = new QHoverSensitiveButton(groupBox);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 530, 111, 41));
        name = new QHoverSensitiveButton(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(20, 80, 111, 41));
        membernumber = new QHoverSensitiveButton(groupBox);
        membernumber->setObjectName("membernumber");
        membernumber->setGeometry(QRect(20, 140, 111, 41));
        label = new QLabel(MemberPurchases);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 661, 20));

        retranslateUi(MemberPurchases);

        QMetaObject::connectSlotsByName(MemberPurchases);
    } // setupUi

    void retranslateUi(QDialog *MemberPurchases)
    {
        MemberPurchases->setWindowTitle(QCoreApplication::translate("MemberPurchases", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MemberPurchases", "Member Total:", nullptr));
        label_4->setText(QCoreApplication::translate("MemberPurchases", "Grand Total:", nullptr));
        groupBox_3->setTitle(QString());
        searchbar->setText(QString());
        searchbar->setPlaceholderText(QCoreApplication::translate("MemberPurchases", "search...", nullptr));
        SearchBar->setText(QCoreApplication::translate("MemberPurchases", "Search", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MemberPurchases", "Sort by:", nullptr));
        back->setText(QCoreApplication::translate("MemberPurchases", "back", nullptr));
        name->setText(QCoreApplication::translate("MemberPurchases", "Name", nullptr));
        membernumber->setText(QCoreApplication::translate("MemberPurchases", "Member Number", nullptr));
        label->setText(QCoreApplication::translate("MemberPurchases", "<html><head/><body><p align=\"center\">Member Purchases</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberPurchases: public Ui_MemberPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_MEMBERPURCHASES_H
