#include "Lead.h"
#include "Empresa.h"

#include <list>
#include <sstream>
#include <fstream>

// Classe resposável por gerenciar os leads e empresas
//   e facilitar a integração com a interface gráfica
class App {
public:

    template<class T>
    void salvar(T elements, std::string filename) {
      std::ofstream file(filename);
      if (file.is_open()) {
        for (auto element : elements) {
            std::cout << element << std::endl;
            file << element << std::endl;
        }
      }
      file.close();
    }
    void carregar();

    void addLead(Lead lead);
    void deleteLead(Lead lead);
    std::list<Lead> getLeads() const ;

    void addEmpresa(Empresa emp);
    void deleteEmpresa(Empresa emp);
    std::list<Empresa> getEmpresas() const ;

    Lead* leadByEmpresa(std::string emp);
    Empresa* empresaByName(std::string emp);

private:
    std::list<Lead> leads;
    std::list<Empresa> empresas;
};
