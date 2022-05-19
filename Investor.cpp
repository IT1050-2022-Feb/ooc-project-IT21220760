#include "Investor.h"

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