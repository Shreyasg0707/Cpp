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
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}
	 Date(int d,int m,int y)
	{
		day=d;
		month= m;
		year=y;
	}
};
int main()
{
	int dd,mm,yy;
	Date d;
	d.display();
	cout<<"enter the day,month,year";
	cin>>dd>>mm>>yy;
	Date d1(dd,mm,yy);
	d1.display();
}	
			
