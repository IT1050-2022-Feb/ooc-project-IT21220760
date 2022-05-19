#include "Employee.h"
#include "Opportunities.h"
#include "FinancialReports.h"
#include "CompanyStrategies.h"


class CommercialManager : public Employee {
  private:
    int com_mgr_id;

  public:
    CommercialManager();
    CommercialManager(int id);
    void add_opportunities(Opportunities* opp, int id);
    void update_strategies(CompanyStrategies* strt);
    void generate_financial_reports(FinancialReports* report, int id);
    ~CommercialManager();
};