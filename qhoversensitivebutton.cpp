#include "qhoversensitivebutton.h"

#include "mainwindow.h"
#include "manager_screen.h"
#include "admin_screen.h"

QHoverSensitiveButton::QHoverSensitiveButton(QWidget *parent) : QPushButton(parent)
{
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
}

void QHoverSensitiveButton::setupHoverButton()
{
    //connect(this, &QHoverSensitiveButton::hoverEnter, this, &QHoverSensitiveButton::hoverEnter);
    //connect(this, &QHoverSensitiveButton::hoverLeave, this, &QHoverSensitiveButton::hoverLeave);
}


void QHoverSensitiveButton::hoverEnter(QHoverEvent *)
{
    // Bold font for ALL QHoverSensitiveButton's in ANY ui
    QFont font = this->font();
    font.setBold(true);
    this->setFont(font);
    repaint();

    // QString definitions
    QString descriptionText = " Hello! I am a default button with a purpose.";

    // MAIN WINDOW - has not used
    MainWindow *mainWindow = dynamic_cast<MainWindow*>(this->window());
    if (mainWindow != nullptr) {
        QTextEdit *descriptionBox = mainWindow->findChild<QTextEdit*>("descriptionBox");
        if (descriptionBox != nullptr) {
            descriptionBox->setText(descriptionText);
            descriptionBox->update();
        }
    }

    // MANAGER - used
    Manager *manager = dynamic_cast<Manager*>(this->window());
    if (manager != nullptr) {
        QTextEdit *descriptionBox = manager->findChild<QTextEdit*>("descriptionBox");
        if (descriptionBox != nullptr)
        {
            if (this == manager->getSalesReportButton())
            {
                QString salesRepDesc = "\n SALES REPORT\n\n"
                                       " Displays items and quantity sold for each day.\n\n"
                                       " Lists member names and their membership types.\n\n"
                                       " Keeps count of regular and executive members.\n\n"
                                       " Display total revenue with tax for each day.\n\n"
                                       " Gives the option to display a graph.";

                descriptionBox->setText(salesRepDesc);
            }
            else if (this == manager->getPurchases())
            {
                QString purchasesDesc = "\n MEMBER PURCHASES\n\n"
                                        " Displays every member's total purchases with tax.\n\n"
                                        " Sorted by membership number.\n\n"
                                        " Sorted by member name.\n\n"
                                        " Includes grand total with tax.\n\n"
                                        " Displays all purchases of a specific member.\n\n"
                                        " Enter a membership number or member name to search.";

                descriptionBox->setText(purchasesDesc);
            }
            else if (this == manager->getRebate())
            {
                QString rebateDesc = "\n REBATE\n\n"
                                     " Displays all executive members.\n\n"
                                     " Sorted by membership number.\n\n"
                                     " Rebates are based on purchases before tax.";

                descriptionBox->setText(rebateDesc);
            }
            else if (this == manager->getExpirations())
            {
                QString expDesc = "\n EXPIRATIONS\n\n"
                                  " Displays members with expiring memberships.\n\n"
                                  " Displays cost to renew their membership.\n\n"
                                  " Enter month to search.";

                descriptionBox->setText(expDesc);
            }
            else if (this == manager->getItemInfo())
            {
                QString itemInfoDesc = "\n ITEM PURCHASES\n\n"
                                       " Displays item's quantity sold and revenue without tax.\n\n"
                                       " Enter name to search.\n\n"
                                       " Option to sort by name or revenue.";

                descriptionBox->setText(itemInfoDesc);
            }
            else if (this == manager->getSignOut())
            {
                QString signOutDesc = "\n SIGN OUT\n\n"
                                      " Returns user to login menu.";

                descriptionBox->setText(signOutDesc);
            }
            else
            {
                descriptionBox->setText(descriptionText);
            }

            descriptionBox->update();
        }
    }

    // ADMIN - used
    Admin *admin = dynamic_cast<Admin*>(this->window());
    if (admin != nullptr) {
        QTextEdit *descriptionBox = admin->findChild<QTextEdit*>("descriptionBox");
        if (descriptionBox != nullptr)
        {
            if (this == admin->getBulkMember())
            {
                QString bulkDesc = "\n BULK MEMBER\n\n"
                                   " Gives an option to add a bulk member.\n\n"
                                   " Gives an option to delete a bulk member.";

                descriptionBox->setText(bulkDesc);
            }
            else if (this == admin->getConversion())
            {
                QString conversionDesc = "\n CONVERSION\n\n"
                                         " Displays members that are reccomended to convert.\n\n"
                                         " Shows if Executives should convert to Regular.\n\n"
                                         " Conversion program is based off sales.";

                descriptionBox->setText(conversionDesc);

            }
            else if (this == admin->getItems())
            {
                QString itemDesc = "\n ITEM CUSTOMIZATION\n\n"
                                   " Gives an option to add an item.\n\n"
                                   " Gives an option to delete an item.\n\n"
                                   " Gives an option to change an item's price.";

                descriptionBox->setText(itemDesc);

            }
            else if (this == admin->getSignOut())
            {
                QString signOutDesc = "\n SIGN OUT\n\n"
                                      " Returns user to login menu.";

                descriptionBox->setText(signOutDesc);
            }
            else if (this == admin->getCreatePurchase())
            {
                QString createdesc = "\n CREATE PURCHASES\n\n"
                                     " Create purchases for new members.\n\n";

                descriptionBox->setText(createdesc);
            }
            else
            {
                descriptionBox->setText(descriptionText);
            }

            descriptionBox->update();

        }
    }
}

void QHoverSensitiveButton::hoverLeave(QHoverEvent *)
{
    QFont font = this->font();
    font.setBold(false);
    this->setFont(font);
    repaint();

    QString descriptionText = ""; // nothing will be displayed for the leave option

    // MAIN WINDOW - has not used
    MainWindow *mainWindow = dynamic_cast<MainWindow*>(this->window());
    if (mainWindow != nullptr) {
        QTextEdit *descriptionBox = mainWindow->findChild<QTextEdit*>("descriptionBox");
        if (descriptionBox != nullptr) {
            descriptionBox->setText(descriptionText);
            descriptionBox->update();
        }
    }

    // MANAGER - used
    Manager *manager = dynamic_cast<Manager*>(this->window());
    if (manager != nullptr) {
        QTextEdit *descriptionBox = manager->findChild<QTextEdit*>("descriptionBox");
        if (descriptionBox != nullptr)
        {
            descriptionBox->setText(descriptionText);
            descriptionBox->update();
        }
    }

    // ADMIN - used
    Admin *admin = dynamic_cast<Admin*>(this->window());
    if (admin != nullptr) {
        QTextEdit *descriptionBox = admin->findChild<QTextEdit*>("descriptionBox");
        if (descriptionBox != nullptr)
        {
            descriptionBox->setText(descriptionText);
            descriptionBox->update();
        }
    }
}

void QHoverSensitiveButton::hoverMove(QHoverEvent *)
{
    QFont font = this->font();
    font.setBold(true);
    this->setFont(font);
    repaint();
}

bool QHoverSensitiveButton::event(QEvent *event)
{
    switch(event->type())
    {
    case QEvent::HoverEnter:
        hoverEnter(static_cast<QHoverEvent*>(event));
        return true;
        break;
    case QEvent::HoverLeave:
        hoverLeave(static_cast<QHoverEvent*>(event));
        return true;
        break;
    case QEvent::HoverMove:
        hoverMove(static_cast<QHoverEvent*>(event));
        return true;
        break;
    default:
        break;
    }
    return QWidget::event(event);
}
