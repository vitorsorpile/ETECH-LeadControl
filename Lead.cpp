#include "Lead.h"

// Construtor
// Lead::Lead(Empresa empresa, std::string responsavelDaEmpresa, Status status, std::string ultimoContato, TiposDeContato tipoDoContato, std::string membro, std::string notas) {
//   this->setEmpresa(empresa);
//   this->setResponsavelDaEmpresa(responsavelDaEmpresa);
//   this->setStatus(status);
//   this->setUltimoContato(ultimoContato);
//   this->setTipoDoContato(tipoDoContato);
//   this->setMembro(membro);
//   this->setNotas(notas);
// }
Lead::Lead(Empresa empresa, std::string responsavelDaEmpresa, std::string status, std::string ultimoContato, std::string tipoDoContato, std::string membro, std::string notas) {
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

void Lead::setResponsavelDaEmpresa(std::string responsavelDaEmpresa){
  this->responsavelDaEmpresa = responsavelDaEmpresa;
}

// void Lead::setStatus(Status status){
//   this->status = status;
// }

void Lead::setStatus(std::string status) {
  this->status = status;
}

void Lead::setUltimoContato(std::string ultimoContato){
  this->ultimoContato = ultimoContato;
}

// void Lead::setTipoDoContato(TiposDeContato tipoDoContato){
//   this->tipoDoContato = tipoDoContato;
// }

void Lead::setTipoDoContato(std::string tipoDoContato) {
  this->tipoDoContato = tipoDoContato;
}

void Lead::setMembro(std::string membro){
  this->membro = membro;
}

void Lead::setNotas(std::string notas){
  this->notas = notas;
}

// Métodos GET
Empresa Lead::getEmpresa(){
  return this->empresa;
}
std::string Lead::getResponsavelDaEmpresa(){
  return this->responsavelDaEmpresa;
}
// Status Lead::getStatus(){
//   return this->status;
// }

std::string Lead::getStatus() {
  return this->status;
}

std::string Lead::getUltimoContato(){
  return this->ultimoContato;
}
// TiposDeContato Lead::getTipoDoContato(){
//   return this->tipoDoContato;
// }
std::string Lead::getTipoDoContato() {
  return this->tipoDoContato;
}

std::string Lead::getMembro(){
  return this->membro;
} 
std::string Lead::getNotas(){
  return this->notas;
}

// Sobrecarga de operadores
bool Lead::operator==(const Lead& rhs) const{
  return ((this->empresa == rhs.empresa) && (this->ultimoContato == rhs.ultimoContato));
}

std::ostream& operator<<(std::ostream& os, Lead& lead) {
  os << lead.empresa.getNome() << ", " << lead.responsavelDaEmpresa << ", ";
  os << lead.status << ", " << lead.ultimoContato << ", ";
  os << lead.tipoDoContato << ", " << lead.membro << ", ";
  os << lead.notas;
  return os;
}

// Imprimir enums como strings
// std::string enum_to_string(Status type) {
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

// std::string enum_to_string(TiposDeContato type) {
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
// T string_to_enum(std::string str) {
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