#include "Warnings.h"
#include <cstring>


Warnings::Warnings() {
  warning_id = 0;
  strcpy(warning_date, "");
  strcpy(warning_desc, "");
}
Warnings::Warnings(int id, const char date[],const char desc[]) {
  warning_id = id;
  strcpy(warning_date, date);
  strcpy(warning_desc, desc);
}
void Warnings::display_warnings(){}
Warnings::~Warnings(){}