#ifndef LEAD_H
#define LEAD_H

#include "Empresa.h"

class Lead {
  Empresa empresa; 
  std::string responsavelDaEmpresa;
  std::string status;
  std::string ultimoContato;
  std::string tipoDoContato;
  std::string membro;
//  std::string notas;

    public:
    // Construtores
    Lead() {}
    Lead(Empresa emp, std::string responsavel, std::string stts, std::string ultContato, std::string tipoContato, std::string memb);

    // Métodos SET
    void setEmpresa(Empresa emp);
    void setResponsavelDaEmpresa(std::string responsavel);
    void setStatus(std::string stts);
    void setUltimoContato(std::string ultContato);
    void setTipoDoContato(std::string tipoContato);
    void setMembro(std::string memb);
//    void setNotas(std::string notes);

    // Métodos GET
    Empresa getEmpresa();
    std::string getResponsavelDaEmpresa();
    std::string getStatus();
    std::string getUltimoContato();
    std::string getTipoDoContato();
    std::string getMembro();
//    std::string getNotas();

    //Sobrecarga de operadores
    bool operator==(const Lead& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, Lead& ld);
};


#endif
