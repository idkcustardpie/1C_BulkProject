/********************************************************************************
** Form generated from reading UI file 'manager_barchart.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_BARCHART_H
#define UI_MANAGER_BARCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include "qhoversensitivebutton.h"

QT_BEGIN_NAMESPACE

class Ui_BarChart
{
public:
    QGroupBox *groupBox;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QHoverSensitiveButton *signout;
    QFrame *frame2;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QDialog *BarChart)
    {
        if (BarChart->objectName().isEmpty())
            BarChart->setObjectName("BarChart");
        BarChart->resize(700, 700);
        groupBox = new QGroupBox(BarChart);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(9, 10, 681, 681));
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 40, 660, 240));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(160, 540, 361, 71));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textEdit->setReadOnly(true);
        signout = new QHoverSensitiveButton(groupBox);
        signout->setObjectName("signout");
        signout->setGeometry(QRect(280, 620, 121, 31));
        frame2 = new QFrame(groupBox);
        frame2->setObjectName("frame2");
        frame2->setGeometry(QRect(10, 290, 660, 240));
        horizontalLayout_2 = new QHBoxLayout(frame2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        retranslateUi(BarChart);

        QMetaObject::connectSlotsByName(BarChart);
    } // setupUi

    void retranslateUi(QDialog *BarChart)
    {
        BarChart->setWindowTitle(QCoreApplication::translate("BarChart", "Dialog", nullptr));
        groupBox->setTitle(QString());
        textEdit->setHtml(QCoreApplication::translate("BarChart", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:700;\">This chart represents the sales report.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:700;\">You can see which day was the most successful in terms of sales.</span></p></body></html>", nullptr));
        signout->setText(QCoreApplication::translate("BarChart", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BarChart: public Ui_BarChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_BARCHART_H
