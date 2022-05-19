#include "Issues.h"
#include <cstring>

Issues::Issues() {
  issue_id = 0;
  strcpy(issue_date, "");
  strcpy(issue_title, "");
  strcpy(issue_desc, "");
}
Issues::Issues(int id, const char date[], const char title[], const char desc[]) {
  issue_id = id;
  strcpy(issue_date, date);
  strcpy(issue_title, title);
  strcpy(issue_desc, desc);
}
void Issues::display_issues(){}
Issues::~Issues(){}