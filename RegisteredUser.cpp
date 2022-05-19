#include "RegisteredUser.h"
#include <cstring>

RegisteredUser::RegisteredUser() {
  user_id = 0;
  strcpy(user_name, "");
  strcpy(user_dob, "");
  strcpy(user_pw, "");
  strcpy(user_email, "");
  strcpy(user_nic, "");
}
void RegisteredUser::login(){}
void RegisteredUser::logout(){}
void RegisteredUser::send_feedback(int id, const char date[], const char desc[], const char author, const char role[]){}
void RegisteredUser::edit_feedback(int id, const char date[], const char desc[], const char role[]){}
void RegisteredUser::edit_profile(const char name[], const char pw[], const char email[], const char nic[]){}
RegisteredUser::~RegisteredUser(){}