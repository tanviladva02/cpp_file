#include<iostream>
using namespace std;

int main()
{
	int no;
	cout<<"Enter Your no"<<endl;
	cin>>no;
	
	if(no>0)
	{
		cout<<"Your Number is positive"<<endl;
	}
	else if(no<0)
	{
		cout<<"Your Number is negative"<<endl;
	}
	else
	{
		cout<<"Number is Zero"
	}
	
	return 0;
}
