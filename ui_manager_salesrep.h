/********************************************************************************
** Form generated from reading UI file 'manager_salesrep.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_SALESREP_H
#define UI_MANAGER_SALESREP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SalesReport
{
public:
    QLabel *SRLabel;
    QGroupBox *groupBox;
    QPushButton *pushButton_6;
    QPushButton *pushButton_14;
    QSpinBox *SelectDay;
    QLabel *label_7;
    QRadioButton *regularButton;
    QRadioButton *executiveButton;
    QLabel *label_8;
    QPushButton *GenerateReport;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QLabel *label;
    QGroupBox *groupBox_3;
    QListView *listView;

    void setupUi(QDialog *SalesReport)
    {
        if (SalesReport->objectName().isEmpty())
            SalesReport->setObjectName("SalesReport");
        SalesReport->resize(700, 700);
        SRLabel = new QLabel(SalesReport);
        SRLabel->setObjectName("SRLabel");
        SRLabel->setGeometry(QRect(30, 10, 641, 20));
        SRLabel->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(SalesReport);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 30, 121, 351));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 290, 101, 31));
        pushButton_14 = new QPushButton(groupBox);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(10, 250, 101, 31));
        SelectDay = new QSpinBox(groupBox);
        SelectDay->setObjectName("SelectDay");
        SelectDay->setGeometry(QRect(10, 180, 101, 31));
        SelectDay->setMinimum(1);
        SelectDay->setMaximum(7);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 140, 61, 51));
        regularButton = new QRadioButton(groupBox);
        regularButton->setObjectName("regularButton");
        regularButton->setGeometry(QRect(20, 50, 81, 31));
        regularButton->setCheckable(true);
        regularButton->setChecked(true);
        regularButton->setAutoExclusive(false);
        executiveButton = new QRadioButton(groupBox);
        executiveButton->setObjectName("executiveButton");
        executiveButton->setGeometry(QRect(20, 70, 81, 31));
        executiveButton->setChecked(true);
        executiveButton->setAutoExclusive(false);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 30, 37, 16));
        GenerateReport = new QPushButton(groupBox);
        GenerateReport->setObjectName("GenerateReport");
        GenerateReport->setGeometry(QRect(10, 110, 101, 31));
        groupBox_2 = new QGroupBox(SalesReport);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 400, 641, 261));
        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QFont font;
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 70, 601, 161));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(6);
        tableWidget->setFont(font1);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget->horizontalHeader()->setDefaultSectionSize(67);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setMinimumSectionSize(25);
        tableWidget->verticalHeader()->setDefaultSectionSize(25);
        tableWidget->verticalHeader()->setHighlightSections(true);
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 30, 61, 16));
        groupBox_3 = new QGroupBox(SalesReport);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(160, 30, 521, 351));
        listView = new QListView(groupBox_3);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 50, 481, 251));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        retranslateUi(SalesReport);

        QMetaObject::connectSlotsByName(SalesReport);
    } // setupUi

    void retranslateUi(QDialog *SalesReport)
    {
        SalesReport->setWindowTitle(QCoreApplication::translate("SalesReport", "Dialog", nullptr));
        SRLabel->setText(QCoreApplication::translate("SalesReport", "Sales Report", nullptr));
        groupBox->setTitle(QString());
        pushButton_6->setText(QCoreApplication::translate("SalesReport", "back", nullptr));
        pushButton_14->setText(QCoreApplication::translate("SalesReport", "Show Graph", nullptr));
        SelectDay->setSpecialValueText(QString());
        label_7->setText(QCoreApplication::translate("SalesReport", "Select Day:", nullptr));
        regularButton->setText(QCoreApplication::translate("SalesReport", "Regulars", nullptr));
        executiveButton->setText(QCoreApplication::translate("SalesReport", "Executives", nullptr));
        label_8->setText(QCoreApplication::translate("SalesReport", "Show:", nullptr));
        GenerateReport->setText(QCoreApplication::translate("SalesReport", "Generate", nullptr));
        groupBox_2->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SalesReport", "Day 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SalesReport", "Day 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SalesReport", "Day 3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SalesReport", "Day 4", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SalesReport", "Day 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SalesReport", "Day 6", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("SalesReport", "Day 7", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("SalesReport", "Total Members:", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("SalesReport", "Regular Members:", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("SalesReport", "Executive Members:", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("SalesReport", "Revenue:", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("SalesReport", "Day Total:", nullptr));
        label->setText(QCoreApplication::translate("SalesReport", "<html><head/><body><p align=\"center\">Table</p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class SalesReport: public Ui_SalesReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_SALESREP_H
