class RentalFees{
  private:
    int rent_id;
    double rent_amount;
    char rent_exp[10];

  public:
    RentalFees();
    RentalFees(int id, double amount, const char exp[]);
    void show_rent();
    ~RentalFees();  
};