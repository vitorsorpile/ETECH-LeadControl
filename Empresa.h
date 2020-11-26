#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <QString>

class Empresa {
  QString nome;
  QString email;
  QString telefone;

  public:
    //Construtor
    Empresa(QString nome = "", QString email = "", QString telefone = "");

    //Métodos SET
    void setNome(QString nome);
    void setEmail(QString email);
    void setTelefone(QString telefone);
    //Métodos GET
    QString getNome();
    QString getEmail();
    QString getTelefone();

    //Sobrecarga de operadores
    bool operator==(const Empresa& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, const Empresa& emp);
};

#endif
