#include "Employee.h"
#include "Warnings.h"
#include "SafetyImprovements.h"
#include "SafetyReports.h"



class SafetyEngineer : public Employee {
  private:
    int sf_eng_id;
  public:
    SafetyEngineer();
    SafetyEngineer(int id);
    void add_warnings(Warnings* warn, int id);
    void add_improvements(SafetyImprovements* impr, int id);
    void generate_sf_reports(SafetyReports* report, int id);
    ~SafetyEngineer();
};