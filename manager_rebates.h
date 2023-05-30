#ifndef MANAGER_REBATES_H
#define MANAGER_REBATES_H

#include <QDialog>

namespace Ui {
class Rebate;
}

class Rebate : public QDialog
{
    Q_OBJECT

public:
    explicit Rebate(QWidget *parent = nullptr);
    ~Rebate();

private slots:
    void on_back_clicked();

private:
    Ui::Rebate *ui;
};

#endif // MANAGER_REBATES_H




