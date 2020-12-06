#include "create_empresa.h"
#include "ui_create_empresa.h"

create_empresa::create_empresa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_empresa)
{
    ui->setupUi(this);

    //Colocar logo da ETECH
    QPixmap logo("images/logo.png");
    ui->logo->setPixmap(logo.scaled(250,42,Qt::KeepAspectRatio));

    //Mudar a cor da caixa de seleção
    ui->buttonBox->setStyleSheet("background-color:white");


    //Criar conexão entre a tela principal e a de adicionar empresa
    QObject::connect(this, SIGNAL(empresa_create_signal(Empresa*)), this->parent(), SLOT(createEmpresa(Empresa*)));


}

create_empresa::~create_empresa()
{
    delete ui;
}

void create_empresa::on_buttonBox_accepted()
{
    auto emp = new Empresa();

    emp->setNome(ui->nome->text().toStdString());
    emp->setEmail(ui->email->text().toStdString());
    emp->setTelefone(ui->telefone->text().toStdString());
    emp->setAnotacoes(ui->anotacoes->text().toStdString());

    emit this->empresa_create_signal(emp);

}
