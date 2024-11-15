#include<iostream>
using namespace std;
int main()
{
	
	//pointer
	
//	int *ptr;
//	int a=10;
//	ptr=&a;
//	
//	cout<<*ptr<<endl;
	
//	array of pointer

	int a[5]={5,8,3,2,4};
	int *p[5],i;
	
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<*p[i]<<" ";
	}
	
	
	return 0;
}
