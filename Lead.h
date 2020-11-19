#ifndef LEAD_H
#define LEAD_H

#include "Empresa.h"

// enum class Status { Prospectar,
//                     Diagnostico,
//                     Proposta, 
//                     Negociacao, 
//                     Fechado, 
//                     Perdido
//                   };

// enum class TiposDeContato { Email,
//                             Telefone,
//                             Whatsapp,
//                             Outros
//                           };

class Lead {  
  Empresa empresa; 
  std::string responsavelDaEmpresa;
  // Status status; 
  std::string status;
  std::string ultimoContato; // mudar para data depois
  // TiposDeContato tipoDoContato; 
  std::string tipoDoContato;
  std::string membro; //classe Membro
  std::string notas;

  public:
    // Construtor
    // Lead(Empresa empresa = Empresa{}, std::string responsavelDaEmpresa = "", Status status = Status::Prospectar , std::string ultimoContato = "", TiposDeContato tipoDoContato = TiposDeContato::Outros, std::string membro = "", std::string notas = "");
    Lead(Empresa empresa = Empresa{}, std::string responsavelDaEmpresa = "", std::string status = "", std::string ultimoContato = "", std::string tipoDoContato = "", std::string membro = "", std::string notas = "");

    // Métodos SET
    void setEmpresa(Empresa empresa);
    void setResponsavelDaEmpresa(std::string responsavelDaEmpresa);
    // void setStatus(Status status);
    void setStatus(std::string status);
    void setUltimoContato(std::string ultimoContato);
    // void setTipoDoContato(TiposDeContato tipoDoContato);
    void setTipoDoContato(std::string tipoDoContato);
    void setMembro(std::string membro);
    void setNotas(std::string notas);

    // Métodos GET
    Empresa getEmpresa();
    std::string getResponsavelDaEmpresa();
    // Status getStatus();
    std::string getStatus();
    std::string getUltimoContato();
    // TiposDeContato getTipoDoContato();
    std::string getTipoDoContato();
    std::string getMembro();
    std::string getNotas();

    //Sobrecarga de operadores
    bool operator==(const Lead& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, Lead& lead);
};

// Imprimir enums como strings
// std::string enum_to_string(Status type);
// std::string enum_to_string(TiposDeContato type);

// Transformar strings nos respectivos enums
// template <class T> T string_to_enum(std::string str);

#endif