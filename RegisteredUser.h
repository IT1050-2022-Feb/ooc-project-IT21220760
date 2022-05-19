#include "Feedbacks.h"

class RegisteredUser {
   protected:
     char user_name[20];
     int user_id;
     char user_dob[10];
     char user_pw[8];
     char user_email[20];
     char user_nic[11];
     Feedbacks* feedbk;

   public:
     RegisteredUser();
     void login();
     void logout();
     void send_feedback(int id, const char date[], const char desc[], const char author, const char role[]);
     void edit_feedback(int id, const char date[], const char desc[], const char role[]);
     void edit_profile(const char name[], const char pw[], const char email[], const char nic[]);
     ~RegisteredUser();
};