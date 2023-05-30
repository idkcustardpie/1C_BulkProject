#include "admin_items.h"
#include "Inventory.h"
#include "MemberFiles.h"
#include "ui_admin_items.h"

extern MemberFiles Bulk_Members;
extern Inventory Bulk_Inventory;

AdminItems::AdminItems(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminItems)
{
    ui->setupUi(this);
}

AdminItems::~AdminItems()
{
    delete ui;
}

void AdminItems::on_back_clicked() // back to admin page
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void AdminItems::on_clearAll_clicked()
{
    on_clear1_clicked();
    on_clear2_clicked();
    on_clear3_clicked();

    ui->descbox->setText("All text has been cleared!");
}

void AdminItems::on_clear1_clicked()
{
     ui->addname->clear();
     ui->addprice->clear();
     ui->addquantity->clear();
     ui->descbox->setText("Add Box has been cleared!");

}


void AdminItems::on_clear2_clicked()
{
     ui->delname->clear();
     ui->delamount->setValue(QTreeWidgetItemIterator::All);
     ui->descbox->setText("Delete Box has been cleared!");
}


void AdminItems::on_clear3_clicked()
{
     ui->pricename->clear();
     ui->pricenew->clear();
     ui->descbox->setText("Price Change Box has been cleared!");
}

// case sensitive
void AdminItems::on_addbutton_clicked()
{
     std::string name = ui->addname->text().toStdString();

     if (ui->addname->text().isEmpty()|| ui->addprice->text().isEmpty() || ui->addquantity->text().isEmpty())
     {
         QMessageBox::warning(this,"Add Item", "All information must be present!");
     }
     else if(Bulk_Inventory.inventory.find(name) != Bulk_Inventory.inventory.end())
     {
          QMessageBox::warning(this,"Add Item", "You cannot add an item with a taken name!");
     }
     else
     {
         Bulk_Inventory.updateItem(name,ui->addprice->text().toFloat(),ui->addquantity->text().toInt());
         ui->descbox->setText("An item has been added to the system!!");

     }

}

// case sensitive
void AdminItems::on_delbutton_clicked()
{

     std::string name = ui->delname->text().toStdString();

     if (ui->delname->text().isEmpty() || ui->delamount->text().isEmpty())
     {
        QMessageBox::warning(this,"Delete Item", "All information must be present!");
     }
     else if (Bulk_Inventory.inventory.find(name) == Bulk_Inventory.inventory.end())
     {
        QMessageBox::warning(this,"Delete Item", "Item does not exist!");
     }
     else
     {
        if (ui->delamount->text() == "All")
        {
            Bulk_Inventory.inventory.erase(name);
            ui->descbox->setText("An item has been deleted.");
        }
        else
        {
            int newAmount = ui->delamount->text().toInt();

            if (newAmount > Bulk_Inventory.inventory[name]->quantity)
            {
                ui->descbox->setText("Cannot delete more than amount in inventory: " + QString::number(Bulk_Inventory.inventory[name]->quantity));
            }
            else
            {
                Bulk_Inventory.changeItemQuantity(name, Bulk_Inventory.inventory[name]->quantity - newAmount);
                ui->descbox->setText("An item has been deleted from the system!!");
            }

        }

     }

}
// changes price of item
void AdminItems::on_back_4_clicked()
{
     std::string name = ui->pricename->text().toStdString();

     if (ui->pricename->text().isEmpty() || ui->pricename->text().isEmpty())
     {
        QMessageBox::warning(this,"Price Item", "All information must be present!");
     }
     else if (Bulk_Inventory.inventory.find(name) != Bulk_Inventory.inventory.end())
     {
        Bulk_Inventory.changeItemPrice(name,ui->pricenew->text().toFloat());
        ui->descbox->setText("An item's price has been changed in the system!!");
     }
     else
     {
        QMessageBox::warning(this, "Price Item", "Item name not found!");
     }
}

