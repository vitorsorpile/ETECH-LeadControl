#include "create_lead.h"
#include "ui_create_lead.h"

#include <fstream>

create_lead::create_lead(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_lead)
{
    ui->setupUi(this);

    //Colocar logo da ETECH
    QPixmap logo("images/logo.png");
    ui->logo->setPixmap(logo.scaled(250,42,Qt::KeepAspectRatio));
   
    //Mudar a cor da caixa do botão
    ui->buttonBox->setStyleSheet("background-color:white");

    //Criar conexão entre a tela principal e a de adicionar lead
    QObject::connect(this, SIGNAL(lead_create_signal(Lead*)), this->parent(), SLOT(createLead(Lead*)));

}

create_lead::~create_lead()
{
    delete ui;
}

void create_lead::on_buttonBox_accepted()
{
    //Criar novo lead
    auto lead = new Lead();

    lead->setEmpresa(Empresa(ui->empresa->text().toStdString()));
    lead->setResponsavelDaEmpresa(ui->responsavel->text().toStdString());
    lead->setStatus(ui->statusComboBox->currentText().toStdString());
    lead->setUltimoContato(ui->ultimoContato->text().toStdString());
    lead->setTipoDoContato(ui->formaDeContato->text().toStdString());
    lead->setMembro(ui->membro->text().toStdString());
//    lead->setNotas("");

    emit this->lead_create_signal(lead);

}
