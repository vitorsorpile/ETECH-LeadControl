#include "create_lead.h"
#include "ui_create_lead.h"


create_lead::create_lead(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_lead)
{
    ui->setupUi(this);
    QPixmap logo("C:/Users/paulo/Documents/GIT_Clone/logo.png");
    ui->logo->setPixmap(logo.scaled(250,42,Qt::KeepAspectRatio));
    ui->buttonBox->setStyleSheet("background-color:white");
    ui->statusComboBox->setStyleSheet("background-color:white");
}

create_lead::~create_lead()
{
    delete ui;
}

void create_lead::on_buttonBox_accepted()
{
    auto lead = new Lead();
    lead->setEmpresa(Empresa(ui->empresa->text()));
    lead->setResponsavelDaEmpresa(ui->responsavel->text());
    lead->setStatus(ui->statusComboBox->currentText());
    lead->setUltimoContato(ui->ultimoContato->text());
    lead->setTipoDoContato(ui->formaDeContato->text());
    lead->setMembro(ui->membro->text());
    lead->setNotas("");


}
