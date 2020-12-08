#include "menu.h"
#include "ui_menu.h"

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
    this->empresaTable = new EmpresaTable(0, 4, this);
    this->leadTable = new LeadTable(0, 6, this);

    // Coloca logo da ETECH
    QPixmap logo("images/logo.png");
    ui->logo->setPixmap(logo.scaled(360,50,Qt::KeepAspectRatio));

    // Carrega dados do banco de dados
      app.carregar();


    // Configurações das tabelas
    this->empresaTable->horizontalHeader()->setFont(QFont("Ubuntu", 12, QFont::Bold));
    this->empresaTable->horizontalHeader()->setHighlightSections(false);

    this->leadTable->horizontalHeader()->setFont(QFont("Ubuntu", 12, QFont::Bold));
    this->leadTable->horizontalHeader()->setHighlightSections(false);



    // Coloca cada lead em uma linha na tabela na interface
    for (auto lead : app.getLeads()) {
        this->leadTable->addRow();
        this->leadTable->setRow(lead);
    }

    // Coloca cada empresa em uma linha na tabela na interface
    for (auto emp: app.getEmpresas()) {
        this->empresaTable->addRow();
        this->empresaTable->setRow(emp);
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
        if (this->leadTable->selectionModel()->isRowSelected(this->leadTable->currentRow(), QModelIndex())) {
            std::string empName = this->leadTable->item(this->leadTable->currentRow(), 0)->text().toStdString();
            Lead* l = app.leadByEmpresa(empName);
            this->leadTable->removeRow(this->leadTable->currentRow());

            app.deleteLead(*l);
        }
    } else {
        if (this->empresaTable->selectionModel()->isRowSelected(this->empresaTable->currentRow(), QModelIndex())) {
            std::string empName = this->empresaTable->item(this->empresaTable->currentRow(), 0)->text().toStdString();
            Empresa* e = app.empresaByName(empName);
            this->empresaTable->removeRow(this->empresaTable->currentRow());

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

       this->leadTable->show();

    } else {
        ui->switchTableButton->setText("Visualizar Leads");
        ui->addButton->setText("Adicionar Empresa");
        ui->deleteButton->setText("Excluir Empresa");

       this->leadTable->hide();
    }

    this->switchButtonPressed = !this->switchButtonPressed;

}

// Cria novo lead a partir da resposta do forms
void menu::createLead(Lead *lead) {
    app.addLead(*lead);
    this->leadTable->addRow();
    this->leadTable->setRow(*lead);
}

// Cria nova empresa a partir da resposta do forms
void menu::createEmpresa(Empresa *emp) {
    app.addEmpresa(*emp);
    this->empresaTable->addRow();
    this->empresaTable->setRow(*emp);

}
