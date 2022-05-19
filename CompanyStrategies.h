class CompanyStrategies {
  private:
    char strategist[20];
    char strategy_desc[200];
    int up_votes;
    int down_votes;
    char effective_until[10];

  public:
    CompanyStrategies();
    CompanyStrategies(const char strategist[], const char desc[], int up, int down, const char until[]);
    int calc_total_votes();
    ~CompanyStrategies();
};
