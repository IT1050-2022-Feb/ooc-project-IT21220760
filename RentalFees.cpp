#include "RentalFees.h"
#include <cstring>


RentalFees::RentalFees() {
  rent_id = 0;
  rent_amount = 0.00;
  strcpy(rent_exp, "");
}

RentalFees::RentalFees(int id, double amount, const char exp[]) {
  rent_id = id;
  rent_amount = amount;
  strcpy(rent_exp, exp);
}
void RentalFees::show_rent(){}
RentalFees::~RentalFees(){}