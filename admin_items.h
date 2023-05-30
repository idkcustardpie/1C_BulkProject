#ifndef ADMIN_ITEMS_H
#define ADMIN_ITEMS_H

#include <QDialog>

namespace Ui {
class AdminItems;
}

class AdminItems : public QDialog
{
    Q_OBJECT

public:
    explicit AdminItems(QWidget *parent = nullptr);
    ~AdminItems();

private slots:
    void on_back_clicked();

    void on_clearAll_clicked();

    void on_clear1_clicked();

    void on_clear2_clicked();

    void on_clear3_clicked();

    void on_addbutton_clicked();

    void on_delbutton_clicked();

    void on_back_4_clicked();

private:
    Ui::AdminItems *ui;
};

#endif // ADMIN_ITEMS_H
