#ifndef MANAGER_MEMBERPURCHASES_H
#define MANAGER_MEMBERPURCHASES_H

#include <QDialog>

namespace Ui {
class MemberPurchases;
}

class MemberPurchases : public QDialog
{
    Q_OBJECT

public:
    explicit MemberPurchases(QWidget *parent = nullptr);
    ~MemberPurchases();

private slots:
    void on_back_clicked();

    void on_name_clicked();

    void on_membernumber_clicked();

    void on_SearchBar_clicked();

private:
    Ui::MemberPurchases *ui;
};

#endif // MANAGER_MEMBERPURCHASES_H
