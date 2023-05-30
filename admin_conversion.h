#ifndef ADMIN_CONVERSION_H
#define ADMIN_CONVERSION_H

#include <QDialog>
#include <QMessageBox>
#include "Member.h"

namespace Ui {
class Conversion;
}

class Conversion : public QDialog
{
    Q_OBJECT

public:
    explicit Conversion(QWidget *parent = nullptr);
    ~Conversion();

private slots:

    void on_back_clicked();

    void on_clear_clicked();

    void on_generate_clicked();

    void on_back_2_clicked();

private:
    Ui::Conversion *ui;
};

#endif // ADMIN_CONVERSION_H
