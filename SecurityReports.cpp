#include "SecurityReports.h"
#include <cstring>

SecurityReports :: SecurityReports() {
	system_integrity = 0.0;
	strcpy(sec_comment, "");
	strcpy(vulnarabilities, "");
}

SecurityReports :: SecurityReports(double integrity, const char comment[], const char vuln[]) {
	system_integrity = integrity;
	strcpy(sec_comment, comment);
	strcpy(vulnarabilities, vuln);
}

void SecurityReports :: display_reports() {}

double SecurityReports :: calc_integrity(double integrity) {}

SecurityReports :: ~SecurityReports() {}