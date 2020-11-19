#include "Empresa.h"

//Construtor
Empresa::Empresa(std::string nome, std::string email, std::string telefone) {
  this->setNome(nome);
  this->setEmail(email);
  this->setTelefone(telefone);
}

//Métodos SET
void Empresa::setNome(std::string nome) {
  this->nome = nome;
}

void Empresa::setEmail(std::string email) {
  this->email = email;
}

void Empresa::setTelefone(std::string telefone) {
  this->telefone = telefone;
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

//Sobrecarga de operadores
bool Empresa::operator==(const Empresa& rhs) const {
  return this->nome == rhs.nome;
}

std::ostream& operator<<(std::ostream& os, const Empresa& emp) {
  os << emp.nome << ", " << emp.email << ", " << emp.telefone; 
  return os;
}