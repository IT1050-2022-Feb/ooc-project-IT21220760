#include "QaEngineer.h"

QaEngineer::QaEngineer(){
  qa_end_id = 0;
}
QaEngineer::QaEngineer(int id){
  qa_end_id = id;
}
void QaEngineer::disp_actions(DisciplinaryActions* action, int id){}
void QaEngineer::update_checklist(AuditChecklist* item, int id){}
void QaEngineer::generate_qa_reports(QaReports* report, int id){}
QaEngineer::~QaEngineer(){}