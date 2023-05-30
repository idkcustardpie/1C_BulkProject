/* BARCHART - it just displays sales rep in a special way :) */
#ifndef MANAGER_BARCHART_H
#define MANAGER_BARCHART_H


#include <QDialog>
#include <QtCharts/QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

namespace Ui {
class BarChart;
}

class BarChart : public QDialog
{
    Q_OBJECT

public:
    explicit BarChart(QWidget *parent = nullptr);
    ~BarChart();

private slots:
    void on_signout_clicked();

private:
    Ui::BarChart *ui;
};

#endif // MANAGER_BARCHART_H
