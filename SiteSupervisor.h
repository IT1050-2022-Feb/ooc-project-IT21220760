#include "Employee.h"
#include "Issues.h"
#include "Inventory.h"


class SiteSupervisor : public Employee {
  private:
    int supervisor_id;
  
  public: 
    SiteSupervisor();
    SiteSupervisor(int id);
    void add_issues(Issues* issue, int id);
    void generate_inventory_reports(Inventory* report, int id);
    ~SiteSupervisor();
};