#include "Empresa.h"

//Construtor
Empresa::Empresa(QString n, QString e, QString tel, QString anot) {
  this->setNome(n);
  this->setEmail(e);
  this->setTelefone(tel);
  this->setAnotacoes(anot);
}

//Métodos SET
void Empresa::setNome(QString n) {
  this->nome = n;
}

void Empresa::setEmail(QString e) {
  this->email = e;
}

void Empresa::setTelefone(QString tel) {
  this->telefone = tel;
}

void Empresa::setAnotacoes(QString anot) {
  this->anotacoes = anot;
}

//Métodos GET
QString Empresa::getNome() {
  return this->nome;
}
QString Empresa::getEmail() {
  return this->email;
}

QString Empresa::getTelefone() {
  return this->telefone;
}

QString Empresa::getAnotacoes() {
  return this->anotacoes;
}

//Sobrecarga de operadores
bool Empresa::operator==(const Empresa& rhs) const {
  return this->nome == rhs.nome;
}

std::ostream& operator<<(std::ostream& os, const Empresa& emp) {
  os << emp.nome.toStdString() << ", " << emp.email.toStdString() << ", ";
  os << emp.telefone.toStdString() << ", " << emp.anotacoes.toStdString() ;
  return os;
}
