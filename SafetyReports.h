class SafetyReports : public Reports {
	private:
		char report_desc[200];
	public:
		SafetyReports();
		SafetyReports(const char desc[]);
		void display_reports();
		~SafetyReports();
};