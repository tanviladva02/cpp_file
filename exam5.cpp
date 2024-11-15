#include<iostream>
using namespace std;
int main()
{
	char char1,char2,char3;
	cout<<"Enter first value of any character"<<endl;
	cin>>char1;//10
	cout<<"Enter second value of any character"<<endl;
	cin>>char2;//13
	
	char3=char1+char2;//23
	char1=char3-char1;//13
	char2=char3-char2;//10
	
	cout<<char1;
	cout<<char2;
	
	
	return 0;
}
