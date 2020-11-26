#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QListWidgetItem>
#include "create_lead.h"
#include "Lead.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QWidget
{
    Q_OBJECT
    std::list<Lead> leads;

public:
    menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_addButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::menu *ui;
    create_lead *cl;
};
#endif // MENU_H
