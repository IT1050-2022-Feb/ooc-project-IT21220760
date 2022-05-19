#include "RegisteredUser.h"
#include "CompanyStrategies.h"
#include "FinancialReports.h"


class Investor : public RegisteredUser {
   private:
     int investor_id;
     double investment_amount;

   public:
     Investor();
     Investor(int id);
     double calc_project_ownership(CompanyStrategies* strt);
     void request_financial_reports(FinancialReports* reprt);
     ~Investor();
};