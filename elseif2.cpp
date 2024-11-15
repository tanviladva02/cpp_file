#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter Your Age"<<endl;
	cin>>age;
	
	if(age>18)
	{
		cout<<"You Can Vote"<<endl;
	}
	else if(age<18)
	{
		cout<<"You can't Vote"<<endl;
	}
	else
	{
		cout<<"you can also vote"<<endl;
	}
	
	return 0;
}
