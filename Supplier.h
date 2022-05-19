#include "RegisteredUser.h"
#include "CompanyStrategies.h"


class Supplier : public RegisteredUser {
   private:
     int supplier_id;
     int supplier_rating;

   public:
     Supplier();
     Supplier(int id);
     void request_strategies(CompanyStrategies* strt);
     ~Supplier();
};