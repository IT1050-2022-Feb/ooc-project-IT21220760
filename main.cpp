#include "Administrator.h"
#include "AuditChecklist.h"
#include "CivilEngineer.h"
#include "CommercialManager.h"
#include "CompanyStrategies.h"
#include "Customer.h"
#include "DisciplinaryActions.h"
#include "Employee.h"
#include "Equipment.h"
#include "Feedbacks.h"
#include "FinancialReports.h"
#include "Guidelines.h"
#include "Integrations.h"
#include "Inventory.h"
#include "Investor.h"
#include "Issues.h"
#include "Projects.h"
#include "Opportunities.h"
#include "ProjectPlans.h"
#include "QaEngineer.h"
#include "QAReports.h"
#include "RegisteredUser.h"
#include "RentalFees.h"
#include "Reports.h"
#include "SafetyEngineer.h"
#include "SafetyImprovements.h"
#include "SafetyReports.h"
#include "SecurityReports.h"
#include "SiteSupervisor.h"
#include "Supplier.h"
#include "Vehicle.h"
#include "Warnings.h"

#include <iostream>
using namespace std;

int main() {

  //------Object Creation----------------
  
  Administrator* admin = new Administrator();
  AuditChecklist* list = new AuditChecklist();
  CivilEngineer* ce = new CivilEngineer();
  CommercialManager* cm = new CommercialManager();
  CompanyStrategies* cs = new CompanyStrategies();
  Customer* customer= new Customer();
  DisciplinaryActions* da = new DisciplinaryActions();
  Employee* emp = new Employee();
  Equipment* eq = new Equipment();
  Feedbacks* feed = new Feedbacks();
  FinancialReports* fr = new FinancialReports();
  Guidelines* guide = new Guidelines();
  Integrations* inte= new Integrations();
  Inventory* item = new Inventory();
  Investor* inv = new Investor();
  Issues* issue = new Issues();
  Projects* prj = new Projects();
  Opportunities* opp = new Opportunities();
  ProjectPlans* pp = new ProjectPlans();
  QaEngineer* qae= new QaEngineer();
  QAReports* qar= new QAReports();
  RegisteredUser* rUser= new RegisteredUser();
  RentalFees* fees = new RentalFees();
  Reports* rep = new Reports();
  SafetyEngineer* se = new SafetyEngineer();
  SafetyImprovements* si = new SafetyImprovements();
  SafetyReports* sr = new SafetyReports();
  SecurityReports* secR= new SecurityReports();
  SiteSupervisor* ss= new SiteSupervisor();
  Supplier* sup = new Supplier();
  Vehicle* veh = new Vehicle();
  Warnings* warn = new Warnings();

  //----Deleting dynamic objects--------
  delete admin;
  delete list;
  delete ce;
  delete cm;
  delete cs;
  delete customer;
  delete da;
  delete emp;
  delete eq;
  delete feed;
  delete fr;
  delete guide;
  delete inte;
  delete item;
  delete inv;
  delete issue;
  delete prj;
  delete opp;
  delete pp;
  delete qae;
  delete qar;
  delete rUser;
  delete fees;
  delete rep;
  delete se;
  delete si;
  delete sr;
  delete secR;
  delete ss;
  delete sup;
  delete veh;
  delete warn;
}