#include<iostream>
using namespace std;
class Date
{
	private :int day;
		      int month;
		      int year;
	public :
	 Date()
	{
		day=20;
		month=9;
		year=2003;
	}
 	void display()
	{
		cout<<day<<"/"<<month<<"/"<<year;
	}
};
int main()
{
	Date d;
	d.display();
	
}	
			
