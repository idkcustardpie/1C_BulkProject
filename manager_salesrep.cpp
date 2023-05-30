#include "manager_salesrep.h"
#include "ui_manager_salesrep.h"
#include "DailyReport.h"
#include <set>
#include <QTabWidget>

extern DailyReport** Bulk_Reports;
extern Inventory Bulk_Inventory;

SalesReport::SalesReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SalesReport)
{
    ui->setupUi(this);

    // for table widget
    for(int col = 0; col < ui->tableWidget->columnCount(); ++col)
    {
        QString table_item = QString::number(Bulk_Reports[col]->getTotalShoppers());
        QTableWidgetItem* table_ptr = new QTableWidgetItem(table_item);
        ui->tableWidget->setItem(0, col, table_ptr);

        table_item = QString::number(Bulk_Reports[col]->getExecShoppers());
        table_ptr = new QTableWidgetItem(table_item);
        ui->tableWidget->setItem(1, col, table_ptr);


        table_item = QString::number(Bulk_Reports[col]->getRegShoppers());
        table_ptr = new QTableWidgetItem(table_item);
        ui->tableWidget->setItem(2, col, table_ptr);

        table_item = QString::number(static_cast<double>(Bulk_Reports[col]->getRevenue()), 'f', 2);
        table_ptr = new QTableWidgetItem(table_item);
        ui->tableWidget->setItem(3, col, table_ptr);

        table_item = QString::number(static_cast<double>(Bulk_Reports[col]->getRevenue() + Bulk_Reports[col]->getRevenue()*TAX_RATE), 'f', 2);
        table_ptr = new QTableWidgetItem(table_item);
        ui->tableWidget->setItem(4, col, table_ptr);
    }
}

SalesReport::~SalesReport()
{
    delete ui;
}

void SalesReport::on_pushButton_6_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void SalesReport::on_pushButton_14_clicked()
{
    hide();
    barchart = new BarChart(this);
    barchart->show();
}

// generates information
void SalesReport::on_GenerateReport_clicked()
{

    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;
    std::set<std::string> names;
    float daily_revenue;

    int index = ui->SelectDay->value() - 1;

   // NEEDS TO SEE IF REGULAR,EXECUTIVE, OR BOTH BUTTONS ARE CLICKED
    if(ui->regularButton->isChecked() && ui->executiveButton->isChecked())
    {
        daily_revenue = 0;
        text = "Item Sale Info:";
        list << text;
        for(auto i : Bulk_Reports[index]->allSales)
        {
            text = "      " + QString::fromStdString(i->item_name) + "   " + QString::number(i->amount_purchased);
            list << text;

            // increase revenue
            daily_revenue += Bulk_Inventory[i->item_name].price * i->amount_purchased;
        }

        text = "\nAll Members";
        list << text;


        names.clear();
        for(auto i : Bulk_Reports[index]->allSales)
        {
            if(names.find(i->buyer.getName()) == names.end())
            {
                text = "      " + QString::fromStdString(i->buyer.getName());
            names.insert(i->buyer.getName());
            list << text;
            }
        }

        text = "\nTOTAL DAILY REVENUE: $" + QString::number(daily_revenue + daily_revenue * TAX_RATE, 'f', 2);
        list << text;


    }


    // REGULAR MEMBER REPORT
    if(ui->regularButton->isChecked() && !(ui->executiveButton->isChecked()))
    {
        daily_revenue = 0;
        text = "Regular Member Item Sale Info:";
        list << text;
        for(auto i : Bulk_Reports[index]->allSales)
        {
            if(i->buyer.getType() == "Regular")
            {
                text = "      " + QString::fromStdString(i->item_name) + "   " + QString::number(i->amount_purchased);
                list << text;
                // increase revenue
                daily_revenue += Bulk_Inventory[i->item_name].price * i->amount_purchased;
            }
        }

        text = "\nRegular Shoppers";
        list << text;

        names.clear();
        for(auto i : Bulk_Reports[index]->allSales)
        {
            if(names.find(i->buyer.getName()) == names.end() && i->buyer.getType() == "Regular")
            {
            text = "      " + QString::fromStdString(i->buyer.getName());
            names.insert(i->buyer.getName());
            list << text;
            }
        }

        text = "\nTOTAL DAILY REVENUE: $" + QString::number(daily_revenue + daily_revenue * TAX_RATE, 'f', 2);
        list << text;

    }


   // Executive Report
    if(!ui->regularButton->isChecked() && (ui->executiveButton->isChecked()))
    {
        daily_revenue = 0;
        text = "Executive Member Item Sale Info:";
        list << text;
        for(auto i : Bulk_Reports[index]->allSales)
        {
            if(i->buyer.getType() == "Executive")
            {
            text = "      " + QString::fromStdString(i->item_name) + "   " + QString::number(i->amount_purchased);
            list << text;
            daily_revenue += Bulk_Inventory[i->item_name].price * i->amount_purchased;
            }
        }

        text = "Executive Shoppers";
        list << text;

        names.clear();
        for(auto i : Bulk_Reports[index]->allSales)
        {
            if(names.find(i->buyer.getName()) == names.end() && i->buyer.getType() == "Executive")
            {
            text = "      " + QString::fromStdString(i->buyer.getName());
            names.insert(i->buyer.getName());
            list << text;
            }
        }

        text = "\nTOTAL DAILY REVENUE: $" + QString::number(daily_revenue + daily_revenue * TAX_RATE, 'f', 2);
        list << text;
    }

    model->setStringList(list);
    ui->listView->setModel(model);

}

