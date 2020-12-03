#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <QString>


class Empresa {
  friend class Lead;

  QString nome;
  QString email;
  QString telefone;
  QString anotacoes;

  public:
    //Construtor
    Empresa(QString n = "", QString e = "", QString tel= "", QString anot = "");

    //Métodos SET
    void setNome(QString n);
    void setEmail(QString e);
    void setTelefone(QString tel);
    void setAnotacoes(QString anot);
    //Métodos GET
    QString getNome();
    QString getEmail();
    QString getTelefone();
    QString getAnotacoes();

    //Sobrecarga de operadores
    bool operator==(const Empresa& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, const Empresa& emp);
};

#endif
