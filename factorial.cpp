#include<iostream>
using namespace std;
int main()
{
    int factorial(int);
    int fact,value;
    cin>>value;
    fact=factorial(value);
    cout<<fact;
    return 0;
}
int factorial(int n)
{
    if(n<0)
    {
        return -1;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
