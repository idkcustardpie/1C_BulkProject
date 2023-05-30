#include "admin_createpurchases.h"
#include "ui_admin_createpurchases.h"
#include"MemberFiles.h"
#include"Inventory.h"

extern MemberFiles Bulk_Members;
extern Inventory Bulk_Inventory;

CreatePurchases::CreatePurchases(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreatePurchases)
{
    ui->setupUi(this);
}

CreatePurchases::~CreatePurchases()
{
    delete ui;
}

void CreatePurchases::on_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void CreatePurchases::on_Create_clicked()
{

    int id = ui->number->text().toInt();
    std::string item_name = ui->Item->text().toStdString();
    int quan = ui->quantity->text().toInt();

    if(Bulk_Members.member_map.find(id) == Bulk_Members.member_map.end())
    {
        ui->message->setText("Member not found");
        return;
    }
    else if (Bulk_Inventory.inventory.find(item_name) == Bulk_Inventory.inventory.end())
    {
        ui->message->setText("Item Not Found");
        return;
    }
    else
    {
        Bulk_Members[id].updateAmount(item_name, quan, Bulk_Inventory[item_name].price);
        ui->message->setText("Purchase Created");
    }

}

void CreatePurchases::on_clearbutton_clicked()
{
        ui->number->clear();
        ui->quantity->clear();
        ui->Item->clear();

         ui->message->setText("All text cleared!");
}

