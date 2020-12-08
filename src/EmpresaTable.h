#ifndef EMPRESA_TABLE_H
#define EMPRESA_TABLE_H

#include "Table.h"
#include "Empresa.h"

class EmpresaTable : public Table {

public:
    EmpresaTable(int rows, int columns, QWidget* parent);
    virtual void addRow() override;
    void setRow(Empresa emp);
};


#endif
