#include "admin_screen.h"
#include "admin_member.h"
#include "ui_admin_screen.h"

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}


void Admin::on_signout_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Sign Out", "Are you sure?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        this->hide();
        QWidget *parent = this->parentWidget();
        parent->show();
    }
    else
    {
        // nothing happens frfr
    }
}

void Admin::on_bulkmember_clicked()
{
    hide();
    adminmember = new AdminMember(this);
    adminmember->show();
}


void Admin::on_items_clicked()
{
    hide();
    adminitems = new AdminItems(this);
    adminitems->show();
}


void Admin::on_conversion_clicked()
{
    hide();
    conversion = new Conversion(this);
    conversion->show();
}

QPushButton* Admin::getBulkMember() const
{
    return ui->bulkmember;
}

QPushButton* Admin::getSignOut() const
{
    return ui->signout;
}

QPushButton* Admin::getItems() const
{
    return ui->items;
}

QPushButton* Admin::getConversion() const
{
    return ui->conversion;
}

QPushButton* Admin::getCreatePurchase() const
{
    return ui->createpurchases;
}


void Admin::on_createpurchases_clicked()
{
    hide();
    createpurchases = new CreatePurchases(this);
    createpurchases->show();
}

void Admin::setTabOrder()
{
    // Set the desired tab order for your widgets
    QWidget::setTabOrder(ui->bulkmember, ui->items);
    QWidget::setTabOrder(ui->items, ui->conversion);
    QWidget::setTabOrder(ui->conversion, ui->createpurchases);
    QWidget::setTabOrder(ui->createpurchases, ui->signout);
    QWidget::setTabOrder(ui->signout, ui->bulkmember);
    // Add more setTabOrder calls as needed
}
