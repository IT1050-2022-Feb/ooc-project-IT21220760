#include "Employee.h"
#include "Customer.h"


class Projects {
  private:
    int project_id;
    char project_status[10];
    int completion_rate;
    char project_desc[200];

  public:
    Projects();
    Projects(int id, const char status[], int rate, const char desc[]);
    void display_employees(Employee* emp);
    void display_customer(Customer* cus);
    void display_status();
    ~Projects();
};