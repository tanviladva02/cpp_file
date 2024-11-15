#include<iostream>
using namespace std;
int main()
{
	int a[100][100],i,j,n,m;
	cout<<"Enter the size of row:"<<endl;
	cin>>n;

	cout<<"Enter the size of column:"<<endl;
	cin>>m;
	
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	if(n == m)
	{
		cout<<"Transpose of Matrix is :"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<a[j][i]<<" ";
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"Your Entered Array is not Square Matrix"<<endl;
	}
			
	return 0;
}
