#include "Supplier.h"
#include "ProjectPlans.h"
#include "Guidelines.h"
#include "Employee.h"


#define SIZE 5

class CivilEngineer : public Employee {
  private:
    int civil_eng_id;
    Supplier* sup[SIZE];

  public:
    CivilEngineer();
    CivilEngineer(int id);
    void add_plans(ProjectPlans* plan, int id);
    void add_guidelines(Guidelines* guide, int id);
    ~CivilEngineer();
};