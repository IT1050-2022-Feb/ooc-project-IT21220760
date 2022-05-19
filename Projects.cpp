#include "Projects.h"
#include <cstring>

Projects::Projects() {
  project_id = 0;
  strcpy(project_status, "Pending");
  completion_rate = 0;
  strcpy(project_desc, "lorem ipsum");
}
Projects::Projects(int id, const char status[], int rate, const char desc[]) {
  project_id = id;
  strcpy(project_status, status);
  completion_rate = rate;
  strcpy(project_desc, desc);
}
void Projects::display_employees(Employee* emp){}
void Projects::display_customer(Customer* cus){}
void Projects::display_status(){}
Projects::~Projects(){}