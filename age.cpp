#include<iostream>
using namespace std;
int main()
{
	int b_year,year=2024,age;
	cout<<"Enter Your Birthday Month to Know Your Age :"<<endl;
	cin>>b_year;
	age=year-b_year;
	cout<<"Your age is "<<age;
	if(age>=18)
	{
		cout<<"you can vote :-)";
	}
	else
	{
		cout<<"you can't vote yet :-(";	
	}
	return 0;
}
