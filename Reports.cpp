#include "Reports.h"
#include <cstring>

Reports :: Reports() {
	report_id = 0;
	strcpy(report_title, "");
	strcpy(report_date, "");
	view_count = 0;
}

Reports :: Reports(int id, const char title[], const char date[], int count) {
	report_id = id;
	strcpy(report_title, title);
	strcpy(report_date, date);
	view_count = count;
}

void Reports :: display_meta() {}

void Reports :: update_view_count() {}

Reports :: ~Reports() {}