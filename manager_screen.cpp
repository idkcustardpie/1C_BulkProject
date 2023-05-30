#include "manager_screen.h"
#include "manager_salesrep.h"
#include "manager_memberpurchases.h"
#include "ui_manager_screen.h"

Manager::Manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manager)
{
    ui->setupUi(this);

    memberpurchases = new MemberPurchases();
    salesreport = new SalesReport();

}

Manager::~Manager()
{
    delete ui;
}

//////

void Manager::setupHoverButton() // this might not be necessary rn, future stuff
{
    salesreport->installEventFilter(this);
}

void Manager::on_signout_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Sign Out", "Are you sure?",
                                  QMessageBox::Yes| QMessageBox::No);
    if (reply ==  QMessageBox::Yes)
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

void Manager::on_purchases_clicked()
{
    hide();
    memberpurchases = new MemberPurchases(this);
    memberpurchases->show();
}


void Manager::on_iteminfobutton_clicked()
{
    hide();
    manageritems = new ManagerItems(this);
    manageritems->show();
}


void Manager::on_expbutton_clicked()
{
    hide();
    expirations = new Expirations(this);
    expirations->show();
}


void Manager::on_rebate_clicked()
{
    hide();
    rebate = new Rebate(this);
    rebate->show();
}


void Manager::on_sr_clicked()
{
    hide();
    salesreport = new SalesReport(this);
    salesreport->show();
}

QPushButton* Manager::getSalesReportButton() const
{
    return ui->sr;
}

QPushButton* Manager::getPurchases() const
{
    return ui->purchases;
}

QPushButton* Manager::getItemInfo() const
{
    return ui->iteminfobutton;
}

QPushButton* Manager::getExpirations() const
{
    return ui->expbutton;
}

QPushButton* Manager::getRebate() const
{
    return ui->rebate;
}

QPushButton* Manager::getSignOut() const
{
    return ui->signout;
}

void Manager::setTabOrder()
{
    // Set the desired tab order for your widgets
    QWidget::setTabOrder(ui->sr, ui->purchases);
    QWidget::setTabOrder(ui->purchases, ui->iteminfobutton);
    QWidget::setTabOrder(ui->iteminfobutton, ui->expbutton);
    QWidget::setTabOrder(ui->expbutton, ui->rebate);
    QWidget::setTabOrder(ui->rebate, ui->signout);
    QWidget::setTabOrder(ui->signout, ui->sr);
    // Add more setTabOrder calls as needed
}
