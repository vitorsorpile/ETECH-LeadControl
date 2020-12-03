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
    this->carregar();


    // Configurações da tabela
    this->empresaTab->horizontalHeader()->setFont(QFont("Ubuntu", 12, QFont::Bold));
    this->empresaTab->horizontalHeader()->setHighlightSections(false);

    this->leadTab->horizontalHeader()->setFont(QFont("Ubuntu", 12, QFont::Bold));
    this->leadTab->horizontalHeader()->setHighlightSections(false);



    // Coloca cada lead em uma linha na tabela na interface
    for (auto lead : this->leads) {
        this->leadTab->addRow();
        this->leadTab->setRow(lead);
    }

    // Coloca cada empresa em uma linha na tabela na interface
    for (auto emp: this->empresas) {
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
    this->salvar(leads, "data/leads.txt");
    this->salvar(empresas, "data/empresas.txt");

    delete ui;
}

// Adicionar e deletar leads/empresas das respectivas listas
void menu::addLead(Lead lead) {
  this->leads.push_back(lead);
}

void menu::deleteLead(Lead lead) {
  this->leads.remove(lead);
}

void menu::addEmpresa(Empresa emp) {
    this->empresas.push_back(emp);
}

void menu::deleteEmpresa(Empresa emp) {
    this->empresas.remove(emp);
}

// Salva cada elemento em uma linha no banco de dados passado como parâmetro usando o operador << sobrecarregado
template<class T>
void menu::salvar(T elements, std::string filename) {
  std::ofstream file(filename);
  if (file.is_open()) {
    for (auto element : elements) {
//      if (lead.getEmpresa().getNome() == "") continue;
        file << element << std::endl;
    }
  }
  file.close();
}

void menu::carregar() {
    // Carrega leads do banco de dados
    QFile file("data/leads.txt");

    if (file.open(QIODevice::ReadOnly)){

        QTextStream ss(&file);
        while(!ss.atEnd()) {

            QString line = ss.readLine();
            auto parts = line.split(QLatin1Char(','));

            Lead lead{};
            lead.setEmpresa(parts[0]);
            lead.setResponsavelDaEmpresa(parts[1].remove(0,1));
            lead.setStatus(parts[2].remove(0,1));
            lead.setUltimoContato(parts[3].remove(0,1));
            lead.setTipoDoContato(parts[4].remove(0,1));
            lead.setMembro(parts[5].remove(0,1));
//            lead.setNotas(parts[6].remove(0,1));

            this->addLead(lead);
      }

        file.close();
    }
    // Carrega empresas do banco de dados
    QFile file2("data/empresas.txt");

    if (file2.open(QIODevice::ReadOnly)) {

        QTextStream ss(&file2);
        while(!ss.atEnd()) {

            QString line = ss.readLine();
            auto parts = line.split(QLatin1Char(','));

            Empresa emp{};
            emp.setNome(parts[0]);
            emp.setEmail(parts[1].remove(0,1));
            emp.setTelefone(parts[2].remove(0,1));
            emp.setAnotacoes(parts[3].remove(0,1));

            this->addEmpresa(emp);
        }

        file2.close();
    }
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
            QString empName = this->leadTab->item(this->leadTab->currentRow(), 0)->text();
            Lead* l = this->leadByEmpresa(empName);
            this->leadTab->removeRow(this->leadTab->currentRow());

            this->deleteLead(*l);
        }
    } else {
        if (this->empresaTab->selectionModel()->isRowSelected(this->empresaTab->currentRow(), QModelIndex())) {
            QString empName = this->empresaTab->item(this->empresaTab->currentRow(), 0)->text();
            Empresa* e = this->empresaByName(empName);
            this->empresaTab->removeRow(this->empresaTab->currentRow());

            this->deleteEmpresa(*e);
        }

    }
}

// Clique no botão de trocar de tabela
void menu::on_switchTableButton_clicked()
{
    if(this->switchButtonPressed) {
        ui->switchTableButton->setText("Visualizar Empresas");
        ui->addButton->setText("Adicionar Lead");
        ui->deleteButton->setText("Deletar Lead");

       this->leadTab->show();

    } else {
        ui->switchTableButton->setText("Visualizar Leads");
        ui->addButton->setText("Adicionar Empresa");
        ui->deleteButton->setText("Deletar Empresa");

       this->leadTab->hide();
    }

    this->switchButtonPressed = !this->switchButtonPressed;

}

// Cria novo lead a partir da resposta do forms
void menu::createLead(Lead *lead) {
    this->addLead(*lead);
    this->leadTab->addRow();
    this->leadTab->setRow(*lead);
}

// Cria nova empresa a partir da resposta do forms
void menu::createEmpresa(Empresa *emp) {
    this->addEmpresa(*emp);
    this->empresaTab->addRow();
    this->empresaTab->setRow(*emp);

}

// Retorna o lead correspondente ao nome da empresa passado como parâmetro
Lead* menu::leadByEmpresa(QString emp) {
    for (auto &lead : this->leads) {
        if (emp == lead.getEmpresa().getNome())
            return &lead;
    }
    return nullptr;
}

// Retorna a empresa corresponde ao nome passado como parâmetro
Empresa* menu::empresaByName(QString emp) {
    for (auto &empresa : this->empresas) {
        if (emp == empresa.getNome())
            return &empresa;
    }

    return nullptr;
}

//void menu::tableItemClicked(int row, int column) {
//    std::cout << row << ", " << column << std::endl;
//    if (row == 0) {
//        std::cout << "Implementa a pagina das empresas\n";

//    }

//    Lead *lead = leadByEmpresa(ui->tableWidget->item(row,0)->text());
//    auto emp = empresaByName(this->leadTab->item(row, 0)->text());
//      std::cout << emp->getNome().toStdString() << std::endl;
//    std::cout << emp->getEmail().toStdString() << std::endl;
//    std::cout << emp->getTelefone().toStdString() << std::endl;
//    std::cout << emp->getAnotacoes().toStdString() << std::endl;
//    std::cout << this->leadTab->item(row,column)->text().toStdString() << std::endl;

//}


