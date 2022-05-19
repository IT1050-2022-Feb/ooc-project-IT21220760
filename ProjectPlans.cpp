#include "ProjectPlans.h"
#include <cstring>

ProjectPlans::ProjectPlans() {
  plan_id = 0;
  strcpy(plan_date, "");
  strcpy(plan_title, "");
  strcpy(plan_desc, "");
}
ProjectPlans::ProjectPlans(int id, const char date[], const char title[], const char desc[]) {
  plan_id = id;
  strcpy(plan_date, date);
  strcpy(plan_title, title);
  strcpy(plan_desc, desc);
}
void ProjectPlans::display_plans(){}
ProjectPlans::~ProjectPlans(){}