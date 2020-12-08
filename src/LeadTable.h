#ifndef LEAD_TABLE_H
#define LEAD_TABLE_H

#include "Table.h"
#include "Lead.h"

// Classe que representa uma tabela de leads na interface
class LeadTable : public Table {

public:
    LeadTable(int rows, int columns, QWidget* parent);
    virtual void addRow() override;
    void setRow(Lead lead);
};

#endif
