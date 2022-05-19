class Feedbacks {
  private:
    int feedback_id;
    char feedback_date[10];
    char feedback_desc[200];
    char feedback_author[20];
    char feedback_role[10];

  public:
    Feedbacks();
    Feedbacks(int id, const char date[], const char desc[], const char author[], const char role[]);
    void display_feedbacks();
    ~Feedbacks();
};