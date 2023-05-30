#include "manager_barchart.h"
#include "ui_manager_barchart.h"
#include "DailyReport.h"

extern DailyReport** Bulk_Reports;
extern Inventory Bulk_Inventory;

int days = 7; // seven total days

BarChart::BarChart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BarChart)
{
    ui->setupUi(this);

    // DYNAMICALLY change size of the bar graphs
    // first, initalize
    int min = 0;
    int max = -1;
    int max1 = -1;

    // searches for highest total shoppers
    for (int i = 0; i < days; i++)
    {
        int totalShoppers = static_cast<int>(Bulk_Reports[i]->getTotalShoppers());
        if (totalShoppers > max)
        {
            max = totalShoppers;
        }
    }

    // seraches for highest total
    for (int i = 0; i < days; i++)
    {
        int totalRev = static_cast<double>(Bulk_Reports[i]->getRevenue() + Bulk_Reports[i]->getRevenue()*TAX_RATE);
        if (totalRev > max1)
        {
            max1 = totalRev;
        }
    }

    // to add space, add more to the maximums
    max += 2;
    max1 += 100;

    // series --------------------------------------------------------
    QBarSet *set0 = new QBarSet("Total Members");       // total members
    QBarSet *set1 = new QBarSet("Regular Members");     // regular member count
    QBarSet *set2 = new QBarSet("Executive Members");   // executive member count

    for (int i = 0; i < days; i++)
    {
        *set0 << Bulk_Reports[i]->getTotalShoppers();
        *set1 << Bulk_Reports[i]->getRegShoppers();
        *set2 << Bulk_Reports[i]->getExecShoppers();
    }

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Sales Report: Regular and Executive Members");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Day 1" << "Day 2" << "Day 3" << "Day 4" << "Day 5" << "Day 6" << "Day 7";

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setLabelFormat("%d"); // Set the format to display integer values
    axisY->setTickCount(5); // Set the number of ticks on the Y-axis
    axisY->setRange(min, max);  // Adjust the range based on your data

    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->frame);
    chartview->setMinimumSize(ui->frame->size());
    chartview->setMaximumSize(ui->frame->size());

    // series1 --------------------------------------------------------
    QBarSet *bar0 = new QBarSet("Total");     // total
    QBarSet *bar1 = new QBarSet("Revenue");             // revenue

    for (int i = 0; i < days; i++)
    {
        *bar0 << static_cast<double>(Bulk_Reports[i]->getRevenue() + Bulk_Reports[i]->getRevenue()*TAX_RATE);
        *bar1 << Bulk_Reports[i]->getRevenue();
    }

    QBarSeries *series1 = new QBarSeries();

    series1->append(bar0);
    series1->append(bar1);

    QChart *chart1 = new QChart();
    chart1->addSeries(series1);
    chart1->setTitle("Sales Report: Total and Revenue");
    chart1->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories1;
    categories1 << "Day 1" << "Day 2" << "Day 3" << "Day 4" << "Day 5" << "Day 6" << "Day 7";

    QBarCategoryAxis *axisX1 = new QBarCategoryAxis();
    axisX1->append(categories1);
    chart1->addAxis(axisX1, Qt::AlignBottom);
    series1->attachAxis(axisX1);

    QValueAxis *axisY1 = new QValueAxis();
    axisY1->setLabelFormat("%d"); // Set the format to display integer values
    axisY1->setTickCount(5); // Set the number of ticks on the Y-axis
    axisY1->setRange(min, max1);  // Adjust the range based on your data

    chart1->addAxis(axisY1, Qt::AlignLeft);
    series1->attachAxis(axisY1);

    QChartView *chartview1 = new QChartView(chart1);
    chartview1->setParent(ui->frame2);
    chartview1->setMinimumSize(ui->frame2->size());
    chartview1->setMaximumSize(ui->frame2->size());
}

BarChart::~BarChart()
{
    delete ui;
}

void BarChart::on_signout_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();

}
