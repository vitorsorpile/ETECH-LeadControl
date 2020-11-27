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
    create_lead *cl;
    menu(QWidget *parent = nullptr);
    ~menu();


    void salvar();
    void carregar();
    void addRow(Lead lead);

private slots:
    void on_addButton_clicked();

    void on_deleteButton_clicked();

    void addLead(Lead lead);

    void deleteLead(Lead lead);
    void test(Lead *lead);


private:
    Ui::menu *ui;
    int rows;

};
#endif // MENU_H
