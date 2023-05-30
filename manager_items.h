#ifndef MANAGER_ITEMS_H
#define MANAGER_ITEMS_H

#include <QDialog>

namespace Ui {
class ManagerItems;
}

class ManagerItems : public QDialog
{
    Q_OBJECT

public:
    explicit ManagerItems(QWidget *parent = nullptr);
    ~ManagerItems();

private slots:
    void on_back_clicked();

    void on_name_clicked();

    void on_searchButton_clicked();

    void on_revenue_clicked();

private:
    Ui::ManagerItems *ui;
};

#endif // MANAGER_ITEMS_H
