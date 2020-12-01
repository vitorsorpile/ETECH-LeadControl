#include "menu.h"
#include "ui_menu.h"
#include "Lead.h"

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

    this->rows = 0;
    ui->setupUi(this);


    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(tableItemClicked(int,int)));
    // Coloca logo da ETECH
    QPixmap logo("images/logo.png");
    ui->logo->setPixmap(logo.scaled(360,50,Qt::KeepAspectRatio));

    // Carrega dados do banco de dados
    this->carregar();

    // Configurações da tabela
//    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnWidth(0, 180);
    ui->tableWidget->setColumnWidth(6, 274);
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Coloca cada lead em uma linha na tabela na interface
    for (auto lead : this->leads) {
        this->addRow(lead);
    }

    ui->addButton->setStyleSheet("background-color:white");
    ui->deleteButton->setStyleSheet("background-color:white");

}

menu::~menu()
{
    // Salva os leads no banco de dados antes de finalizar o programa
    this->salvar();
    delete ui;
}

void menu::addLead(Lead lead) {
  this->leads.push_back(lead);
}

void menu::deleteLead(Lead lead) {
  this->leads.remove(lead);
}

// Salva cada lead em uma linha no banco de dados usando o operador << sobrecarregado
void menu::salvar() {
  std::ofstream file("data/db.txt");
  if (file.is_open()) {
    for (auto lead : this->leads) {
      if (lead.getEmpresa().getNome() == "") continue;
        file << lead << std::endl;
    }
  }
  file.close();
}

void menu::carregar() {
    QFile file("data/db.txt");

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
            lead.setNotas(parts[6].remove(0,1));

            this->addLead(lead);
      }

        file.close();
    }
}

void menu::on_addButton_clicked()
{
    cl = new create_lead(this);
    cl->show();

}

void menu::on_deleteButton_clicked()
{

    if (ui->tableWidget->selectionModel()->isRowSelected(ui->tableWidget->currentRow(),QModelIndex())) {
        QString empName = ui->tableWidget->item(ui->tableWidget->currentRow(), 0)->text();
        Lead* l = this->leadByEmpresa(empName);
        ui->tableWidget->removeRow(ui->tableWidget->currentRow());

        this->deleteLead(*l);
    }


}

void menu::createLead(Lead *lead) {
    this->addLead(*lead);
    this->addRow(*lead);

}

void menu::addRow(Lead lead) {
    ui->tableWidget->insertRow(rows);

    auto item0 = new QTableWidgetItem();
    item0->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(rows,0,item0);
    ui->tableWidget->item(rows,0)->setData(Qt::DisplayRole, lead.getEmpresa().getNome());

    auto item1 = new QTableWidgetItem();
    item1->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(rows,1,item1);
    ui->tableWidget->item(rows,1)->setData(Qt::DisplayRole, lead.getResponsavelDaEmpresa());

    auto item2 = new QTableWidgetItem();
    item2->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(rows,2,item2);
    ui->tableWidget->item(rows,2)->setData(Qt::DisplayRole, lead.getStatus());

    auto item3 = new QTableWidgetItem();
    item3->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(rows,3,item3);
    ui->tableWidget->item(rows,3)->setData(Qt::DisplayRole, lead.getUltimoContato());

    auto item4 = new QTableWidgetItem();
    item4->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(rows,4,item4);
    ui->tableWidget->item(rows,4)->setData(Qt::DisplayRole, lead.getTipoDoContato());

    auto item5 = new QTableWidgetItem();
    item5->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(rows,5,item5);
    ui->tableWidget->item(rows,5)->setData(Qt::DisplayRole, lead.getMembro());

    auto item6 = new QTableWidgetItem();
    item6->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(rows,6,item6);
    ui->tableWidget->item(rows,6)->setData(Qt::DisplayRole, lead.getNotas());

    rows++;
}

// Retorna o lead correspondente ao nome da empresa passado como parâmetro
Lead* menu::leadByEmpresa(QString emp) {
    for (auto &lead : this->leads) {
        if (emp == lead.getEmpresa().getNome())
            return &lead;
    }
    return nullptr;
}

void menu::tableItemClicked(int row, int column) {
//    std::cout << row << ", " << column << std::endl;
    if (row == 0) {
        std::cout << "Implementa a pagina das empresas\n";

    }

//    Lead *lead = leadByEmpresa(ui->tableWidget->item(row,0)->text());
    std::cout << ui->tableWidget->item(row,column)->text().toStdString() << std::endl;

}
