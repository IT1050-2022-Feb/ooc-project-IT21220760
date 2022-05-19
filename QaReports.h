#include "Reports.h"

using namespace std;

class QaReports : public Reports {
	private:
		char report_desc[200];
	public:
		QaReports();
		QaReports(const char desc[]);
		void display_reports();
		~QaReports();
};
