#include "Guidelines.h"
#include "RentalFees.h"

#define SIZE 5

class Vehicle {
  private:
    int veh_id;
    char veh_title[20];
    char veh_desc[200];
    Guidelines* guide[SIZE];
    RentalFees* fee;

  public:
    Vehicle();
    Vehicle(int id, const char title[], const char desc[]);
    void show_veh();
    double calc_veh_rent();
    ~Vehicle();
};