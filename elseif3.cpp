#include<iostream>
using namespace std;

int main()
{
	int no;
	cout<<"Enter Your no"<<endl;
	cin>>no;
	
	if(no>0)
	{
		cout<<"Positive number"<<endl;
	}
	else if(no<0)
	{
		cout<<"Negative number"<<endl;
	}
	else
	{
		cout<<"Zero"<<endl;
	}
	
	return 0;
}
