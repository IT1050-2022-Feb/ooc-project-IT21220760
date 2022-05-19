#include "SafetyEngineer.h"

SafetyEngineer::SafetyEngineer() {
  sf_eng_id = 0;
}
SafetyEngineer::SafetyEngineer(int id) {
  sf_eng_id = id;
}
void SafetyEngineer::add_warnings(Warnings* warn, int id){}
void SafetyEngineer::add_improvements(SafetyImprovements* impr, int id){}
void SafetyEngineer::generate_sf_reports(SafetyReports* report, int id){}
SafetyEngineer::~SafetyEngineer(){}