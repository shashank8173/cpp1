#include<iostream>
using namespace std;
int main()
{
  int n,k=0;
  cout<<"Enter number of line \n";
  cin>>n;
  for(int i=1;i<=n-1;i++)
  {
	 cout<<" ";
	  while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<"\n";
  }
}
