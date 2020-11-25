#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "create_lead.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QWidget
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::menu *ui;
    create_lead *cl;
};
#endif // MENU_H
