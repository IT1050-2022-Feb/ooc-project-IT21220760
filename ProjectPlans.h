class ProjectPlans {
  private:
    int plan_id;
    char plan_date[10];
    char plan_title[20];
    char plan_desc[200];

  public:
    ProjectPlans();
    ProjectPlans(int id, const char date[], const char title[], const char desc[]);
    void display_plans();
    ~ProjectPlans();
};

