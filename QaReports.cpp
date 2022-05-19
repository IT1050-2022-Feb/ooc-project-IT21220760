#include "QaReports.h"
#include <cstring>

QaReports :: QaReports() {
	strcpy(report_desc, "");
}

QaReports :: QaReports(const char desc[]) {
	strcpy(report_desc, desc);
}

void QaReports :: display_reports() {}

QaReports :: ~QaReports() {}
