#include "App.h"

void App::addLead(Lead lead) {
  this->leads.push_back(lead);
}

void App::deleteLead(Lead lead) {
  this->leads.remove(lead);
}

std::list<Lead> App::getLeads() {
  return this->leads;
}

void App::salvar() {
  std::ofstream file("data/db.txt");
  if (file.is_open()) {
    for (auto lead : this->leads) {
      if (lead.getEmpresa().getNome() == "") continue;
      file << lead << std::endl;
    }
  }
  file.close();
}

void App::carregar() {
  std::ifstream file("data/db.txt");
  std::string buffer, line;
  
  if (file.is_open()) {
    while (getline(file, line)) {

      std::stringstream ss(line);

      while (getline(ss, buffer, ',')) {

        Lead lead{};
        lead.setEmpresa(buffer);

        getline(ss, buffer, ',');  
        lead.setResponsavelDaEmpresa(buffer.erase(0, 1));

        getline(ss, buffer, ',');  
        lead.setStatus(buffer.erase(0, 1));
        
        getline(ss, buffer, ',');  
        lead.setUltimoContato(buffer.erase(0, 1));
        
        getline(ss, buffer, ',');  
        lead.setTipoDoContato(buffer.erase(0, 1));

        getline(ss, buffer, ',');  
        lead.setMembro(buffer.erase(0, 1));

        getline(ss, buffer, ',');  
        lead.setNotas(buffer.erase(0, 1));

        this->addLead(lead);
      }
    }
  }
}
