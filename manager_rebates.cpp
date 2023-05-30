#include "manager_rebates.h"
#include "ui_manager_rebates.h"
#include"MemberFiles.h"

extern MemberFiles Bulk_Members;

Rebate::Rebate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rebate)
{
    ui->setupUi(this);

    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    text += "Executive Member Rebates:\n";

    list << text;

    for(auto i : Bulk_Members.member_map)
    {
        if(i.second->getType() == "Executive")
        {
            text = QString::number(i.second->getNum()) + "     " + QString::fromStdString(i.second->getName()) + " :  $" + QString::number(i.second->getRebate(), 'f', 2);
            list << text;
        }
    }

    model->setStringList(list);
    ui->listView->setModel(model);

}

Rebate::~Rebate()
{
    delete ui;

}

void Rebate::on_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();

}

