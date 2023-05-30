#ifndef ADMIN_SCREEN_H
#define ADMIN_SCREEN_H

#include <QDialog>
#include "admin_conversion.h"
#include "admin_items.h"
#include "admin_member.h"
#include "admin_createpurchases.h"

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

    // hover
    QPushButton* getBulkMember() const;
    QPushButton* getSignOut() const;
    QPushButton* getItems() const;
    QPushButton* getConversion() const;
    QPushButton* getCreatePurchase() const;

private slots:

    void on_signout_clicked();

    void on_bulkmember_clicked();

    void on_items_clicked();

    void on_conversion_clicked();

    void on_createpurchases_clicked();

    void setTabOrder();

private:
    Ui::Admin *ui;
    Conversion *conversion;
    AdminItems *adminitems;
    AdminMember *adminmember;
    CreatePurchases *createpurchases;
};

#endif // ADMIN_SCREEN_H
