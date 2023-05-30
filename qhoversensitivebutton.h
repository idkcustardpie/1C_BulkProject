/*
 * you may be wondering what is on this file..
 * to put it simply, it is a hover custom class
 * the push buttons will bold text and light the
 * box to a different color. it will allow text
 * changes on a separate box for a description.
*/

#ifndef QHOVERSENSITIVEBUTTON_H
#define QHOVERSENSITIVEBUTTON_H

#include <QtWidgets>
#include <QTextEdit>
#include <QString>

class QHoverSensitiveButton : public QPushButton
{
    Q_OBJECT
public:
    explicit QHoverSensitiveButton(QWidget *parent = 0);

protected:
    void hoverEnter(QHoverEvent *event);
    void hoverLeave(QHoverEvent *event);
    void hoverMove(QHoverEvent *event);
    bool event(QEvent *event);

    void setupHoverButton();

signals:

public slots:

private:
   // MainWindow *descriptionBox;
};

#endif // QHOVERSENSITIVEBUTTON_H
