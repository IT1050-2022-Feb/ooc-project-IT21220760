#include "Feedbacks.h"
#include <cstring>


Feedbacks::Feedbacks() {
  feedback_id = 0;
  strcpy(feedback_date, "");
  strcpy(feedback_desc, "");
  strcpy(feedback_author, "");
  strcpy(feedback_role, "");
}
Feedbacks::Feedbacks(int id, const char date[], const char desc[], const char author[], const char role[]) {
  feedback_id = id;
  strcpy(feedback_date, date);
  strcpy(feedback_desc, desc);
  strcpy(feedback_author, author);
  strcpy(feedback_role, role);
}
void Feedbacks::display_feedbacks(){}
Feedbacks::~Feedbacks(){}