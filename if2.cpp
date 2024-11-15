#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter Your Age"<<endl;
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You Can Vote"<<endl;
	}
	else
	{
		cout<<"You can't Vote"<<endl;
	}
	
	return 0;
}
