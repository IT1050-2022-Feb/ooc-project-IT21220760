#include "Customer.h"

Customer::Customer() {
  customer_id = 0;
}
Customer::Customer(int id) {
  customer_id = id;
}
void Customer::request_projectplanes(ProjectPlans* prpl, int id){}
Customer::~Customer() {}