#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"Enter the number.\n";
	int n;
	cin>>n;
	int t=pow(((n*(n+1))/2),2);
	cout<<"Total no. of rectangle in chess is: "<<t;
	return 0;
}
