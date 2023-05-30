#include "window_credits.h"
#include "ui_window_credits.h"

Credits::Credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credits)
{
    ui->setupUi(this);

    // PICTURES - jpg/png files in resources img file
    QPixmap pix1(":/resources/img/nekoarc.jpg");
    QPixmap pix2(":/resources/img/footlettuce.jpg");
    QPixmap pix3(":/resources/img/fat.jpg");
    QPixmap pix4(":/resources/img/Kale.png");

        // set scale for all
    int w = ui->picture1->width();
    int h = ui->picture1->height();
    ui->picture1->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));
    ui->picture2->setPixmap(pix2.scaled(w,h,Qt::KeepAspectRatio));
    ui->picture3->setPixmap(pix3.scaled(w,h,Qt::KeepAspectRatio));
    ui->picture4->setPixmap(pix4.scaled(w,h,Qt::KeepAspectRatio));
}

Credits::~Credits()
{
    delete ui;
}

void Credits::on_backbutton_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

