#include "Equipment.h"
#include "Vehicle.h"


class Guidelines {
  private:
    int guide_id;
    char guide_type[20];
    char guide_date[10];
    char guide_desc[200];
    Equipment* eq;
    Vehicle* veh;

  public:
    Guidelines();
    Guidelines(int id, const char type[], const char date[], const char desc[]);
    void show_guidelines();
    ~Guidelines();
};