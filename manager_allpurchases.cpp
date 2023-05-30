#include "manager_allpurchases.h"
#include "ui_manager_allpurchases.h"

AllPurchases::AllPurchases(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllPurchases)
{
    ui->setupUi(this);
}

AllPurchases::~AllPurchases()
{
    delete ui;
}
