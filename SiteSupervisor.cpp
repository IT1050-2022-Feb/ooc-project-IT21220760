#include "SiteSupervisor.h"

SiteSupervisor::SiteSupervisor() {
  supervisor_id = 0;
}
SiteSupervisor::SiteSupervisor(int id) {
  supervisor_id = id;
}
void SiteSupervisor::add_issues(Issues* issue, int id){}
void SiteSupervisor::generate_inventory_reports(Inventory* report, int id){}
SiteSupervisor::~SiteSupervisor(){}