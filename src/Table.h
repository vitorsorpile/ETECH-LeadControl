#ifndef TABLE_H
#define TABLE_H

#include <QTableWidget>
#include <QHeaderView>
#include "Lead.h"

// Classe abstrata que representa uma tabela na interface
class Table : public QTableWidget
{
protected:
    int nrows;
public:
    Table(int rows, int columns, QWidget* parent);

    virtual void addRow() = 0 ;

};

#endif // TABLE_H
