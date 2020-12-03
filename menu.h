#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "table.h"
#include <QListWidgetItem>
#include "create_lead.h"
#include "create_empresa.h"
#include "Lead.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QWidget
{
    Q_OBJECT


public:
    create_lead *cl;
    create_empresa *ce;
    menu(QWidget *parent = nullptr);
    ~menu();


    template<class T> void salvar(T elements, std::string filename);
    void carregar();
    void addRow(Lead lead);


private:
    std::list<Lead> leads;
    std::list<Empresa> empresas;

    leadTable *leadTab;
    empresaTable *empresaTab;

private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();

    void addLead(Lead lead);

    void deleteLead(Lead lead);
    void createLead(Lead *lead);

    void addEmpresa(Empresa emp);
    void deleteEmpresa(Empresa emp);
    void createEmpresa(Empresa *emp);

//    void tableItemClicked(int, int);

    void on_switchTableButton_clicked();

private:
    Ui::menu *ui;
    Lead* leadByEmpresa(QString emp);
    Empresa* empresaByName(QString emp);
    bool switchButtonPressed;

};


#endif // MENU_H
