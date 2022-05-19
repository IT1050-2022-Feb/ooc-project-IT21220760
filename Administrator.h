#include "RegisteredUser.h"
#include "Equipment.h"
#include "Vehicle.h"
#include "Projects.h"
#include "RentalFees.h"
#include "SecurityReports.h"


class Administrator {
  private:
    int user_id;
    char name[20];
    char user_pw[8];
    char user_dob[10];
    char user_email[20];
    char user_nic[11];

  public:
    Administrator();
    void login();
    void logout();
    void remove_account(RegisteredUser* acc);
    void edit_account(RegisteredUser* acc);
    void add_equipment(Equipment* eq);
    void add_vehicle(Vehicle* veh);
    void add_project(Projects* prj);
    void edit_project(Projects* prj);
    double calc_rental_fees(RentalFees* fees);
    void generate_security_reports(SecurityReports* report);
    ~Administrator();
};