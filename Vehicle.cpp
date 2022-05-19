#include "Vehicle.h"
#include <cstring>


Vehicle::Vehicle() {
  veh_id = 0;
  strcpy(veh_title, "");
  strcpy(veh_desc, "");
}
Vehicle::Vehicle(int id, const char title[], const char desc[]) {
  veh_id = id;
  strcpy(veh_title, title);
  strcpy(veh_desc, desc);
}
void Vehicle::show_veh(){}
double Vehicle::calc_veh_rent(){}
Vehicle::~Vehicle(){}