#include "mainwindow.h"
#include "ui_mainwindow.h"

DailyReport** Bulk_Reports;
Inventory Bulk_Inventory;
MemberFiles Bulk_Members;
std::map<QString, Account> accounts; // for accounts

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setTabOrder();

    std::string txt_files[NUM_DAYS] = {":/resources/txt_files/day1.txt", ":/resources/txt_files/day2.txt", ":/resources/txt_files/day3.txt", ":/resources/txt_files/day4.txt", ":/resources/txt_files/day5.txt", ":/resources/txt_files/day6.txt", ":/resources/txt_files/day7.txt"};

    for(int i = 0; i < NUM_DAYS; i++)
    {
        reports[i] = new DailyReport(txt_files[i], Bulk_Inventory, Bulk_Members);
    }

    Bulk_Reports = reports;
}

MainWindow::~MainWindow()
{
    for(int i = 0; i < NUM_DAYS; i++)
    {
        delete reports[i];
    }
    delete ui;
}

void MainWindow::setTabOrder()
{
    // Set the desired tab order for your widgets
    QWidget::setTabOrder(ui->username, ui->password);
    QWidget::setTabOrder(ui->password, ui->login);
    QWidget::setTabOrder(ui->login, ui->pushButton_2);
    QWidget::setTabOrder(ui->pushButton_2, ui->pushButton);
    QWidget::setTabOrder(ui->pushButton, ui->pushButton_3);
    QWidget::setTabOrder(ui->pushButton_3, ui->username);
    // Add more setTabOrder calls as needed
}


void MainWindow::initializeAccounts()
{


    Account s;
    s.username = "HomiBodi";
    s.password = "123456";
    s.role = "Store Manager";
    accounts[s.username] = s;

    Account a;
    a.username = "Cat";
    a.password = "Meow";
    a.role = "Admin";
    accounts[a.username] = a;
}


void MainWindow::on_login_clicked()
{
    QString user = ui->username->text();
    QString pass = ui->password->text();

    ui->password->setEchoMode(QLineEdit::Password); // hides password textbox info

    auto it = accounts.find(user);

    if (it != accounts.end())
    {
        hide();
        Account account = accounts[user];

        if (account.role == "Store Manager")
        {
            manager = new Manager(this);
            manager->show();
        }
        else if (account.role == "Admin")
        {
            admin = new Admin(this);
            admin->show();
        }

        ui->username->clear();
        ui->password->clear();
    }

    // rest of the code is not usable, this is the actual usable portion

    else if (user == "HomiBodi" || pass == "123456")
    {
        hide();
        manager = new Manager(this);
        manager->show();
        ui->username->clear();
        ui->password->clear();
    }
    else if (user == "Cat" || pass == "Meow")
    {
        hide();
        admin = new Admin(this);
        admin->show();
        ui->username->clear();
        ui->password->clear();
    }

    else
    {
        if (user.isEmpty() && pass.isEmpty())
        {
            QMessageBox::warning(this, "Login", "Username and Password are empty.");
        }
        else if (user.isEmpty() || pass.isEmpty())
        {
            QMessageBox::warning(this, "Login", "Either the Username or Password is missing.");
        }
        else
        {
            QMessageBox::warning(this, "Login", "Username and Password are incorrect.");
        }
    }
}

void MainWindow::on_pushButton_2_clicked() // clears text
{
    ui->username->clear();
    ui->password->clear();
}


void MainWindow::on_pushButton_clicked()
{
    exit(0);
}


void MainWindow::on_pushButton_3_clicked()
{
    hide();
    credits = new Credits(this);
    credits->show();
    ui->username->clear(); // clears text
    ui->password->clear();
}

