#include<iostream>
using namespace std;
int main()
{
	char char1,char2,char3;
	cout<<"Enter first value of any character:";
	cin>>char1;
	cout<<"Enter second value of any character:";
	cin>>char2;
	
	if(char1 < 'M'|| char2 < 'M')
	{
		cout<<" Enter a character less than 'M' ";
	}
	else
	{
		char3=char1+char2;
		char1=char3-char1;
		char2=char3-char2;
	
		cout<<"Here is your swaping characters:"<<endl;
	
		cout<<"value of first character is:"<<char1<<endl;
		cout<<"Value of second character is:"<<char2<<endl;
	}
	
	return 0;
}
