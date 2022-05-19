#include "AuditChecklist.h"
#include <cstring>


AuditChecklist::AuditChecklist() {
  item_id = 0;
  item_priority = 0;
  item_is_checked = false;
  strcpy(item_desc, "");
}
AuditChecklist::AuditChecklist(int id, int priority, const char desc[], bool check) {
  item_id = id;
  item_priority = priority;
  item_is_checked = check;
  strcpy(item_desc, desc);
}
void AuditChecklist::display_items(){}
int AuditChecklist::calc_total_checked(){}
AuditChecklist::~AuditChecklist(){}