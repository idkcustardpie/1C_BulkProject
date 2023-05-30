/********************************************************************************
** Form generated from reading UI file 'manager_allpurchases.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_ALLPURCHASES_H
#define UI_MANAGER_ALLPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AllPurchases
{
public:

    void setupUi(QDialog *AllPurchases)
    {
        if (AllPurchases->objectName().isEmpty())
            AllPurchases->setObjectName("AllPurchases");
        AllPurchases->resize(700, 700);

        retranslateUi(AllPurchases);

        QMetaObject::connectSlotsByName(AllPurchases);
    } // setupUi

    void retranslateUi(QDialog *AllPurchases)
    {
        AllPurchases->setWindowTitle(QCoreApplication::translate("AllPurchases", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllPurchases: public Ui_AllPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_ALLPURCHASES_H
