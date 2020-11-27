#include "Lead.h"

Lead::Lead(Empresa empresa, QString responsavelDaEmpresa, QString status, QString ultimoContato, QString tipoDoContato, QString membro, QString notas) {
  this->setEmpresa(empresa);
  this->setResponsavelDaEmpresa(responsavelDaEmpresa);
  this->setStatus(status);
  this->setUltimoContato(ultimoContato);
  this->setTipoDoContato(tipoDoContato);
  this->setMembro(membro);
  this->setNotas(notas);
}

// Métodos SET
void Lead::setEmpresa(Empresa empresa){
  this->empresa = empresa;
}

void Lead::setResponsavelDaEmpresa(QString responsavelDaEmpresa){
  this->responsavelDaEmpresa = responsavelDaEmpresa;
}

void Lead::setStatus(QString status) {
  this->status = status;
}

void Lead::setUltimoContato(QString ultimoContato){
  this->ultimoContato = ultimoContato;
}


void Lead::setTipoDoContato(QString tipoDoContato) {
  this->tipoDoContato = tipoDoContato;
}

void Lead::setMembro(QString membro){
  this->membro = membro;
}

void Lead::setNotas(QString notas){
  this->notas = notas;
}

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
QString Lead::getNotas(){
  return this->notas;
}

// Sobrecarga de operadores
bool Lead::operator==(const Lead& rhs) const{
  return (this->empresa == rhs.empresa);
}

std::ostream& operator<<(std::ostream& os, Lead& ld) {
  os << ld.empresa.getNome().toStdString() << ", " << ld.responsavelDaEmpresa.toStdString() << ", ";
  os << ld.status.toStdString() << ", " << ld.ultimoContato.toStdString() << ", ";
  os << ld.tipoDoContato.toStdString() << ", " << ld.membro.toStdString() << ", ";
  os << ld.notas.toStdString();
  return os;
}


