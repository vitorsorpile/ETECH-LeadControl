#include "Lead.h"

// Construtor
// Lead::Lead(Empresa empresa, QString responsavelDaEmpresa, Status status, QString ultimoContato, TiposDeContato tipoDoContato, QString membro, QString notas) {
//   this->setEmpresa(empresa);
//   this->setResponsavelDaEmpresa(responsavelDaEmpresa);
//   this->setStatus(status);
//   this->setUltimoContato(ultimoContato);
//   this->setTipoDoContato(tipoDoContato);
//   this->setMembro(membro);
//   this->setNotas(notas);
// }
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

// void Lead::setStatus(Status status){
//   this->status = status;
// }

void Lead::setStatus(QString status) {
  this->status = status;
}

void Lead::setUltimoContato(QString ultimoContato){
  this->ultimoContato = ultimoContato;
}

// void Lead::setTipoDoContato(TiposDeContato tipoDoContato){
//   this->tipoDoContato = tipoDoContato;
// }

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
// Status Lead::getStatus(){
//   return this->status;
// }

QString Lead::getStatus() {
  return this->status;
}

QString Lead::getUltimoContato(){
  return this->ultimoContato;
}
// TiposDeContato Lead::getTipoDoContato(){
//   return this->tipoDoContato;
// }
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
  return ((this->empresa == rhs.empresa) && (this->ultimoContato == rhs.ultimoContato));
}

//std::ostream& operator<<(std::ostream& os, Lead& lead) {
//  os << lead.empresa.getNome() << ", " << lead.responsavelDaEmpresa << ", ";
//  os << lead.status << ", " << lead.ultimoContato << ", ";
//  os << lead.tipoDoContato << ", " << lead.membro << ", ";
//  os << lead.notas;
//  return os;
//}

// Imprimir enums como strings
// QString enum_to_string(Status type) {
//   switch (type)
//   {
//    // Enum Status
//   case Status::Prospectar:
//     return "A prospectar";
//   case Status::Diagnostico:
//     return "Em diagnostico";
//   case Status::Proposta:
//     return "Proposta";
//   case Status::Negociacao:
//     return "Em negociação";
//   case Status::Fechado:
//     return "Fechado";
//   case Status::Perdido:
//     return "Perdido";

//   default:
//     return "Missing Implementation";
//   }
// }

// QString enum_to_string(TiposDeContato type) {
//   switch (type)
//   {
//   case TiposDeContato::Email:
//     return "Email";
//   case TiposDeContato::Telefone:
//     return "Telefone";
//   case TiposDeContato::Whatsapp:
//     return "Whatsapp";
//   case TiposDeContato::Outros:
//     return "Outros"; 

//   default:
//     return "Missing Implementation";
//     break;
//   }
// }

// Transformar strings nos respectivos enums
// template <class T>
// T string_to_enum(QString str) {
//   switch (str)
//   {
//   // Status enum
//   case "A prospectar":
//     return Status::Prospectar;
//   case "Em diagnostico":
//     return Status::Diagnostico;
//   case "Proposta":
//     return Status::Proposta;
//   case "Em negociação":  
//     return Status::Negociacao;
//   case "Fechado":
//     return Status::Fechado;
//   case "Perdido":
//     return Status::Perdido;

//   // TiposDeContato enum
//   case "Email":
//     return TiposDeContato::Email;
//   case "Telefone":
//     return TiposDeContato::Telefone;
//   case "Whatsapp":
//     return TiposDeContato::Whatsapp;
//   case "Outros":
//     return TiposDeContato::Outros;

//   default:
//     break;
//   }

// }
