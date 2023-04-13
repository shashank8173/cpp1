#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter numbers of line:\n";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		cout<<" ";
		for(int j=i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
