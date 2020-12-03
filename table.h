#ifndef TABLE_H
#define TABLE_H

#include <QTableWidget>
#include "Lead.h"

class table : public QTableWidget
{
protected:
    int nrows;
    virtual void setHeaders() = 0;
public:
    table(int rows, int columns, QWidget* parent);

    virtual void addRow() = 0 ;

};


class leadTable : public table {
private:
    virtual void setHeaders() override {}

public:
    leadTable(int rows, int columns, QWidget* parent);
//    ~leadTable();
    virtual void addRow() override;
    void setRow(Lead lead);
};


class empresaTable : public table {
private:
    virtual void setHeaders() override {}
public:
    empresaTable(int rows, int columns, QWidget* parent);
//    ~empresaTable();
    virtual void addRow() override;
    void setRow(Empresa emp);
};

#endif // TABLE_H
