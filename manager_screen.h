#ifndef MANAGER_H
#define MANAGER_H

#include <QDialog>
#include <QLineEdit>
#include "manager_expirations.h"
#include "manager_memberpurchases.h"
#include "manager_salesrep.h"
#include "manager_items.h"
#include "manager_rebates.h"
#include "DailyReport.h"

namespace Ui {
class Manager;
}

class Manager : public QDialog
{
    Q_OBJECT

public:
    explicit Manager(QWidget *parent = nullptr);
    ~Manager();
    DailyReport* dailyReport;
    Inventory* inventory;
    MemberFiles* memberFiles;

    // hover description
    QPushButton* getSalesReportButton() const;
    QPushButton* getPurchases() const;
    QPushButton* getExpirations() const;
    QPushButton* getRebate() const;
    QPushButton* getSignOut() const;
    QPushButton* getItemInfo() const;

private slots:

    void setupHoverButton();

    void on_signout_clicked();

    void on_purchases_clicked();

    void on_iteminfobutton_clicked();

    void on_expbutton_clicked();

    void on_rebate_clicked();

    void on_sr_clicked();

    void setTabOrder();

private:
    Ui::Manager *ui;
    SalesReport* salesreport;
    MemberPurchases* memberpurchases;
    QLineEdit *descriptionbox;
    ManagerItems *manageritems;
    Rebate* rebate;
    Expirations *expirations;

};

#endif // MANAGER_H
