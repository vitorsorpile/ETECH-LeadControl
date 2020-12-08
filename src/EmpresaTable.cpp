#include "EmpresaTable.h"

// Construtor da tabela de empresas
EmpresaTable::EmpresaTable(int rows, int columns, QWidget* parent)
    : Table(rows, columns, parent)
{
    QStringList headers{};
    headers.append("Nome da Empresa");
    headers.append("E-mail");
    headers.append("Telefone");
    headers.append("Anotações");

    this->setHorizontalHeaderLabels(headers);
    for (int i = 0; i < this->columnCount(); i++)
        this->setColumnWidth(i, 301);

}

// Adiciona uma linha na tabela de empresas
void EmpresaTable::addRow() {
    this->insertRow(this->nrows);

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

    this->nrows++;
}
// Seta os dados da empresa na última linha
void EmpresaTable::setRow(Empresa emp) {
    this->item(nrows - 1, 0)->setData(Qt::DisplayRole, QString::fromStdString(emp.getNome()));
    this->item(nrows - 1, 1)->setData(Qt::DisplayRole, QString::fromStdString(emp.getEmail()));
    this->item(nrows - 1, 2)->setData(Qt::DisplayRole, QString::fromStdString(emp.getTelefone()));
    this->item(nrows - 1, 3)->setData(Qt::DisplayRole, QString::fromStdString(emp.getAnotacoes()));
}
