#include "manager_expirations.h"
#include "ui_manager_expirations.h"
#include<MemberFiles.h>

extern MemberFiles Bulk_Members;

Expirations::Expirations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Expirations)
{
    ui->setupUi(this);

    ui->Total->setText(QString::number(Bulk_Members.member_map.size()));
}

Expirations::~Expirations()
{
    delete ui;
}

void Expirations::on_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void Expirations::on_DisplayMembers_clicked()
{
    std::string exp_month = ui->SelectMonth->text().toStdString();

    std::string member_month;


    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;

    int count = 0;

    for(auto i : Bulk_Members.member_map)
    {
        member_month = i.second->getExpiration();
        if(member_month[0] == '0')
        {
            member_month = member_month.substr(1,1);
        }
        else
        {
            member_month = member_month.substr(0,2);
        }

        if(member_month == exp_month)
        {
            count++;
            text = QString::number(i.first) + "  :  " +
                   QString::fromStdString(i.second->getType()) + " \n    " +
                   QString::fromStdString(i.second->getName()) + "\n    " +
                   QString::fromStdString(i.second->getExpiration()) + "    " +
                   QString::number(i.second->getExpense()) +
                   "\n   Cost to renew  :  " + QString::number(i.second->getRenewal(), 'f', 2);

            list << text;
        }
    }

    ui->MonthCount->setText(QString::number(count));
    model->setStringList(list);
    ui->listView->setModel(model);

}

void Expirations::on_searchButton_clicked()
{
    std::string searchName = ui->searchbar->text().toStdString();

    if(Bulk_Members.name_map.find(searchName) != Bulk_Members.name_map.end())
    {
        QStringListModel* model = new QStringListModel(this);
        QStringList list;
        QString text;

        text = "FOUND:\n\n" + QString::number(Bulk_Members.name_map[searchName]->getNum()) + "\n    " + QString::fromStdString(searchName) + "\n    " + QString::fromStdString(Bulk_Members.name_map[searchName]->getExpiration());
        list << text;

        model->setStringList(list);
        ui->listView->setModel(model);
    }
}

