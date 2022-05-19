#include "Equipment.h"
#include <cstring>


Equipment::Equipment() {
  eq_id = 0;
  strcpy(eq_title, "");
  strcpy(eq_desc, "");
}
Equipment::Equipment(int id, const char title[], const char desc[]) {
  eq_id = id;
  strcpy(eq_title, title);
  strcpy(eq_desc, desc);
}
void Equipment::show_eq(){}
double Equipment::calc_eq_rent(){}
Equipment::~Equipment(){}