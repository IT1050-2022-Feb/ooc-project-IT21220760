class DisciplinaryActions {
  private:
    char action_type[10];
    char action_desc[200];

  public:
    DisciplinaryActions();
    DisciplinaryActions(const char type[], const char desc[]);
    void display_actions();
    ~DisciplinaryActions();
}