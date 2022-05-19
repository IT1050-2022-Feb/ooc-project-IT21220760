class Inventory{
	private:
		int item_id;
		char item_type[20];
		char item_title[20];
	
	public:
		Inventory();
		Inventory(int id, const char type[],const char title[]);
		void display_item();
    ~Inventory();
		
};