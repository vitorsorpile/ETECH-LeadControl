#ifndef CREATE_LEAD_H
#define CREATE_LEAD_H

#include <QDialog>

namespace Ui {
class create_lead;
}

class create_lead : public QDialog
{
    Q_OBJECT

public:
    explicit create_lead(QWidget *parent = nullptr);
    ~create_lead();

private:
    Ui::create_lead *ui;
};

#endif // CREATE_LEAD_H
