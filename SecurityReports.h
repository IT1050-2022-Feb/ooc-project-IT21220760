#include "Reports.h"

class SecurityReports : public Reports {
	private:
		double system_integrity;
		char sec_comment[200];
		char vulnarabilities[200];
	public:
		SecurityReports();
		SecurityReports(double integrity, const char comment[], const char vuln[]);
		void display_reports();
		double calc_integrity(double integrity);
		~SecurityReports();
};