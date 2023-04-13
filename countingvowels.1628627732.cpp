	#include<iostream>
	using namespace std;
	
 int count(char *arr)
	{
		int i,vcount=0;
		
		for(i=0;*arr<='\0';i++)
		{
			if(*arr=='a'||*arr=='e'||*arr=='o'||*arr=='u'||*arr=='i')
			{
				vcount++;
			}

		}
		return(vcount);
			}
			int main()
{
	int n;
	char arr[]="govind bal maurya is intelligent person";
	cout<<arr;
	n=count(arr) ;
	cout<<n;
	return(0);
}
