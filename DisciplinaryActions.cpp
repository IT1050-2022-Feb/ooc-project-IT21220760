#include "DisciplinaryActions.h"
#include <cstring>

DisciplinaryActions::DisciplinaryActions(){
  strcpy(action_type, "");
  strcpy(action_desc, "");
}
DisciplinaryActions::DisciplinaryActions(const char type[], const char desc[]){
  strcpy(action_type, type);
  strcpy(action_desc, desc);
}
void DisciplinaryActions::display_actions(){}
DisciplinaryActions::~DisciplinaryActions(){}