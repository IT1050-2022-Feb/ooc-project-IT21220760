class Opportunities {
   private:
     char opportunities_desc[200];
     bool is_available;

   public:
     Opportunities();
     bool check_availability();
     void display_opportunities();
     ~Opportunities();
};