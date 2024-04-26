#include<iostream>
#include<iomanip>
using namespace std;
struct employee
{
	char name[20],designation[10],employee_id[40];

	float basic_salary,net_salary;
}e[3];
void getdata()
{
	float da,hra;
	for(int i=0;i<3;i++)
	{
		cout<<"enter name"<<endl;
		cin>>e[i].name;
		cout<<"enter designation"<<endl;
		cin>>e[i].designation;
		cout<<"enter  employee id"<<endl;
		cin>>e[i].employee_id;
		cout<<"enter basic salary"<<endl;
		cin>>e[i].basic_salary;
		da=e[i].basic_salary*0.8;
		hra=e[i].basic_salary*0.2;
		e[i].net_salary=e[i].basic_salary+da+hra;
		
	}
}
void putdata()
{ 	int sr=0;
	cout<<"employee data"<<endl;
	cout<<"sr_no"<< setw(10)<< "name"<< setw(15)<<" designation"<< setw(15)<<" employee_id"<< setw(15)<< "net salary "<<endl;
	for(int i=0;i<3;i++)
	{
		sr++;
		cout<<sr<<setw(14)<<e[i].name<<setw(15)<<e[i].designation<<setw(15)<<e[i].employee_id<<setw(15)<<e[i].net_salary<<endl;

	}
	

}
int main()
{
	getdata();
putdata();
}









