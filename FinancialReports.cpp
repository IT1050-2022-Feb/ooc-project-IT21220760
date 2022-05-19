#include "FinancialReports.h"
#include <cstring>


FinancialReports :: FinancialReports() {
	strcpy(report_desc, "");
}

FinancialReports :: FinancialReports(const char desc[]) {
	strcpy(report_desc, desc);
}

void FinancialReports :: display_reports() {}

FinancialReports :: ~FinancialReports() {}
