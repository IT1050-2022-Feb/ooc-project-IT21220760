#include "Guidelines.h"
#include "RentalFees.h"

#define SIZE 5

class Equipment {
  private:
    int eq_id;
    char eq_title[20];
    char eq_desc[200];
    Guidelines* guide[SIZE];
    RentalFees* fee;

  public:
    Equipment();
    Equipment(int id, const char title[], const char desc[]);
    void show_eq();
    double calc_eq_rent();
    ~Equipment();
}