#include "Reports.h"

class FinancialReports : public Reports {
	private:
		char report_desc[200];
	public:
		FinancialReports();
		FinancialReports(const char desc[]);
		void display_reports();
		~FinancialReports();
};
