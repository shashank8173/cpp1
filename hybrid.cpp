#include<iostream>
using namespace std;
class A
{
	protected: 
	   int a;
	   public:
	   	void get_a()
	   	{
	   		cout<<"Enter first number: "<<endl;
	   		cin>>a;
		   }
};
class B:public A
{
	protected:
		 int b;
		 public:
		 	void get_b()
		 	{
				  cout<<"Enter second number: "<<endl;
				  cin>>b;
			 }
} ;
class C
{
	protected: 
	  int c;
	  public:
	  void get_c()
	  {
	  	cout<<"Enter third number: "<<endl;
	  	cin>>c;
	  }
} ;
class D:public B,public C
{
	public: 
	void mul()
	{
		get_a();
		get_b();
		get_c();
		cout<<"Multiplication of three numbers is: "<<a*b*c<<endl;
		
	}
};
int main()
{
    D d;
	d.mul();
	return 0;	
}


