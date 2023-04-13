#include<iostream>
using namespace std;
class Employee
{
	public: 
	   int id;
	   string name;
	   float salary;
	void insert(int i,string n,float s)
	{
		id=i;
		name=n;
		salary=s;
	}
	void display()
	{
		cout<<"id: "<<id<<" "<<"name: "<<name<<" "<<"Salary: "<<salary<<endl;
	}
};
int main()
{
	Employee e1;
	Employee e2;
	Employee e3;
	e1.insert(123,"Shashank ",12342.4);
	e2.insert(321,"Rani",4354.4);
	e3.insert(543,"Rahul",53354.3)  ;
	e1.display();
	e2.display() ;
	e3.display();
	 return 0;
}
