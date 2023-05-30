/********************************************************************************
** Form generated from reading UI file 'manager_items.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_ITEMS_H
#define UI_MANAGER_ITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_ManagerItems
{
public:
    QLabel *label;
    QGroupBox *groupBox_3;
    QListView *listView;
    QLineEdit *searchbar;
    QPushButton *searchButton;
    QGroupBox *groupBox;
    QLabel *label_2;
    QHoverSensitiveButton *back;
    QHoverSensitiveButton *name;
    QHoverSensitiveButton *revenue;

    void setupUi(QDialog *ManagerItems)
    {
        if (ManagerItems->objectName().isEmpty())
            ManagerItems->setObjectName("ManagerItems");
        ManagerItems->resize(700, 700);
        label = new QLabel(ManagerItems);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 671, 31));
        groupBox_3 = new QGroupBox(ManagerItems);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(210, 50, 471, 581));
        listView = new QListView(groupBox_3);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 70, 431, 421));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        searchbar = new QLineEdit(groupBox_3);
        searchbar->setObjectName("searchbar");
        searchbar->setGeometry(QRect(20, 30, 321, 31));
        searchbar->setClearButtonEnabled(true);
        searchButton = new QPushButton(groupBox_3);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(360, 30, 71, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy);
        searchButton->setAutoDefault(true);
        groupBox = new QGroupBox(ManagerItems);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 50, 171, 581));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 111, 16));
        back = new QHoverSensitiveButton(groupBox);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 430, 131, 41));
        name = new QHoverSensitiveButton(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(20, 80, 131, 41));
        revenue = new QHoverSensitiveButton(groupBox);
        revenue->setObjectName("revenue");
        revenue->setGeometry(QRect(20, 140, 131, 41));

        retranslateUi(ManagerItems);

        searchButton->setDefault(false);


        QMetaObject::connectSlotsByName(ManagerItems);
    } // setupUi

    void retranslateUi(QDialog *ManagerItems)
    {
        ManagerItems->setWindowTitle(QCoreApplication::translate("ManagerItems", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ManagerItems", "<html><head/><body><p align=\"center\">Item Information</p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        searchbar->setText(QString());
        searchbar->setPlaceholderText(QCoreApplication::translate("ManagerItems", "search...", nullptr));
        searchButton->setText(QCoreApplication::translate("ManagerItems", "Search", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("ManagerItems", "Sort by:", nullptr));
        back->setText(QCoreApplication::translate("ManagerItems", "back", nullptr));
        name->setText(QCoreApplication::translate("ManagerItems", "Name", nullptr));
        revenue->setText(QCoreApplication::translate("ManagerItems", "Revenue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerItems: public Ui_ManagerItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_ITEMS_H
