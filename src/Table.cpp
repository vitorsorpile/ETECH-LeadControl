#include "Table.h"

// Construtor da classe base
Table::Table(int rows, int columns, QWidget* parent)
    : QTableWidget(rows, columns, parent)
{
    this->setGeometry(30, 80, 1221, 611);
    this->setAlternatingRowColors(true);
    this->setSelectionBehavior(QAbstractItemView::SelectRows);
    this->nrows = 0;
    this->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
