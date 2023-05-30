#include "manager_items.h"
#include "ui_manager_items.h"
#include "Inventory.h"

extern Inventory Bulk_Inventory;

ManagerItems::ManagerItems(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManagerItems)
{
    ui->setupUi(this);
}

ManagerItems::~ManagerItems()
{
    delete ui;
}

void ManagerItems::on_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();

}


void ManagerItems::on_name_clicked()
{
    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    text = "Item Info:";
    list << text;

    for(auto i : Bulk_Inventory.inventory)
    {
        text = "   " + QString::fromStdString(i.first) + ":  " + QString::number(i.second->quantity) + "  ($" + QString::number(i.second->price * i.second->quantity, 'f', 2) + ")";


        list << text;
    }


    model->setStringList(list);
    ui->listView->setModel(model);
}


void ManagerItems::on_searchButton_clicked()
{
    std::string searchText = ui->searchbar->text().toStdString();

    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    if(Bulk_Inventory.inventory.find(searchText) != Bulk_Inventory.inventory.end())
    {

        text = "Item Info:\n";
        text += "  " + QString::fromStdString(searchText) + ": " + QString::number(Bulk_Inventory.inventory[searchText]->quantity) + " Sold\n";
        text += "   Total Revenue: " + QString::number(Bulk_Inventory.inventory[searchText]->quantity * Bulk_Inventory.inventory[searchText]->price, 'f', 2);

    }
    else
    {
        text += "Item not found\n";
    }


    list << text;
    model->setStringList(list);
    ui->listView->setModel(model);
}


void ManagerItems::on_revenue_clicked()
{
    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    text = "Item Info:";
    list << text;

    // Step 1: Create a vector to store item revenues
    std::vector<std::pair<std::string, double>> itemRevenues;

    for (auto i : Bulk_Inventory.inventory)
    {
        // Step 2: Calculate item revenue and store it in the vector
        double revenue = i.second->price * i.second->quantity;
        itemRevenues.push_back(std::make_pair(i.first, revenue));
    }

    // Step 3: Sort the vector based on revenue in ascending order
    std::sort(itemRevenues.begin(), itemRevenues.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    for (const auto& item : itemRevenues)
    {
        // Step 4: Generate the list using the sorted vector
        text = "  $" + QString::number(item.second, 'f', 2) + "   " + QString::fromStdString(item.first) + ":  " + QString::number(Bulk_Inventory.inventory[item.first]->quantity);
        list << text;
    }

    model->setStringList(list);
    ui->listView->setModel(model);
}


