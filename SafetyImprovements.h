class SafetyImprovements{
	private:
		char report_desc[200];
		bool is_completed;
		
	public:
		SafetyImprovements();
    SafetyImprovements(const char desc[], bool completed);
		bool check_availability();
		void display_reports();
    ~SafetyImprovements();
		
};