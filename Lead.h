#ifndef LEAD_H
#define LEAD_H

#include <QListWidgetItem>

#include "Empresa.h"

enum class Status { Prospectar,
                    Diagnostico,
                    Proposta, 
                    Negociacao, 
                    Fechado, 
                    Perdido
                  };

enum class TiposDeContato { Email,
                            Telefone,
                            Whatsapp,
                            Outros
                          };

class Lead : public QListWidgetItem {
  Empresa empresa; 
  QString responsavelDaEmpresa;
  QString status;
  QString ultimoContato; // mudar para data depois
  QString tipoDoContato;
  QString membro;
  QString notas;

    public:
    // Construtor
    Lead() {}
    // Lead(Empresa empresa = Empresa{}, QString responsavelDaEmpresa = "", Status status = Status::Prospectar , QString ultimoContato = "", TiposDeContato tipoDoContato = TiposDeContato::Outros, QString membro = "", QString notas = "");
    Lead(Empresa empresa, QString responsavelDaEmpresa, QString status, QString ultimoContato, QString tipoDoContato, QString membro, QString notas);

    // Métodos SET
    void setEmpresa(Empresa empresa);
    void setResponsavelDaEmpresa(QString responsavelDaEmpresa);
    // void setStatus(Status status);
    void setStatus(QString status);
    void setUltimoContato(QString ultimoContato);
    // void setTipoDoContato(TiposDeContato tipoDoContato);
    void setTipoDoContato(QString tipoDoContato);
    void setMembro(QString membro);
    void setNotas(QString notas);

    // Métodos GET
    Empresa getEmpresa();
    QString getResponsavelDaEmpresa();
    // Status getStatus();
    QString getStatus();
    QString getUltimoContato();
    // TiposDeContato getTipoDoContato();
    QString getTipoDoContato();
    QString getMembro();
    QString getNotas();

    //Sobrecarga de operadores
    bool operator==(const Lead& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, Lead& ld);
};

// Imprimir enums como strings
// QString enum_to_string(Status type);
// QString enum_to_string(TiposDeContato type);

// Transformar strings nos respectivos enums
// template <class T> T string_to_enum(QString str);

#endif
