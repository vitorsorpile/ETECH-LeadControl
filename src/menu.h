#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "table.h"
#include <QListWidgetItem>
#include "create_lead.h"
#include "create_empresa.h"
#include "App.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QWidget
{
    Q_OBJECT


public:
    App app;
    create_lead *cl;
    create_empresa *ce;
    menu(QWidget *parent = nullptr);
    ~menu();

private:
    leadTable *leadTab;
    empresaTable *empresaTab;
    Ui::menu *ui;
    bool switchButtonPressed;

private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();

    void createLead(Lead *lead);
    void createEmpresa(Empresa *emp);

    void on_switchTableButton_clicked();

};


#endif // MENU_H
