class AuditChecklist {
  private:
    int item_id;
    int item_priority;
    char item_desc[200];
    bool item_is_checked;

  public:
    AuditChecklist();
    AuditChecklist(int id, int priority, const char desc[], bool check);
    void display_items();
    int calc_total_checked();
    ~AuditChecklist();
};