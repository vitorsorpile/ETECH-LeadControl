#include "menu.h"
#include "ui_menu.h"
#include "Lead.h"
#include "table.h"

#include <QFile>
#include <QTextStream>
#include <list>

#include <QPixmap>
#include <sstream>
#include <fstream>


menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{

    ui->setupUi(this);

    // Inicializa variáveis
    this->switchButtonPressed = false;

    // Cria tabelas
    this->empresaTab = new empresaTable(0, 4, this);
    this->leadTab = new leadTable(0, 6, this);

//    connect(this->leadTab, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(tableItemClicked(int,int)));

    // Coloca logo da ETECH
    QPixmap logo("images/logo.png");
    ui->logo->setPixmap(logo.scaled(360,50,Qt::KeepAspectRatio));

    // Carrega dados do banco de dados
//    this->carregar();
      app.carregar();


    // Configurações das tabelas
    this->empresaTab->horizontalHeader()->setFont(QFont("Ubuntu", 12, QFont::Bold));
    this->empresaTab->horizontalHeader()->setHighlightSections(false);

    this->leadTab->horizontalHeader()->setFont(QFont("Ubuntu", 12, QFont::Bold));
    this->leadTab->horizontalHeader()->setHighlightSections(false);



    // Coloca cada lead em uma linha na tabela na interface
    for (auto lead : app.getLeads()) {
        this->leadTab->addRow();
        this->leadTab->setRow(lead);
    }

    // Coloca cada empresa em uma linha na tabela na interface
    for (auto emp: app.getEmpresas()) {
        this->empresaTab->addRow();
        this->empresaTab->setRow(emp);
    }


    // Muda a cor dos botões
    ui->addButton->setStyleSheet("background-color:white");
    ui->deleteButton->setStyleSheet("background-color:white");
    ui->switchTableButton->setStyleSheet("background-color:white");


}

// Destrutor
menu::~menu()
{
    // Salva os elementos no banco de dados passado como parâmetro antes de finalizar o programa
   app.salvar(app.getLeads(), "data/leads.txt");
   app.salvar(app.getEmpresas(), "data/empresas.txt");

    delete ui;
}


// Clique no botão de adicionar
void menu::on_addButton_clicked()
{
    if (!this->switchButtonPressed) {
        cl = new create_lead(this);
        cl->show();
    } else {
        ce = new create_empresa(this);
        ce->show();
    }


}

// Clique no botão de deletar
void menu::on_deleteButton_clicked()
{
    if(!this->switchButtonPressed) {
        // if para evitar erro quando só tem um lead
        if (this->leadTab->selectionModel()->isRowSelected(this->leadTab->currentRow(), QModelIndex())) {
            std::string empName = this->leadTab->item(this->leadTab->currentRow(), 0)->text().toStdString();
            Lead* l = app.leadByEmpresa(empName);
            this->leadTab->removeRow(this->leadTab->currentRow());

            app.deleteLead(*l);
        }
    } else {
        if (this->empresaTab->selectionModel()->isRowSelected(this->empresaTab->currentRow(), QModelIndex())) {
            std::string empName = this->empresaTab->item(this->empresaTab->currentRow(), 0)->text().toStdString();
            Empresa* e = app.empresaByName(empName);
            this->empresaTab->removeRow(this->empresaTab->currentRow());

            app.deleteEmpresa(*e);
        }

    }
}

// Clique no botão de trocar de tabela
void menu::on_switchTableButton_clicked()
{
    if(this->switchButtonPressed) {
        ui->switchTableButton->setText("Visualizar Empresas");
        ui->addButton->setText("Adicionar Lead");
        ui->deleteButton->setText("Excluir Lead");

       this->leadTab->show();

    } else {
        ui->switchTableButton->setText("Visualizar Leads");
        ui->addButton->setText("Adicionar Empresa");
        ui->deleteButton->setText("Excluir Empresa");

       this->leadTab->hide();
    }

    this->switchButtonPressed = !this->switchButtonPressed;

}

// Cria novo lead a partir da resposta do forms
void menu::createLead(Lead *lead) {
    app.addLead(*lead);
    this->leadTab->addRow();
    this->leadTab->setRow(*lead);
}

// Cria nova empresa a partir da resposta do forms
void menu::createEmpresa(Empresa *emp) {
    app.addEmpresa(*emp);
    this->empresaTab->addRow();
    this->empresaTab->setRow(*emp);

}
