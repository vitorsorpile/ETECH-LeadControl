#ifndef LEAD_H
#define LEAD_H

#include "Empresa.h"

class Lead {
  Empresa empresa; 
  QString responsavelDaEmpresa;
  QString status;
  QString ultimoContato;
  QString tipoDoContato;
  QString membro;
  QString notas;

    public:
    // Construtores
    Lead() {}
    Lead(Empresa emp, QString responsavel, QString stts, QString ultContato, QString tipoContato, QString memb, QString notes);

    // Métodos SET
    void setEmpresa(Empresa emp);
    void setResponsavelDaEmpresa(QString responsavel);
    void setStatus(QString stts);
    void setUltimoContato(QString ultContato);
    void setTipoDoContato(QString tipoContato);
    void setMembro(QString memb);
    void setNotas(QString notes);

    // Métodos GET
    Empresa getEmpresa();
    QString getResponsavelDaEmpresa();
    QString getStatus();
    QString getUltimoContato();
    QString getTipoDoContato();
    QString getMembro();
    QString getNotas();

    //Sobrecarga de operadores
    bool operator==(const Lead& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, Lead& ld);
};


#endif
