#include "Employee.h"
#include <cstring>

Employee:: Employee() {
  emp_id = 0;
  strcpy(emp_name, "");
  strcpy(emp_pw, "");
  strcpy(emp_email, "");
  strcpy(emp_nic, "");
} 
Employee:: Employee(int id, const char name[], const char pw[], const char email[], const char nic[]) {
  emp_id = id;
  strcpy(emp_name, name);
  strcpy(emp_pw, pw);
  strcpy(emp_email, email);
  strcpy(emp_nic, nic);
}
void Employee::login(){}
void Employee::logout(){}
void Employee::edit_profile(const char name[], const char pw[], const char email[], const char nic[]){}
void Employee::thirdParty_connect(){}
Employee:: ~Employee(){}