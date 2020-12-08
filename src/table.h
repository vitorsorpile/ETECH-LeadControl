#ifndef TABLE_H
#define TABLE_H

#include <QTableWidget>
#include <QHeaderView>
#include "Lead.h"

// Classe abstrata que representa uma tabela
class table : public QTableWidget
{
protected:
    int nrows;
public:
    table(int rows, int columns, QWidget* parent);

    virtual void addRow() = 0 ;

};


class leadTable : public table {

public:
    leadTable(int rows, int columns, QWidget* parent);
    virtual void addRow() override;
    void setRow(Lead lead);
};


class empresaTable : public table {

public:
    empresaTable(int rows, int columns, QWidget* parent);
    virtual void addRow() override;
    void setRow(Empresa emp);
};

#endif // TABLE_H
