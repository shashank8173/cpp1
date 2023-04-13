#include <iostream>
using namespace std;
int pattern(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
         for(int l=0;l<=i;l++)
         {
           cout<<"*";
         }
        cout<<"\n";
     }
   for(int i=1;i<=n;i++)
   {
     for(int j=0;j<=i;j++)
      {
        cout<<"*";
      }
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
         for(int l=0;l<=i;l++)
         {
           cout<<"*";
         }
       cout<<"\n";
    }
  
   
}
int main()
{
    int n;
    cin>>n;
    pattern(n);

    return 0;
}