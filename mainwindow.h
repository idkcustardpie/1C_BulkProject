#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "admin_screen.h"
#include "manager_screen.h"
#include "window_credits.h"
#include "Inventory.h"
#include "MemberFiles.h"
#include "DailyReport.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// account info
struct Account
{
    QString username;
    QString password;
    QString role;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /*Inventory inventory;
    MemberFiles members;*/
    DailyReport* reports[NUM_DAYS];

private slots:
    void on_login_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void initializeAccounts();

    void setTabOrder();

private:
    Ui::MainWindow *ui;
    Manager* manager;
    Admin *admin;
    Credits *credits;
    Account* account;

};

#endif // MAINWINDOW_H
