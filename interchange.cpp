#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int n;
	cout<<"Enter the array size: \n";
	cin>>n;
	cout<<"Enter array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"first and last interchange: \n";
	for(int i=0;i<n;i++)
	{
		int temp=arr[0];
		    arr[0]=arr[n-1];
			 arr[n-1]=arr[] ;
			 
		    
		
		cout<<arr[0]<<"  ";
	}
	
	return 0;
}
