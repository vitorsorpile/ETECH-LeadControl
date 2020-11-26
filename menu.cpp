#include "menu.h"
#include "ui_menu.h"
#include "Lead.h"
#include <list>
#include <QPixmap>

//Lead &find_lead(QString name) {
//    for (auto lead)
//}

menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{

    Empresa emp("Mazinho Lanches", "mazinho@gmail.com", "4711111111");
    Lead lead(emp, "Osmar", "Negociação", "25/11/2020", "Telefone", "Gustavo", "Mazinho não apareceu na reunião");
    Lead lead2(emp, "Jonas", "Fechado", "10/02/1992", "Carta", "Gian", "Projeto muito bom");
    this->leads.emplace_back(lead);
    this->leads.emplace_back(lead2);
    int row = 0;

    ui->setupUi(this);

    QPixmap logo("C:/Users/paulo/Documents/GIT_Clone/logo.png");
    ui->logo->setPixmap(logo.scaled(360,50,Qt::KeepAspectRatio));

//    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnWidth(0, 180);
    ui->tableWidget->setColumnWidth(6, 274);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    for (auto x : this->leads) {
        ui->tableWidget->insertRow(row);

        auto item0 = new QTableWidgetItem();
        item0->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row,0,item0);
        ui->tableWidget->item(row,0)->setData(Qt::DisplayRole, x.getEmpresa().getNome());

        auto item1 = new QTableWidgetItem();
        item1->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row,1,item1);
        ui->tableWidget->item(row,1)->setData(Qt::DisplayRole, x.getResponsavelDaEmpresa());

        auto item2 = new QTableWidgetItem();
        item2->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row,2,item2);
        ui->tableWidget->item(row,2)->setData(Qt::DisplayRole, x.getStatus());

        auto item3 = new QTableWidgetItem();
        item3->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row,3,item3);
        ui->tableWidget->item(row,3)->setData(Qt::DisplayRole, x.getUltimoContato());

        auto item4 = new QTableWidgetItem();
        item4->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row,4,item4);
        ui->tableWidget->item(row,4)->setData(Qt::DisplayRole, x.getTipoDoContato());

        auto item5 = new QTableWidgetItem();
        item5->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row,5,item5);
        ui->tableWidget->item(row,5)->setData(Qt::DisplayRole, x.getMembro());

        auto item6 = new QTableWidgetItem();
        item6->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row,6,item6);
        ui->tableWidget->item(row,6)->setData(Qt::DisplayRole, x.getNotas());

        row++;
    }

    ui->addButton->setStyleSheet("background-color:white");
    ui->deleteButton->setStyleSheet("background-color:white");

}

menu::~menu()
{
    delete ui;
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
