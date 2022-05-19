#include "Warnings.h"
#include "SafetyImprovements.h"
#include "Feedbacks.h"
#include "Issues.h"
#include "Inventory.h"
#include "Guidelines.h"
#include "AuditChecklist.h"
#include "DisciplinaryActions.h"
#include "Opportunities.h"
#include "CompanyStrategies.h"

# define SIZE 5

class Reports {
	protected:
		int report_id;
		char report_title[20];
		char report_date[10];
		int view_count;

    Warnings* warn[SIZE];
    SafetyImprovements* si[SIZE];
    Feedbacks* feed[SIZE];
    Issues* issue[SIZE];
    Inventory* item[SIZE];
    Guidelines* guide[SIZE];
    AuditChecklist* audit[SIZE];
    DisciplinaryActions* actions[SIZE];
    Opportunities* opp[SIZE];
    CompanyStrategies*  cs[SIZE];

	public:
		Reports();
		Reports(int id, const char title[], const char date[], int count);
		void display_meta();
		void update_view_count();
		~Reports();
};