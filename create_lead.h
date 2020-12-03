#ifndef CREATE_LEAD_H
#define CREATE_LEAD_H

#include "Lead.h"
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

private slots:
    void on_buttonBox_accepted();
signals:
    void lead_create_signal(Lead* l);


private:
    Ui::create_lead *ui;
};

#endif // CREATE_LEAD_H
