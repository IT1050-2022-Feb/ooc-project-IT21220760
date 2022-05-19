#include "Opportunities.h"
#include <cstring>

Opportunities::Opportunities() {
  strcpy(opportunities_desc, "");
  is_available = false;
}
bool Opportunities::check_availability(){}
void Opportunities::display_opportunities(){}
Opportunities::~Opportunities() {}