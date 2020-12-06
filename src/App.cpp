#include "App.h"

void App::carregar() {

    // Carrega empresas do banco de dados
    std::ifstream emp_file("data/empresas.txt");
    std::string line, buffer;
    if (emp_file.is_open()) {

        while(getline(emp_file, line)) {

            std::stringstream ss(line);

            Empresa emp{};
            getline(ss, buffer, ',');
            emp.setNome(buffer);

            getline(ss, buffer, ',');
            emp.setEmail(buffer.erase(0,1));

            getline(ss, buffer, ',');
            emp.setTelefone(buffer.erase(0,1));

            getline(ss, buffer, ',');
            emp.setAnotacoes(buffer.erase(0,1));

            this->addEmpresa(emp);


        }
        emp_file.close();
    }

    // Carrega leads do banco de dados
    std::ifstream lead_file("data/leads.txt");

    if (lead_file.is_open()){

        while(getline(lead_file, line)) {

            std::stringstream ss(line);

            Lead lead{};
            getline(ss, buffer, ',');

            auto emp = this->empresaByName(buffer);

            if (emp)
                lead.setEmpresa(*emp);
            else
                lead.setEmpresa(buffer);

            getline(ss, buffer, ',');
            lead.setResponsavelDaEmpresa(buffer.erase(0,1));

            getline(ss, buffer, ',');
            lead.setStatus(buffer.erase(0,1));

            getline(ss, buffer, ',');
            lead.setUltimoContato(buffer.erase(0,1));

            getline(ss, buffer, ',');
            lead.setTipoDoContato(buffer.erase(0,1));

            getline(ss, buffer, ',');
            lead.setMembro(buffer.erase(0,1));


            this->addLead(lead);
      }

        lead_file.close();
    }
}

void App::addLead(Lead lead) {
  this->leads.push_back(lead);
}

void App::deleteLead(Lead lead) {
  this->leads.remove(lead);
}

std::list<Lead> App::getLeads() const {
    return this->leads;
}

void App::addEmpresa(Empresa emp) {
    this->empresas.push_back(emp);
}

void App::deleteEmpresa(Empresa emp) {
    this->empresas.remove(emp);
}

std::list<Empresa> App::getEmpresas() const {
    return this->empresas;
}

Lead* App::leadByEmpresa(std::string emp) {
    for (auto &lead : this->leads) {
        if (emp == lead.getEmpresa().getNome())
            return &lead;
    }
    return nullptr;
}

Empresa* App::empresaByName(std::string emp) {
    for (auto &empresa : this->empresas) {
        if (emp == empresa.getNome())
            return &empresa;
    }

    return nullptr;
}


