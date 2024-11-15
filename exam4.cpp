#include<iostream>
using namespace std;
int main()
{
	int no1,no2,choice;
	
	cout<<"Enter first number:";
	cin>>no1;

	cout<<"Enter second number:";
	cin>>no2;	
	
	cout<<"Press 1 for +"<<endl;
	cout<<"Press 2 for -"<<endl;
	cout<<"Press 3 for *"<<endl;
	cout<<"Press 4 for /"<<endl;
	cout<<"Press 5 for %"<<endl;
	
	cout<<"Enter Your Choice";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			   cout<<"Sum of number is"<<no1+no2;
			   break;
		case 2:
			   cout<<"Sum of number is"<<no1-no2;
			   break;
		case 3:
			   cout<<"Sum of number is"<<no1*no2;
			   break;
		case 4:
			   cout<<"Sum of number is"<<no1/no2;
			   break;	
		case 5:
			   cout<<"Sum of number is"<<no1%no2;
			   break;
		default:
			   cout<<"Invalid choice";  		   	   		   
	}

	return 0;
}
