#include "Lead.h"

Lead::Lead(Empresa emp, QString responsavel, QString stts, QString ultContato, QString tipoContato, QString memb) {
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

void Lead::setResponsavelDaEmpresa(QString responsavel){
  this->responsavelDaEmpresa = responsavel;
}

void Lead::setStatus(QString stts) {
  this->status = stts;
}

void Lead::setUltimoContato(QString ultContato){
  this->ultimoContato = ultContato;
}


void Lead::setTipoDoContato(QString tipoContato) {
  this->tipoDoContato = tipoContato;
}

void Lead::setMembro(QString memb){
  this->membro = memb;
}

//void Lead::setNotas(QString notes){
//  this->notas = notes;
//}

// Métodos GET
Empresa Lead::getEmpresa(){
  return this->empresa;
}
QString Lead::getResponsavelDaEmpresa(){
  return this->responsavelDaEmpresa;
}

QString Lead::getStatus() {
  return this->status;
}

QString Lead::getUltimoContato(){
  return this->ultimoContato;
}

QString Lead::getTipoDoContato() {
  return this->tipoDoContato;
}

QString Lead::getMembro(){
  return this->membro;
} 
//QString Lead::getNotas(){
//  return this->notas;
//}

// Sobrecarga de operadores
bool Lead::operator==(const Lead& rhs) const{
  return (this->empresa == rhs.empresa);
}

std::ostream& operator<<(std::ostream& os, Lead& ld) {
  os << ld.empresa.getNome().toStdString() << ", " << ld.responsavelDaEmpresa.toStdString() << ", ";
  os << ld.status.toStdString() << ", " << ld.ultimoContato.toStdString() << ", ";
  os << ld.tipoDoContato.toStdString() << ", " << ld.membro.toStdString() << ", ";
//  os << ld.notas.toStdString();
  return os;
}


