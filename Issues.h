class Issues{
	private:
		int issue_id;
		char issue_date[20];
		char issue_title[20];
		char issue_desc[200];
		
	public:
		Issues();
    Issues(int id, const char date[], const char title[], const char desc[]);
		void display_issues();
    ~Issues();
};