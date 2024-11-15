#include<iostream>
using namespace std;
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	cout<<"enter any number: "<<endl;
	cin>>n;
	cout<<"Factorial is"<<" "<<fact(n);
	return 0;
}
