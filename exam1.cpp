#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter 0 or greater number:"<<endl;
	cin>>no;
	(no>0)?
	
		(no%2==1)? cout<<"Number is odd"<<endl
			   	: cout<<"Number is even"<<endl
		
		:
			cout<<"Number is less than zero or zero";
	return 0;
}
