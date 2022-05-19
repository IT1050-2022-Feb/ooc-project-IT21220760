#include "Guidelines.h"
#include <cstring>


Guidelines::Guidelines(){
  guide_id = 0;
  strcpy(guide_date, "");
  strcpy(guide_desc, "");
  strcpy(guide_type, "");
}

Guidelines::Guidelines(int id, const char type[], const char date[], const char desc[]){
  guide_id = id;
  strcpy(guide_date, date);
  strcpy(guide_desc, desc);
  strcpy(guide_type, type);
}
void Guidelines::show_guidelines(){}
Guidelines::~Guidelines(){}