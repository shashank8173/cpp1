#include <iostream>
#include <string>
using namespace std;
int main() {
	//Complete the program
    string a1;
    string b1;
    int n1,n2,c=0,c1=0;
    getline(cin,a1);
    getline(cin,b1);
    for(int i=0;a1[i]!='\0';i++)
    {
        if(a1[i]>='a'||a1[i]<='z')
        {
            c+=1;
        }
    }
    for(int i=0;b1[i]!='\0';i++)
    {
        if(b1[i]>='a'||b1[i]<='z')
        {
            c1+=1;
        }
    }
    cout<<c<<"  "<<c1<<endl;
    cout<<a1+b1<<endl;
    for(int i=0;a1[i]!='\0';i++)
    {
      for(int j=0;b1[j]!='\0';j++)
      {
        if(i==0&&j==0)
        {
        	char temp=a1[0];
    	    a1[0]=b1[0];
    	    b1[0]=temp;
		}
	  }
	}
	cout<<a1<<"  "<<b1;      
    return 0;
}
