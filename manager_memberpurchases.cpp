#include "manager_memberpurchases.h"
#include "ui_manager_memberpurchases.h"
#include "DailyReport.h"

extern MemberFiles Bulk_Members;
extern DailyReport** Bulk_Reports;

MemberPurchases::MemberPurchases(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberPurchases)
{
    ui->setupUi(this);

    QString existingText = ui->label_3->text();
    existingText = existingText + "   " + QString::number(Bulk_Members.member_map.size());
    ui->label_3->setText(existingText);

    double grandTotal = 0;

    for(int i = 0; i < NUM_DAYS; i++)
    {
        grandTotal += Bulk_Reports[i]->getRevenue();
    }

    grandTotal += grandTotal * TAX_RATE;


    existingText = ui->label_4->text();
    existingText = existingText + " " + QString::number(static_cast<double>(grandTotal), 'f', 2);
    ui->label_4->setText(existingText);

}

MemberPurchases::~MemberPurchases()
{
    delete ui;
}

void MemberPurchases::on_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

// we should include the number portion if we can
void MemberPurchases::on_name_clicked()
{
    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    for(auto i : Bulk_Members.name_map)
    {
        text = QString::fromStdString(i.first) + "      TOTAL: $" + QString::number(i.second->getExpense() + i.second->getExpense()*TAX_RATE, 'f', 2) +"\n";
        if(i.second->purchaseQuantity.empty())
        {
            text += "      NO PURCHASES ON RECORD\n";
        }
        else
        {
        for(auto j : i.second->purchaseQuantity)
            {
             text += "     " + QString::fromStdString(j.first) + ":     " + QString::number(j.second) + "\n";
            }
        }

        list << text;
    }

    model->setStringList(list);
    ui->listView->setModel(model);
}

// we should include name if possible
void MemberPurchases::on_membernumber_clicked()
{
    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    for(auto i : Bulk_Members.member_map)
    {
        text = QString::number(i.first) + "      TOTAL: $" + QString::number(i.second->getExpense()+ i.second->getExpense()*TAX_RATE, 'f', 2) +"\n";

        if(i.second->purchaseQuantity.empty())
        {
            text += "      NO PURCHASES ON RECORD\n";
        }
        else{
            for(auto j : i.second->purchaseQuantity)
            {
             text += "     " + QString::fromStdString(j.first) + ":     " + QString::number(j.second) + "\n";
            }
        }


        list << text;
    }


    model->setStringList(list);
    ui->listView->setModel(model);
}


void MemberPurchases::on_SearchBar_clicked()
{
    std::string search_name;
    int search_number;

    search_name = ui->searchbar->text().toStdString();
    search_number = ui->searchbar->text().toInt();

    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    if(Bulk_Members.name_map.find(search_name) != Bulk_Members.name_map.end())
    {
        text += QString::fromStdString(search_name) + + "      TOTAL: $" + QString::number(Bulk_Members.name_map[search_name]->getExpense() + Bulk_Members.name_map[search_name]->getExpense()*TAX_RATE, 'f', 2) +"\n";
        for(auto i : Bulk_Members.name_map[search_name]->purchaseQuantity)
        {
            text += "     " + QString::fromStdString(i.first) + ":     " + QString::number(i.second) + "\n";
        }

        list << text;
        model->setStringList(list);
        ui->listView->setModel(model);
    }

    if (Bulk_Members.member_map.find(search_number) != Bulk_Members.member_map.end())
    {
        text += QString::number(search_number) + + "      TOTAL: $" + QString::number(Bulk_Members.member_map[search_number]->getExpense() + Bulk_Members.member_map[search_number]->getExpense()*TAX_RATE, 'f', 2) +"\n";
        for(auto i : Bulk_Members.member_map[search_number]->purchaseQuantity)
        {
            text += "     " + QString::fromStdString(i.first) + ":     " + QString::number(i.second) + "\n";
        }

        list << text;
        model->setStringList(list);
        ui->listView->setModel(model);
    }


}

