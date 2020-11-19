#include "App.h"

using namespace std;

int main() {
  App app;
  Empresa acougue("Açougue", "acougue@gmail.com", "1111-1111");
  Lead lead(acougue, "Robson", "Fechado", "19/11/2020", "Outros", "Vitor", "Dale");
  app.carregar();
  app.addLead(lead);

  for (auto lead : app.getLeads()) {
    cout << lead << endl;
  }
  
  app.salvar();
  return 0;
}