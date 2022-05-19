#include <cstring>
#include "Administrator.h"

Administrator::Administrator() {
  user_id = 0;
  strcpy(name, "");
  strcpy(user_pw, "");
  strcpy(user_email, "");
  strcpy(user_nic, "");
  strcpy(user_dob, "");
}
void Administrator::login(){}
void Administrator::logout(){}
void Administrator::remove_account(RegisteredUser* acc){}
void Administrator::edit_account(RegisteredUser* acc){}
void Administrator::add_equipment(Equipment* eq){}
void Administrator::add_vehicle(Vehicle* veh){}
void Administrator::add_project(Projects* prj){}
void Administrator::edit_project(Projects* prj){}
double calc_rental_fees(RentalFees* fees){}
void Administrator::generate_security_reports(SecurityReports* report){}
Administrator::~Administrator(){}