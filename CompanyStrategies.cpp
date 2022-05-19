#include "CompanyStrategies.h"
#include <cstring>


CompanyStrategies::CompanyStrategies() {
  strcpy(strategist, "");
  strcpy(strategy_desc, "");
  strcpy(effective_until, "");
  up_votes = 0;
  down_votes = 0;
}

CompanyStrategies::CompanyStrategies(const char strategist[], const char desc[], int up, int down, const char until[]) {
  strcpy(strategy_desc, desc);
  strcpy(effective_until, until);
  up_votes = up;
  down_votes = down;
}
int CompanyStrategies::calc_total_votes(){}
CompanyStrategies::~CompanyStrategies(){}