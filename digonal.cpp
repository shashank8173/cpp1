 #include<iostream>
 using namespace std;
 class matrix
 {
  int *a;
  int n;
  public:
  matrix( int x){
  	n=x;
  	a=new int[x];
  	
  }
   void set(int i, int j, int x);
   int get(int i, int j) ;
   void display();
   int getDimension()
   {
   	return n;
   }
   
   
						
 } ;
 void matrix::set(int i, int j,int x)
 {
 	if (i==j)
 	{
 		a[i-1]=x;
	 }
 }
 int matrix::get(int i, int j)
 {
 	if(i==j)
 	return (a[i-1]) ;
 	else
 	return 0;
 	
 	
 }
 void display (int n)
 {
 	for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<n;i++)
 	{
	 
 	if(i==j)
 	cout<<a[i-1]<<" ";
 	else
 	cout<<"0 ";
 	
 }
 cout<<"\n";
 }
 
 int main()
 {
 	int p,i,j;
 	cout<<"inter the row";
 	cin>>p;
 	matrix d(p);
 	int x;
 	cout<<"inter the diagonal element";
 	for(i=1,j=1;i<=p;j++,i++)
 	{
 		cin>>x;
 		d.set(i,j,x);
	 }
 	d.display(p);
 	
 }
