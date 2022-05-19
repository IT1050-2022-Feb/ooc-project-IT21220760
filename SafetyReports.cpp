#include "SafetyReports.h"
#include <cstring>


SafetyReports :: SafetyReports() {
	strcpy(report_desc, "");
}

SafetyReports :: SafetyReports(const char desc[]) {
	strcpy(report_desc, desc);
}

SafetyReports :: ~SafetyReports() {}