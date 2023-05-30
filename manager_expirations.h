#ifndef MANAGER_EXPIRATIONS_H
#define MANAGER_EXPIRATIONS_H

#include <QDialog>

namespace Ui {
class Expirations;
}

class Expirations : public QDialog
{
    Q_OBJECT

public:
    explicit Expirations(QWidget *parent = nullptr);
    ~Expirations();

private slots:
    void on_back_clicked();

    void on_DisplayMembers_clicked();

    void on_searchButton_clicked();

private:
    Ui::Expirations *ui;
};

#endif // MANAGER_EXPIRATIONS_H
