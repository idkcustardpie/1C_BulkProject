#ifndef MANAGER_ALLPURCHASES_H
#define MANAGER_ALLPURCHASES_H

#include <QDialog>

namespace Ui {
class AllPurchases;
}

class AllPurchases : public QDialog
{
    Q_OBJECT

public:
    explicit AllPurchases(QWidget *parent = nullptr);
    ~AllPurchases();

private:
    Ui::AllPurchases *ui;
};

#endif // MANAGER_ALLPURCHASES_H
