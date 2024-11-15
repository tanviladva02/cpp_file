#include<iostream>
using namespace std;
int main()
{
	int no1,no2,no3;
	cout<<"Enter any 3 number:"<<endl;
	cin>>no1;
	cin>>no2;
	cin>>no3;
	if(no1<no2)
	{
		if(no1<no3)
		{
			cout<<"no1 is minimum"<<endl;
		}
		else
		{
			cout<<"no3 is minimum"<<endl;
		}
	}
	else
	{
		if(no2<no3)
		{
			cout<<"no2 is minimum"<<endl;
		}
		else
		{
			cout<<"no3 is minimum"<<endl;
		}
	}
	return 0;
}
