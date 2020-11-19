#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>

class Empresa {
  std::string nome;
  std::string email;
  std::string telefone;

  public:
    //Construtor
    Empresa(std::string nome = "", std::string email = "", std::string telefone = "");

    //Métodos SET
    void setNome(std::string nome);
    void setEmail(std::string email);
    void setTelefone(std::string telefone);
    //Métodos GET
    std::string getNome();
    std::string getEmail();
    std::string getTelefone();

    //Sobrecarga de operadores
    bool operator==(const Empresa& rhs) const;
    friend std::ostream& operator<<(std::ostream& os, const Empresa& emp);
};

#endif