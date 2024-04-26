#include<iostream>
using namespace std;
class Student
{
	public : int num1,num2,sum;
	public :void getdata();
		     void putdata();
};
void Student ::getdata()
{
	cout<<"enter the two  number"<<endl;
	cin>>num1>>num2;
}
void Student::putdata()
{
	sum=num1+num2;
	cout<<"num1="<<num1<<endl<<"num2="<<num2<<endl<<"sum="<<sum;
}
int main()
{
	Student s;
	s.getdata();
	s.putdata();
}
			
