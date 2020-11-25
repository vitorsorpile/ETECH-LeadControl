#include "create_lead.h"
#include "ui_create_lead.h"

create_lead::create_lead(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_lead)
{
    ui->setupUi(this);
}

create_lead::~create_lead()
{
    delete ui;
}
