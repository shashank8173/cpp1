#include<iostream>
using namespace std;
int power(int i)
{
   if(i==0)
     return 0;
   power(i-1);
   cout<<i<<" "<<i*i<<endl;
}
int main()
{
	int i;
	cout<<"Enter n number";
	cin>>i;
	return 0;
}

