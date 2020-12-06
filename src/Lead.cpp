#include "Lead.h"

Lead::Lead(Empresa emp, std::string responsavel, std::string stts, std::string ultContato, std::string tipoContato, std::string memb) {
  this->setEmpresa(emp);
  this->setResponsavelDaEmpresa(responsavel);
  this->setStatus(stts);
  this->setUltimoContato(ultContato);
  this->setTipoDoContato(tipoContato);
  this->setMembro(memb);
//  this->setNotas(notes);
}

// Métodos SET
void Lead::setEmpresa(Empresa emp){
  this->empresa = emp;
}

void Lead::setResponsavelDaEmpresa(std::string responsavel){
  this->responsavelDaEmpresa = responsavel;
}

void Lead::setStatus(std::string stts) {
  this->status = stts;
}

void Lead::setUltimoContato(std::string ultContato){
  this->ultimoContato = ultContato;
}


void Lead::setTipoDoContato(std::string tipoContato) {
  this->tipoDoContato = tipoContato;
}

void Lead::setMembro(std::string memb){
  this->membro = memb;
}

//void Lead::setNotas(std::string notes){
//  this->notas = notes;
//}

// Métodos GET
Empresa Lead::getEmpresa(){
  return this->empresa;
}
std::string Lead::getResponsavelDaEmpresa(){
  return this->responsavelDaEmpresa;
}

std::string Lead::getStatus() {
  return this->status;
}

std::string Lead::getUltimoContato(){
  return this->ultimoContato;
}

std::string Lead::getTipoDoContato() {
  return this->tipoDoContato;
}

std::string Lead::getMembro(){
  return this->membro;
} 
//std::string Lead::getNotas(){
//  return this->notas;
//}

// Sobrecarga de operadores
bool Lead::operator==(const Lead& rhs) const{
  return (this->empresa == rhs.empresa);
}

std::ostream& operator<<(std::ostream& os, Lead& ld) {
  os << ld.empresa.getNome() << ", " << ld.responsavelDaEmpresa << ", ";
  os << ld.status << ", " << ld.ultimoContato << ", ";
  os << ld.tipoDoContato << ", " << ld.membro << ", ";
//  os << ld.notas;
  return os;
}


