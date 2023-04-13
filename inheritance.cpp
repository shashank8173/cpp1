#include<iostream>
using namespace std;
class Account
{
	public:
		float salary=100.0;
} ;  
class Program:public Account
{
	public: 
	   float bonus=400.0;
}  ;
int main()
{
	Program p1;
	cout<<"Salary: "<<p1.salary<<endl;
	cout<<"Bonus: "<<p1.bonus<<endl;
	return 0;
}
