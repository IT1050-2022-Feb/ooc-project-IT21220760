
class Warnings{
	private:
		int warning_id;
		char warning_date[20];
		char warning_desc[200];
		
	public:
		Warnings();
		Warnings(int id, const char date[],const char desc[]);
		void display_warnings();
    ~Warnings();
		
};