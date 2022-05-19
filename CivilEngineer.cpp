#include "CivilEngineer.h"


CivilEngineer::CivilEngineer() {
  civil_eng_id = 0;
}
CivilEngineer::CivilEngineer(int id) {
  civil_eng_id = id;
}
void CivilEngineer::add_plans(ProjectPlans* plan, int id){}
void CivilEngineer::add_guidelines(Guidelines* guide, int id){}
CivilEngineer::~CivilEngineer(){}