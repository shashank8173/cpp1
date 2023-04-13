
#include <iostream>
using namespace std;
int In_wave_form(int arr[][3],int r,int c)
{
    for(int col=0;col<c;col++)
    {
        if(col&1)
        {//odd index bottom to top
            for(int row=r-1;row>=0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        else//even index top to bottom
        {
            for(int row=0;row<3;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        cout<<"\n";
    }
}                                                    
int main()
{
    int arr[3][3];
	cout<<"Enter the elements: "<<endl;
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cin>>arr[row][col];
		}
	}
	cout<<"In a wave form: \n";
	In_wave_form(arr,3,3);
    return 0;
}
//input:
//	1 4 7
//	2 5 8
//	3 6 9
//output: in waveform
//	1 6 7
//	2 5 8
//	3 4 9
