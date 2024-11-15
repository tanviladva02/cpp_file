#include<iostream>
using namespace std;
int main()
{
	int a[100],i,starting,ending,avg,sum=0,count=0;
	cout<<"Enter the starting point of array"<<endl;
	cin>>starting;
	
	cout<<"Enter the ending point of array"<<endl;
	cin>>ending;
	
	cout<<"Odd Elements are :"<<endl;
	
	for(i=starting;i<=ending;i++)
	{
		a[i]=i;
		
		if(a[i]%2==1)
		{
			cout<<a[i]<<" ";
			sum=sum+a[i];
			count++;
		}
		cout<<endl;
	}
	
	avg=sum/count;
	cout<<"avg is :"<<avg<<endl;
	
	return 0;
}
