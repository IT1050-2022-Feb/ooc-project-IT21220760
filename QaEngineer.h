#include "Employee.h"
#include "DisciplinaryActions.h"
#include "AuditChecklist.h"
#include "QaReports.h"


class QaEngineer : public Employee {
  private:
    int qa_end_id;

  public:
    QaEngineer();
    QaEngineer(int id);
    void disp_actions(DisciplinaryActions* action, int id);
    void update_checklist(AuditChecklist* item, int id);
    void generate_qa_reports(QaReports* report, int id);
    ~QaEngineer();
};