#include"DailyReport.h"
#include<QCoreApplication>
#include<QFile>
#include <QTextStream>


DailyReport::DailyReport(std::string fileName, Inventory& inv, MemberFiles& mf)
{
    totalShoppers = 0;
    executiveShoppers = 0;
    regularShoppers = 0;
    revenue = 0;

    // strings to hold all file read information
    std::string date;
    int id_number;
    std::string item_name;
    float price;
    int quantity;

    QFile inFile(QString::fromStdString(fileName));


    if(!inFile.exists())
    {
        qCritical() << "File not Found";
        return;
    }

    if(!inFile.open(QIODevice::ReadOnly))
    {
        qCritical() << inFile.errorString();
        return;
    }

    QTextStream stream(&inFile);

    QString line = "";

    // read each line in a while loop until reach end of file
    while(!stream.atEnd())
    {
        line = stream.readLine();
        date = line.toStdString();
        line = stream.readLine();
        id_number = line.split(" ")[0].toInt();
        line = stream.readLine();
        item_name = line.toStdString();
        line = stream.readLine();
        price = line.toFloat();
        line = stream.readLine();
        quantity = line.toInt();
        // ALL THE INFORMATION GOT READ, NOW WE NEED TO FIGURE OUT WHAT TO DO
        // update quantity of item in inventory
        inv.updateItem(item_name, price, quantity);
        // update individual member's purchases
        mf[id_number].updateAmount(item_name, quantity, price);
        // add sale to self salesreport
        addSale(mf[id_number], item_name, quantity, inv);
        // ================================================
    }

    inFile.close();
}
DailyReport::~DailyReport(){

    for(auto i : allSales)
    {
        delete i;
    }

}

void DailyReport::addSale(Member& member, std::string item, int quantity, Inventory& inv)
{
    sales* ptr = new sales;

    ptr->buyer = member;
    ptr->item_name = item;
    ptr->amount_purchased = quantity;

    // increase revenue
    revenue += (inv[item].price * quantity);

    if(shoppers.find(&member) == shoppers.end())
    {
        totalShoppers++;

        if(member.getType() == "Executive")
        {
            executiveShoppers++;
        }
        else if(member.getType() == "Regular")
        {
           regularShoppers++;
        }

        shoppers.insert(&member);
    }

    allSales.push_back(ptr);

    ptr = NULL;
}

int DailyReport::getTotalShoppers() {return totalShoppers;}
int DailyReport::getExecShoppers() {return executiveShoppers;}
int DailyReport::getRegShoppers() {return regularShoppers;}
float DailyReport::getRevenue() {return revenue;}


