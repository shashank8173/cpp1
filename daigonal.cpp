#include<iostream>
using namespace std;
class daigonals
{
    int n,*a;
    public:
    daigonals( int n)
    {
        this->n;  
		    a= new int[n];
		}
    void set(int i,int j,int x)
    {
        if(i==j)
        a[i-1]=x;
        
    }
    int get(int i,int j)
    {
		if(i==j)
		return(a[i-1]);
		return(0);
		
	}
	void display()
	{
		 for(int i=1;i<=n;i++)
		 for(int j=1;j<=n;j++)
		 {
		 	if(i==j)
		 	cout<<a[i-1];
		 	else
		 	cout<<"0";
		 	
		 }
		 cout<<"\n";
	}
	
    

};

int main()
{
    int x,y,i,j;
    cout<<"enter the row";
    cin>>x;
    daigonals d(x);
    for(i=1;i<=x;i++)
    
    for( j=1;j<=x;j++)
    {
    	if(i==j)                  
        cin>>y;
        d.set(i,j,x);
    }

	d.get(int i,int j);
	d.display();
	return(0);

}

