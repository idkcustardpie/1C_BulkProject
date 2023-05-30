#include "admin_member.h"
#include "MemberFiles.h"
#include "ui_admin_member.h"
#include "Membership.h"

extern MemberFiles Bulk_Members;
extern RegularMember Regular_Membership;
extern ExecutiveMember Executive_Membership;

AdminMember::AdminMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMember)
{
    ui->setupUi(this);
}

AdminMember::~AdminMember()
{
    delete ui;
}

void AdminMember::on_delbutton_clicked()
{
    QString reason = ui->delreason->text(); // my own twist, you must have a reason to delete a member !
    int number = ui->delnumber->text().toInt();

    if (Bulk_Members.member_map.find(number) == Bulk_Members.member_map.end())
    {
        QMessageBox::warning(this, "Deleting a Member", "Member not found!!");
    }
    else
    {
        Bulk_Members.removeMember(Bulk_Members[number]);
        ui->descbox->setText("A Bulk Member has been deleted!");
    }

}

void AdminMember::on_clearAll_clicked()
{
    ui->descbox->setText("You have cleared all text!");
}

void AdminMember::on_back_clicked() // back to admin
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void AdminMember::on_addbutton_clicked()
{
    Membership* nptr = NULL;
    int type = ui->spinBox->text().toInt();
    if (type == 1)
    {
        nptr = &Regular_Membership;
    }
    else
    {
        nptr = &Executive_Membership;
    }

    std::string name = ui->addname->text().toStdString();
    int number = ui->addnumber->text().toInt();

    if (Bulk_Members.member_map.find(number) != Bulk_Members.member_map.end())
    {
        QMessageBox::warning(this, "Deleting a Member", "Member already exists!!");
    }
    else if (ui->addname->text().isEmpty() || ui->addnumber->text().isEmpty())
    {
        QMessageBox::warning(this, "Deleting a Member", "Fill in all information.");
    }
    else
    {
        Member* ptr = new Member(name, number, *nptr, "9/24/2023");
        Bulk_Members.addMember(*ptr);
        ui->descbox->setText("A Bulk Member has been added! Yay!");

    }

}


void AdminMember::on_clear1_clicked()
{
    ui->addname->clear();
    ui->addnumber->clear();
    ui->descbox->setText("Add Text has been cleared!");
}


void AdminMember::on_clear2_clicked()
{
    ui->delnumber->clear();
    ui->delreason->clear();
    ui->descbox->setText("Delete Text has been cleared!");
}

