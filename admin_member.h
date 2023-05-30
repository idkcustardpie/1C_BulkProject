#ifndef ADMIN_MEMBER_H
#define ADMIN_MEMBER_H

#include <QDialog>

namespace Ui {
class AdminMember;
}

class AdminMember : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMember(QWidget *parent = nullptr);
    ~AdminMember();

private slots:
    void on_delbutton_clicked();

    void on_clearAll_clicked();

    void on_back_clicked();

    void on_addbutton_clicked();

    void on_clear1_clicked();

    void on_clear2_clicked();

private:
    Ui::AdminMember *ui;
};

#endif // ADMIN_MEMBER_H
