#include<iostream>
using namespace std;
int main()
{
	int a[100][100],i,j,n,m,large=1;
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
	
	i=0;
	while(i<n)
	{
		j=0;
		while(j<m)
		{
			if(a[i][j] > large)
			{
				large=a[i][j];
			}
			
			j++;	
		}
		
		i++;
	}
	
	cout<<"Largest Elements of array is :"<<large<<endl;
			
	return 0;
}
