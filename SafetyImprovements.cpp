#include "SafetyImprovements.h"
#include <cstring>

SafetyImprovements::SafetyImprovements() {
  strcpy(report_desc, "");
  is_completed = false;
}

SafetyImprovements::SafetyImprovements(const char desc[], bool completed) {
  strcpy(report_desc, desc);
  is_completed = completed;
}
bool SafetyImprovements::check_availability(){}
void SafetyImprovements::display_reports(){}
SafetyImprovements::~SafetyImprovements(){
  
}