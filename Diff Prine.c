#include <stdio.h>

//Range Function
void range (int m,int n)
{
	if (m<n){
		for(int i=0;m<=n;i++) {
			int arr[300];
			arr[i]= m;
			m++;
		}
		
	}
	else 
	printf("The first no. should be less than the second.");
}
 
//prime function
int prime(int b)
{
    int j,count;
    count=1;
 
    for(j=2;j<=b/2;j++)
    {
        if(b%j==0)
        count=0;
    }
 
    if(count==0)
        return 1;
    else
        return 0;
}
 
//main
int main() {
    int i,j,n,m,r,count,c,sum=0,var=0,k=0;
    printf("Enter The Size: ");
	scanf("%d",&n);
	printf("Enter The M: ");
    scanf("%d",&m);
    printf("Enter The N: ");
	scanf("%d",&r);
    int a[100];
	 a[100]=range(m,r);
     
        for(i=2;i<=n;i++)
        {
            count=1;
            for(j=2;j<=n/2;j++)
            {
            if(i%j==0)
            cnt=0;
            }
             
            if(count==1)
            {
            a[k]=i;
            k++;
            }
        }
         
        for(i=0;i<k;i++)
        {
            sum=sum+a[i];
            c = prime(sum); //calling the function prime
            if(c==1)
            var++;
        }
         
printf("%d",var);
 
return 0;
}