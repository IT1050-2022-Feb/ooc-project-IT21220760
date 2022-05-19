#include <iostream>
#include <cstring>

#define SIZE 5

class Employee {
  protected:
    int emp_id;
    char emp_name[20];
    char emp_pw[8];
    char emp_email[20];
    char emp_nic[11];
    Integrations* intgr;
  
  public:
    Employee();
    Employee(int id, const char name[], const char pw[], const char email[], const char nic[]);
    void login();
    void logout();
    void edit_profile(const char name[], const char pw[], const char email[], const char nic[]);
    void thirdParty_connect();
    ~Employee();
};
// //////////////////////////////
Employee:: Employee() {
  emp_id = 0;
  strcpy(emp_name, "");
  strcpy(emp_pw, "");
  strcpy(emp_email, "");
  strcpy(emp_nic, "");
} 
Employee:: Employee(int id, const char name[], const char pw[], const char email[], const char nic[]) {
  emp_id = id;
  strcpy(emp_name, name);
  strcpy(emp_pw, pw);
  strcpy(emp_email, email);
  strcpy(emp_nic, nic);
}
void Employee::login(){}
void Employee::logout(){}
void Employee::edit_profile(const char name[], const char pw[], const char email[], const char nic[]){}
void Employee::thirdParty_connect(){}
Employee:: ~Employee(){}
// ////////////////////////////////

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
///////////////////////////////////
CivilEngineer::CivilEngineer() {
  civil_eng_id = 0;
}
CivilEngineer::CivilEngineer(int id) {
  civil_eng_id = id;
}
void CivilEngineer::add_plans(ProjectPlans* plan, int id){}
void CivilEngineer::add_guidelines(Guidelines* guide, int id){}
CivilEngineer::~CivilEngineer(){}
///////////////////////////////////


class SiteSupervisor : public Employee {
  private:
    int supervisor_id;
  
  public: 
    SiteSupervisor();
    SiteSupervisor(int id);
    void add_issues(Issues* issue, int id);
    void generate_inventory_reports(Inventory* report, int id);
    ~SiteSupervisor();
};
///////////////////////////////////////////
SiteSupervisor::SiteSupervisor() {
  supervisor_id = 0;
}
SiteSupervisor::SiteSupervisor(int id) {
  supervisor_id = id;
}
void SiteSupervisor::add_issues(Issues* issue, int id){}
void SiteSupervisor::generate_inventory_reports(Inventory* report, int id){}
SiteSupervisor::~SiteSupervisor(){}
///////////////////////////////////////////

class CommercialManager : public Employee {
  private:
    int com_mgr_id;

  public:
    CommercialManager();
    CommercialManager(int id);
    void add_opportunities(Opportunities* opp, int id);
    void update_strategies(CompanyStrategies* strt);
    void generate_financial_reports(FinancialReports* report, int id);
    ~CommercialManager();
};
////////////////////////////
CommercialManager::CommercialManager() {
  com_mgr_id = 0;
}
CommercialManager::CommercialManager(int id) {
  com_mgr_id = id;
}
void CommercialManager::add_opportunities(Opportunities* opp, int id){}
void CommercialManager::update_strategies(CompanyStrategies* strt){}
void CommercialManager::generate_financial_reports(FinancialReports* report, int id){}
CommercialManager::~CommercialManager(){}
////////////////////////////
class QaEngineer : public Employee {
  private:
    int qa_end_id;

  public:
    QaEngineer();
    QaEngineer(int id);
    void disp_actions(DisciplinaryActions* action, int id);
    void update_checklist(AuditChecklist* item, int id);
    void generate_qa_reports(QaReport* report, int id);
    ~QaEngineer();
};
///////////////////////////////
QaEngineer::QaEngineer(){
  qa_end_id = 0;
}
QaEngineer::QaEngineer(int id){
  qa_end_id = id;
}
void QaEngineer::disp_actions(DisciplinaryActions* action, int id){}
void QaEngineer::update_checklist(AuditChecklist* item, int id){}
void QaEngineer::generate_qa_reports(QaReport* report, int id){}
QaEngineer::~QaEngineer(){}
///////////////////////////////
class SafetyEngineer : public Employee {
  private:
    int sf_eng_id;
  public:
    SafetyEngineer();
    SafetyEngineer(int id);
    void add_warnings(Warnings* warn, int id);
    void add_improvements(SafetyImprovements* impr, int id);
    void generate_sf_reports(SafetyReports* report, int id);
    ~SafetyEngineer();
};
////////////////////////////////////
SafetyEngineer::SafetyEngineer() {
  sf_eng_id = 0;
}
SafetyEngineer::SafetyEngineer(int id) {
  sf_eng_id = id;
}
void SafetyEngineer::add_warnings(Warnings* warn, int id){}
void SafetyEngineer::add_improvements(SafetyImprovements* impr, int id){}
void SafetyEngineer::generate_sf_reports(SafetyReports* report, int id){}
SafetyEngineer::~SafetyEngineer(){}
////////////////////////////////////

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
    void remove_account(RegsiteredUser* acc);
    void edit_account(RegsiteredUser* acc);
    void add_equipment(Equipment* eq);
    void add_vehicle(Vehicle* veh);
    void add_project(Projects* prj);
    void edit_project(Projects* prj);
    double calc_rental_fees(RentalFees* fees);
    void generate_security_reports(SecurityReports* report)
    ~Administrator();
};

/////////////////////////////////
Administrator::Administrator() {
  user_id = 0;
  strcpy(name, "");
  strcpy(user_pw, "");
  strcpy(user_email, "");
  strcpy(user_nic, "");
  strcpy(user_dob, "");
}
void Administrator::login(){}
void Administrator::logout(){}
void Administrator::remove_account(RegsiteredUser* acc){}
void Administrator::edit_account(RegsiteredUser* acc){}
void Administrator::add_equipment(Equipment* eq){}
void Administrator::add_vehicle(Vehicle* veh){}
void Administrator::add_project(Projects* prj){}
void Administrator::edit_project(Projects* prj){}
double calc_rental_fees(RentalFees* fees){}
void Administrator::generate_security_reports(SecurityReports* report){}
Administrator::~Administrator(){}

/////////////////////////////////

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
///////////////////////////////////
Projects::Projects() {
  project_id = 0;
  strcpy(project_status, "Pending");
  completion_rate = 0;
  strcpy(project_desc, "lorem ipsum");
}
Projects::Projects(int id, const char status[], int rate, const char desc[]) {
  project_id = id;
  strcpy(project_status, status);
  completion_rate = rate;
  strcpy(project_desc, desc);
}
void Projects::display_employees(Employee* emp){}
void Projects::display_customer(Customer* cus){}
void Projects::display_status(){}
Projects::~Projects(){}
///////////////////////////////////

class ProjectPlans {
  private:
    int plan_id;
    char plan_date[10];
    char plan_title[20];
    char plan_desc[200];

  public:
    ProjectPlans();
    ProjectPlans(int id, const char date[], const char title[], const char desc[]);
    void display_plans();
    ~ProjectPlans();
};

/////////////////////

ProjectPlans::ProjectPlans() {
  plan_id = 0;
  strcpy(plan_date, "");
  strcpy(plan_title, "");
  strcpy(plan_desc, "");
}
ProjectPlans::ProjectPlans(int id, const char date[], const char title[], const char desc[]) {
  plan_id = id;
  strcpy(plan_date, date);
  strcpy(plan_title, title);
  strcpy(plan_desc, desc);
}
void ProjectPlans::display_plans(){}
ProjectPlans::~ProjectPlans(){}
////////////////////

class AuditChecklist {
  private:
    int item_id;
    int item_priority;
    char item_desc[200];
    bool item_is_checked;

  public:
    AuditChecklist();
    AuditChecklist(int id, int priority, const char desc[], bool check);
    void display_items();
    int calc_total_checked();
    ~AuditChecklist();
};
////////////////////////

AuditChecklist::AuditChecklist() {
  item_id = 0;
  item_priority = 0;
  item_is_checked = false;
  strcpy(item_desc, "");
}
AuditChecklist::AuditChecklist(int id, int priority, const char desc[], bool check) {
  item_id = id;
  item_priority = priority;
  item_is_checked = check;
  strcpy(item_desc, desc);
}
void AuditChecklist::display_items(){}
int AuditChecklist::calc_total_checked(){}
AuditChecklist::~AuditChecklist(){}

////////////////////////
class CompanyStrategies {
  private:
    char strategist[20];
    char strategy_desc[200];
    int up_votes;
    int down_votes;
    char effective_until[10];

  public:
    CompanyStrategies();
    CompanyStrategies(const char strategist[], const char desc[], int up, int down, const char until[]);
    int calc_total_votes();
    ~CompanyStrategies();
};
/////////////////////

CompanyStrategies::CompanyStrategies() {
  strcpy(strategist, "");
  strcpy(strategy_desc, "");
  strcpy(effective_until, "");
  up_votes = 0;
  down_votes = 0;
}

CompanyStrategies::CompanyStrategies(const char strategist[], const char desc[], int up, int down, const char until[]) {
  strcpy(strategist, strategist);
  strcpy(strategy_desc, desc);
  strcpy(effective_until, until);
  up_votes = up;
  down_votes = down;
}
int CompanyStrategies::calc_total_votes(){}
CompanyStrategies::~CompanyStrategies(){}
/////////////////////
class Feedbacks {
  private:
    int feedback_id;
    char feedback_date[10];
    char feedback_desc[200];
    char feedback_author[20];
    char feedback_role[10];

  public:
    Feedbacks();
    Feedbacks(int id, const char date[], const char desc[], const char author, const char role[]);
    void display_feedbacks();
    ~Feedbacks();
};
///////////////////////////////

Feedbacks::Feedbacks() {
  feedback_id = 0;
  strcpy(feedback_date, "");
  strcpy(feedback_desc, "");
  strcpy(feedback_author, "");
  strcpy(feedback_role, "");
}
Feedbacks::Feedbacks(int id, const char date[], const char desc[], const char author, const char role[]) {
  feedback_id = id;
  strcpy(feedback_date, date);
  strcpy(feedback_desc, desc);
  strcpy(feedback_author, author);
  strcpy(feedback_role, role);
}
void Feedbacks::display_feedbacks(){}
Feedbacks::~Feedbacks();
///////////////////////////////
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
}
///////////////////////////////////////

Guidelines::Guidelines(){
  guide_id = 0;
  strcpy(guide_date, "");
  strcpy(guide_desc, "");
  strcpy(guide_type, "");
}

Guidelines::Guidelines(int id, const char type[], const char date[], const char desc[]){
  guide_id = id;
  strcpy(guide_date, date);
  strcpy(guide_desc, desc);
  strcpy(guide_type, type);
}
void Guidelines::show_guidelines(){}
Guidelines::~Guidelines(){}
///////////////////////////////////////


// Rusiru

class Integrations{
	private:
		int inte_id;
	
	public:
		Integrations();
		Integrations(int id);
		void show_details();
		~Integrations();
};

class Inventory{
	private:
		int item_id;
		char item_type[20];
		char item_title[20];
	
	public:
		Inventory();
		Inventory(int id, const char type[],const char title[]);
		void display_item();
    ~Inventory();
		
};
///////////////////////////////////

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

///////////////////////////////////
class Warnings{
	private:
		int warning_id;
		char warning_date[20];
		char warning_desc[200];
		
	public:
		Warnings();
		Warnings(int id, const char date[],const char desc[]);
		void display_warnings();
    ~Warnings();
		
};
/////////////////////////////////
Warnings::Warnings() {
  warning_id = 0;
  strcpy(warning_date, "");
  strcpy(warning_desc, "");
}
Warnings::Warnings(int id, const char date[],const char desc[]) {
  warning_id = id;
  strcpy(warning_date, date);
  strcpy(warning_desc, desc);
}
void Warnings::display_warnings(){}
Warnings::~Warnings(){}
/////////////////////////////////
class SafetyImprovements{
	private:
		char report_desc[200];
		bool is_completed;
		
	public:
		SafetyImprovements();
    SafetyImprovements(const char desc[], bool completed);
		bool check_availability();
		void display_reports();
    ~SafetyImprovements();
		
};
////////////////////////////////

SafetyImprovements::SafetyImprovements() {
  strcpy(report_desc, "");
  is_completed = false;
}

SafetyImprovements::SafetyImprovements(const char desc[], bool completed) {
  strcpy(report_desc, desc);
  is_completed = completed;
}
bool SafetyImprovements::check_availability(){}
void SafetyImprovements::display_reports(){}
SafetyImprovements::~SafetyImprovements(){
  
}
////////////////////////////////
class Issues{
	private:
		int issue_id;
		char issue_date[20];
		char issue_title[20];
		char issue_desc[200];
		
	public:
		Issues();
    Issues(int id, const char date[], const char title, const char desc);
		void display_issues();
    ~Issues();
};
/////////////////////////////////////

Issues::Issues() {
  issue_id = 0;
  strcpy(issue_date, "");
  strcpy(issue_title, "");
  strcpy(issue_desc, "");
}
Issues::Issues(int id, const char date[], const char title, const char desc) {
  issue_id = id;
  strcpy(issue_date, date);
  strcpy(issue_title, title);
  strcpy(issue_desc, desc);
}
void Issues::display_issues(){}
Issues::~Issues(){}
/////////////////////////////////////

// Tharindu
class RentalFees{
  private:
    int rent_id;
    double rent_amount;
    char rent_exp[10];

  public:
    RentalFees();
    RentalFees(int id, double amount, const char exp[]);
    void show_rent();
    ~RentalFees();  
};
/////////////////////////////
RentalFees::RentalFees() {
  rent_id = 0;
  rent_amount = 0.00;
  strcpy(rent_exp, "");
}

RentalFees::RentalFees(int id, double amount, const char exp[]) {
  rent_id = id;
  rent_amount = amount;
  strcpy(rent_exp, exp);
}
void RentalFees::show_rent(){}
RentalFees::~RentalFees(){}
/////////////////////////////
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
}

///////////////////////////////
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
///////////////////////////////

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
/////////////////////////////
Equipment::Equipment() {
  eq_id = 0;
  strcpy(eq_title, "");
  strcpy(eq_desc, "");
}
Equipment::Equipment(int id, const char title[], const char desc[]) {
  eq_id = id;
  strcpy(eq_title, title);
  strcpy(eq_desc, desc);
}
void Equipment::show_eq(){}
double Equipment::calc_eq_rent(){}
Equipment::~Vehicle(){}
/////////////////////////////
class DisciplinaryActions {
  private:
    char action_type[10];
    char action_desc[200];

  public:
    DisciplinaryActions();
    DisciplinaryActions(const char type[], const char desc[]);
    void display_actions();
    ~DisciplinaryActions();
}
//////////////////////////////
DisciplinaryActions::DisciplinaryActions(){
  strcpy(action_type, "");
  strcpy(action_desc, "");
}
DisciplinaryActions::DisciplinaryActions(const char type[], const char desc[]){
  strcpy(action_type, type);
  strcpy(action_desc, desc);
}
void DisciplinaryActions::display_actions(){}
DisciplinaryActions::~DisciplinaryActions(){}
//////////////////////////////

// Eran

class RegisteredUser {
   protected:
     char user_name[20];
     int user_id;
     char user_dob[10];
     char user_pw[8];
     char user_email[20];
     char user_nic[11];
     Feedbacks* feedbk;

   public:
     RegisteredUser();
     void login();
     void logout();
     void send_feedback(int id, const char date[], const char desc[], const char author, const char role[]);
     void edit_feedback(int id, const char date[], const char desc[], const char role[]);
     void edit_profile(const char name[], const char pw[], const char email[], const char nic[]);
     ~RegisteredUser();
};

//////////////////////////////
RegisteredUser::RegisteredUser() {
  user_id = 0;
  strcpy(user_name, "");
  strcpy(user_dob, "");
  strcpy(user_pw, "");
  strcpy(user_email, "");
  strcpy(user_nic, "");
}
void RegisteredUser::login(){}
void RegisteredUser::logout(){}
void RegisteredUser::send_feedback(int id, const char date[], const char desc[], const char author, const char role[]){}
void RegisteredUser::edit_feedback(int id, const char date[], const char desc[], const char role[]){}
void RegisteredUser::edit_profile(const char name[], const char pw[], const char email[], const char nic[]){}
RegisteredUser::~RegisteredUser(){}
/////////////////////////////

class Investor : public RegisteredUser {
   private:
     int investor_id;
     double investment_amount;

   public:
     Investor();
     Investor(int id);
     double calc_project_ownership(CompanyStrategies* strt);
     void request_financial_reports(FinancialReports* reprt);
     ~Investor();
};

//////////////////////////////
Investor::Investor() {
  investor_id = 0;
  investment_amount = 0.00;
}
Investor::Investor(int id) {
  investor_id = id;
}
double Investor::calc_project_ownership(CompanyStrategies* strt){}
void Investor::request_financial_reports(FinancialReports* reprt){}
Investor::~Investor() {}
//////////////////////////////


class Customer : public RegisteredUser {
   private:
     int customer_id;

   public:
     Customer();
     Customer(int id);
     void request_projectplanes(projectplanes* prpl, int id);
     ~Customer();
};
////////////////////////////

Customer::Customer() {
  customer_id = 0;
}
Customer::Customer(int id) {
  customer_id = id;
}
void Customer::request_projectplanes(projectplanes* prpl, int id){}
Customer::~Customer() {}
////////////////////////////
class Supplier : public RegisteredUser {
   private:
     int supplier_id;
     int supplier_rating;

   public:
     Supplier();
     Supplier(int id);
     void request_strategies(CompanyStrategies* strt);
     ~Supplier();
};

/////////////////////////////
Supplier::Supplier() {
  supplier_id = 0;
  supplier_rating = 0;
}
Supplier::Supplier(int id) {
  supplier_id = id;
}
void Supplier::request_strategies(CompanyStrategies* strt){}
Supplier::~Supplier() {}
/////////////////////////////
class Opportunities {
   private:
     char opportunities_desc;
     bool is_available;

   public:
     Opportunities();
     bool check_availability();
     void display_opportunities();
     ~Opportunities();
};
/////////////////////////////

Opportunities::Opportunities() {
  strcpy(opportunities_desc, "");
  is_available = false;
}
bool Opportunities::check_availability(){}
void Opportunities::display_opportunities(){}
Opportunities::~Opportunities() {}

/////////////////////////////

int main() {

  
  
}