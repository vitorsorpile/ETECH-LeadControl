#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
//#include <QString>


class Empresa {

  std::string nome;
  std::string email;
  std::string telefone;
  std::string anotacoes;

  public:
    //Construtor
    Empresa(std::string n = "", std::string e = "", std::string tel= "", std::string anot = "");

    //Métodos SET
    void setNome(std::string n);
    void setEmail(std::string e);
    void setTelefone(std::string tel);
    void setAnotacoes(std::string anot);
    //Métodos GET
    std::string getNome();
    std::string getEmail();
    std::string getTelefone();
    std::string getAnotacoes();

    //Sobrecarga de operadores
    bool operator==(const Empresa& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, const Empresa& emp);
};

#endif
