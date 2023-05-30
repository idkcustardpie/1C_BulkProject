#ifndef WINDOW_CREDITS_H
#define WINDOW_CREDITS_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class Credits;
}

class Credits : public QDialog
{
    Q_OBJECT

public:
    explicit Credits(QWidget *parent = nullptr);
    ~Credits();

private slots:
    void on_backbutton_clicked();

private:
    Ui::Credits *ui;
};

#endif // WINDOW_CREDITS_H
