#ifndef APP_H
#define APP_H

#include "Lead.h"
#include <list>
#include <sstream>
#include <fstream>

class App {
  std::list<Lead> leads; 

  public:
    void addLead(Lead lead);
    void deleteLead(Lead lead);
    std::list<Lead> getLeads();
    //void updateLead(Lead lead) se nao for fazer UI
    void salvar(); 
    void carregar();
  
};

#endif