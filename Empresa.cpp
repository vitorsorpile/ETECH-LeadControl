#include "Empresa.h"

//Construtor
Empresa::Empresa(QString n, QString e, QString tel) {
  this->setNome(n);
  this->setEmail(e);
  this->setTelefone(tel);
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

//Sobrecarga de operadores
bool Empresa::operator==(const Empresa& rhs) const {
  return this->nome == rhs.nome;
}

std::ostream& operator<<(std::ostream& os, const Empresa& emp) {
  os << emp.nome.toStdString() << ", " << emp.email.toStdString() << ", " << emp.telefone.toStdString();
  return os;
}
