#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//int i=0;
	int ans=0;
	while(n!=0)
	{
		int digit=n%10;
		ans=(ans*10)+digit;
		if(ans>(INT_MAX)/10||ans<(INT_MIN)/10)
		{
			return 0;
		}
		n=n/10;
		//i++;
	}
	cout<<ans;
	return 0;
}
