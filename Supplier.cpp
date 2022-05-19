#include "Supplier.h"

Supplier::Supplier() {
  supplier_id = 0;
  supplier_rating = 0;
}
Supplier::Supplier(int id) {
  supplier_id = id;
}
void Supplier::request_strategies(CompanyStrategies* strt){}
Supplier::~Supplier() {}