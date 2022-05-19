#include "Inventory.h"
#include <cstring>


Inventory::Inventory() {
  item_id = 0;
  strcpy(item_type,"");
  strcpy(item_title,"");
}
Inventory::Inventory(int id, const char type[],const char title[]) {
  item_id = id;
  strcpy(item_type,type);
  strcpy(item_title, title);
}
void Inventory::display_item(){}
Inventory::~Inventory(){}