#ifndef ADMIN_CREATEPURCHASES_H
#define ADMIN_CREATEPURCHASES_H

#include <QDialog>

namespace Ui {
class CreatePurchases;
}

class CreatePurchases : public QDialog
{
    Q_OBJECT

public:
    explicit CreatePurchases(QWidget *parent = nullptr);
    ~CreatePurchases();

private slots:
    void on_back_clicked();

    void on_Create_clicked();

    void on_clearbutton_clicked();

private:
    Ui::CreatePurchases *ui;
};

#endif // ADMIN_CREATEPURCHASES_H
