#include "LeadTable.h"

// Construtor da tabela de leads
LeadTable::LeadTable(int rows, int columns, QWidget* parent)
    : Table(rows, columns, parent)
{
    QStringList headers{};
    headers.append("Nome da Empresa");
    headers.append("Responsável");
    headers.append("Status");
    headers.append("Último Contato");
    headers.append("Tipo do Contato");
    headers.append("Membro");
//    headers.append("Anotações");

    this->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < 6; i++)
        this->setColumnWidth(i, 201);

//    this->setColumnWidth(6, 275);
}

// Adiciona uma linha na tabela de leads
void LeadTable::addRow() {
    this->insertRow(nrows);

    auto item0 = new QTableWidgetItem();
    item0->setTextAlignment(Qt::AlignCenter);
    this->setItem(nrows,0,item0);

    auto item1 = new QTableWidgetItem();
    item1->setTextAlignment(Qt::AlignCenter);
    this->setItem(nrows,1,item1);

    auto item2 = new QTableWidgetItem();
    item2->setTextAlignment(Qt::AlignCenter);
    this->setItem(nrows,2,item2);

    auto item3 = new QTableWidgetItem();
    item3->setTextAlignment(Qt::AlignCenter);
    this->setItem(nrows,3,item3);

    auto item4 = new QTableWidgetItem();
    item4->setTextAlignment(Qt::AlignCenter);
    this->setItem(nrows,4,item4);

    auto item5 = new QTableWidgetItem();
    item5->setTextAlignment(Qt::AlignCenter);
    this->setItem(nrows,5,item5);

//    auto item6 = new QTableWidgetItem();
//    item6->setTextAlignment(Qt::AlignCenter);
//    this->setItem(nrows,6,item6);

    nrows++;
}

// Seta os dados do lead na última linha
void LeadTable::setRow(Lead lead) {
    this->item(nrows - 1, 0)->setData(Qt::DisplayRole, QString::fromStdString(lead.getEmpresa().getNome()));
    this->item(nrows - 1, 1)->setData(Qt::DisplayRole, QString::fromStdString(lead.getResponsavelDaEmpresa()));
    this->item(nrows - 1, 2)->setData(Qt::DisplayRole, QString::fromStdString(lead.getStatus()));
    this->item(nrows - 1, 3)->setData(Qt::DisplayRole, QString::fromStdString(lead.getUltimoContato()));
    this->item(nrows - 1, 4)->setData(Qt::DisplayRole, QString::fromStdString(lead.getTipoDoContato()));
    this->item(nrows - 1, 5)->setData(Qt::DisplayRole, QString::fromStdString(lead.getMembro()));
//    this->item(nrows - 1, 6)->setData(Qt::DisplayRole, lead.getNotas());
}
