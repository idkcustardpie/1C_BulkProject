#ifndef MANAGER_SALESREP_H
#define MANAGER_SALESREP_H

#include <QDialog>

#include <QtCharts/QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

#include "manager_barchart.h"

namespace Ui {
class SalesReport;
}

class SalesReport : public QDialog
{
    Q_OBJECT

public:
    explicit SalesReport(QWidget *parent = nullptr);
    ~SalesReport();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_14_clicked();

    void on_GenerateReport_clicked();

private:
    Ui::SalesReport *ui;
    BarChart *barchart;
    QTabWidget *tabWidget;
};

#endif // MANAGER_SALESREP_H
