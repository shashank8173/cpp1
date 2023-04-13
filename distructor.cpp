#include<iostream>
using namespace std;
class Employee
{
	public:
		Employee()
		{
		  cout<<"Constructor invoked"<<endl;	
		}
		~Employee()
		{
			cout<<"Distructor invoked"<<endl;
		}
};
int main()
{
	Employee e1;
	Employee e2;
}
