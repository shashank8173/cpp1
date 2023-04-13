#include<iostream>
using namespace std;
class Employee
{
	public: 
	 int id;
	 string name;
	 float salary;
	Employee(int i,string n,float s)
	{
		id=i;
		name=n;
		salary=s;
	}
	void display()
	{
		cout<<"id: "<<id<<" "<<"name: "<<name<<" "<<" salary"<<salary<<endl;
	}
} ;
int main()
{
	Employee e1=Employee(321,"shashank",543.243)  ;
	Employee e2=Employee(443,"shahdfdsad",54.353) ;
	e1.display();
	e2.display();
}
