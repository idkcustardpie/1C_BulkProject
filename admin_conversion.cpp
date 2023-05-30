#include "admin_conversion.h"
#include "DailyReport.h"
#include "ui_admin_conversion.h"
#include "MemberFiles.h"

extern MemberFiles Bulk_Members;
extern DailyReport** Bulk_Reports;
extern ExecutiveMember Executive_Membership;
extern RegularMember Regular_Membership;

Conversion::Conversion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Conversion)
{
    ui->setupUi(this);

    QString labeltext = ui->label_6->text();
    labeltext = labeltext + "   " + QString::number(Bulk_Members.member_map.size());
    ui->label_6->setText(labeltext);

    QString labeltext1 = ui->label_5->text();
    int amount = 0;
    for(auto i : Bulk_Members.member_map)
    {
        if(i.second->getType() == "Executive")
        {
            if (i.second->getExpense() <= 60) // savings are less or equal to 60
            {
                amount++;
            }
        }
    }

    labeltext1 += "  ";
    labeltext1 += QChar('0' + amount);
    ui->label_5->setText(labeltext1);

    QString labeltext2 = ui->label_4->text();
    int amount1 = 2;
    for(auto i : Bulk_Members.member_map)
    {
        if(i.second->getType() == "Regular")
        {
            if (i.second->getExpense() > 60) // savings are greater than 60
            {
                amount1++;
            }

        }
    }

    labeltext2 += "  ";
    labeltext2 += QChar('0' + amount1);
    ui->label_4->setText(labeltext2);

    QStringListModel* model = new QStringListModel(this);
    QStringList list;
    QString text;
    QString text1;

    text += "From Executive to Regular:\n";
    list << text;

    for(auto i : Bulk_Members.member_map)
    {
        if(i.second->getType() == "Executive")
        {
            if (i.second->getExpense() <= 60) // savings are less or equal to 60
            {
                text = QString::number(i.second->getNum()) + "    " + QString::fromStdString(i.second->getName()) + "     " + QString::number(i.second->getExpense());
                list << text;
            }

        }
    }

    text1 += "\n\nFrom Regular to Executive:\n";
    list << text1;

    for(auto i : Bulk_Members.member_map)
    {
        if(i.second->getType() == "Regular")
        {
            if (i.second->getExpense() > 60) // savings are greater than 60
            {
                text1 = QString::number(i.second->getNum()) + "    " + QString::fromStdString(i.second->getName()) + "     " + QString::number(i.second->getExpense());
                list << text1;
            }

        }
    }

    model->setStringList(list);
    ui->listView->setModel(model);


}

Conversion::~Conversion()
{
    delete ui;
}

void Conversion::on_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void Conversion::on_clear_clicked()
{
    ui->nameconvert->clear();
    ui->numberconvert->clear();
}

void Conversion::on_back_2_clicked()
{
    bool nameFound = false;  // checks if name found, its false now

    for (auto i : Bulk_Members.member_map)
    {
        QString convertedName = ui->nameconvert->text();
        std::string name = i.second->getName();

        if (name == convertedName.toStdString())
        {
            // change membership
            std::string type = Bulk_Members.name_map[name]->getType();

            if (type == "Executive" || type == "executive")
            {
                Bulk_Members.name_map[name]->changeMembership(Regular_Membership);

                QMessageBox::information(this, "Conversion", "Regular conversion completed!");
            }
            else
            {
                 Bulk_Members.name_map[name]->changeMembership(Executive_Membership);
                QMessageBox::information(this, "Conversion", "Executive conversion completed!");
            }
            nameFound = true;  // now true
            break; // breaks loop
        }
    }

    if (!nameFound)
    {
        if (ui->nameconvert->text().isEmpty() || ui->numberconvert->text().isEmpty())
        {
            QMessageBox::warning(this, "Conversion", "All information must be present to convert!");
        }
        else
        {
            QMessageBox::warning(this, "Conversion", "Name not found!!");
        }
    }
}

void Conversion::on_generate_clicked()
{

    if (ui->number->isChecked())
    {
        QStringListModel* model = new QStringListModel(this);
        QStringList list;
        QString text;
        QString text1;

        text += "From Executive to Regular:\n";
        list << text;

        for(auto i : Bulk_Members.member_map)
        {
            if(i.second->getType() == "Executive")
            {
                if (i.second->getExpense() <= 60) // savings are less or equal to 60
                {
                    text = QString::number(i.second->getNum()) + "    " + QString::fromStdString(i.second->getName()) + "     " + QString::number(i.second->getExpense());
                    list << text;
                }

            }
        }

        text1 += "\n\nFrom Regular to Executive:\n";
        list << text1;

        for(auto i : Bulk_Members.member_map)
        {
            if(i.second->getType() == "Regular")
            {
                if (i.second->getExpense() > 60) // savings are greater than 60
                {
                    text1 = QString::number(i.second->getNum()) + "    " + QString::fromStdString(i.second->getName()) + "     " + QString::number(i.second->getExpense());
                    list << text1;
                }

            }
        }

        model->setStringList(list);
        ui->listView->setModel(model);

    }
    else if (ui->name->isChecked())
    {
        // make sure to organize SORT by name
        QStringListModel* model = new QStringListModel(this);
        QStringList list;
        QString text;
        QString text1;

        text += "From Executive to Regular:\n";
        list << text;

        for(auto i : Bulk_Members.name_map)
        {
            if(i.second->getType() == "Executive")
            {
                if (i.second->getExpense() <= 60) // savings are less or equal to 60
                {
                    text = QString::number(i.second->getNum()) + "    " + QString::fromStdString(i.second->getName()) + "     " + QString::number(i.second->getExpense());
                    list << text;
                }

            }
        }

        text1 += "\n\nFrom Regular to Executive:\n";
        list << text1;

        for(auto i : Bulk_Members.name_map)
        {
            if(i.second->getType() == "Regular")
            {
                if (i.second->getExpense() > 60) // savings are greater than 60
                {
                    text1 = QString::number(i.second->getNum()) + "    " + QString::fromStdString(i.second->getName()) + "     " + QString::number(i.second->getExpense());
                    list << text1;
                }

            }

        }

        model->setStringList(list);
        ui->listView->setModel(model);
    }
    else
    {
        // to show that nothing is selected
        // just in case
        QStringListModel* model = new QStringListModel(this);
        QStringList list;
        QString text = "Nothing selected.";
        list << text;
        model->setStringList(list);
        ui->listView->setModel(model);
    }

}

