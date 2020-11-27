#include "menu.h"
#include "ui_menu.h"
#include "Lead.h"

#include <QFile>
#include <QTextStream>
#include <list>
#include <sstream>
#include <fstream>

//Lead &find_lead(QString name) {
//    for (auto lead)
//}

menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{

    this->rows = 0;
    ui->setupUi(this);
    this->carregar();
//    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnWidth(0, 180);
    ui->tableWidget->setColumnWidth(6, 274);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    for (auto lead : this->leads) {
        this->addRow(lead);
    }
}

menu::~menu()
{
    this->salvar();
    delete ui;
}

void menu::addLead(Lead lead) {
  this->leads.push_back(lead);
}

void menu::deleteLead(Lead lead) {
  this->leads.remove(lead);
}

void menu::salvar() {
  std::ofstream file("E:/prog3/ControleDeLead/ETECH-LeadControl/Interface/data/db.txt");
  if (file.is_open()) {
    for (auto lead : this->leads) {
      if (lead.getEmpresa().getNome() == "") continue;
        file << lead << std::endl;
    }
  }
  file.close();
}

void menu::carregar() {
    QFile file("E:/prog3/ControleDeLead/ETECH-LeadControl/Interface/data/db.txt");

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

    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
//    this->leads.remove([] () { });
//    this->strings.remove((ui->listWidget->currentItem()));
//    std::cout << ui->listWidget->currentItem()->text();
}

void menu::test(Lead *lead) {
//    std::cout << "Recebi o sinal\n";
//    std::cout << lead->getResponsavelDaEmpresa().toStdString();
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
