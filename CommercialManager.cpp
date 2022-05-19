#include "CommercialManager.h"

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