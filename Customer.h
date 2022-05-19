#include "RegisteredUser.h"
#include "ProjectPlans.h"

class Customer : public RegisteredUser {
   private:
     int customer_id;

   public:
     Customer();
     Customer(int id);
     void request_projectplanes(ProjectPlans* prpl, int id);
     ~Customer();
};