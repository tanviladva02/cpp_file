#include<iostream>
using namespace std;
int main()
{
	int row,col,a[10][10],i,j;
	
	cout<<"Enter the value of row"<<endl;
	cin>>row;
	
	cout<<"Enter the value of column"<<endl;
	cin>>col;
	
	cout<<"Enter array elements"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"Here is your array"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
	
	return 0;
}
