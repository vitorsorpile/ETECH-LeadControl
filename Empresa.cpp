#include "Empresa.h"

//Construtor
Empresa::Empresa(QString nome, QString email, QString telefone) {
  this->setNome(nome);
  this->setEmail(email);
  this->setTelefone(telefone);
}

//Métodos SET
void Empresa::setNome(QString nome) {
  this->nome = nome;
}

void Empresa::setEmail(QString email) {
  this->email = email;
}

void Empresa::setTelefone(QString telefone) {
  this->telefone = telefone;
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
