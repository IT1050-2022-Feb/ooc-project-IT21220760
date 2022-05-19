#include "Integrations.h"

class Employee {
  protected:
    int emp_id;
    char emp_name[20];
    char emp_pw[8];
    char emp_email[20];
    char emp_nic[11];
    Integrations* intgr;
  
  public:
    Employee();
    Employee(int id, const char name[], const char pw[], const char email[], const char nic[]);
    void login();
    void logout();
    void edit_profile(const char name[], const char pw[], const char email[], const char nic[]);
    void thirdParty_connect();
    ~Employee();
};