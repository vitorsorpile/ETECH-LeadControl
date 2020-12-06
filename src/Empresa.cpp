#include "Empresa.h"

//Construtor
Empresa::Empresa(std::string n, std::string e, std::string tel, std::string anot) {
  this->setNome(n);
  this->setEmail(e);
  this->setTelefone(tel);
  this->setAnotacoes(anot);
}

//Métodos SET
void Empresa::setNome(std::string n) {
  this->nome = n;
}

void Empresa::setEmail(std::string e) {
  this->email = e;
}

void Empresa::setTelefone(std::string tel) {
  this->telefone = tel;
}

void Empresa::setAnotacoes(std::string anot) {
  this->anotacoes = anot;
}

//Métodos GET
std::string Empresa::getNome() {
  return this->nome;
}
std::string Empresa::getEmail() {
  return this->email;
}

std::string Empresa::getTelefone() {
  return this->telefone;
}

std::string Empresa::getAnotacoes() {
  return this->anotacoes;
}

//Sobrecarga de operadores
bool Empresa::operator==(const Empresa& rhs) const {
  return this->nome == rhs.nome;
}

std::ostream& operator<<(std::ostream& os, const Empresa& emp) {
  os << emp.nome << ", " << emp.email << ", ";
  os << emp.telefone << ", " << emp.anotacoes ;
  return os;
}
