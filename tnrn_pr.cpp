#include<iostream>
using namespace std;
void sum(int a,int b)
{
	cout<<a+b<<endl;
}
void abstrac(int a,int b)
{
	cout<<a-b<<endl;
}
void mul(int a,int b)
{
	cout<<a*b<<endl;
}
void div(int a,int b)
{
	
	cout<<a/b<<endl;
}
void mod(int a,int b)
{
	cout<<"Enter the value of a and b :"<<endl;
	cin>>a>>b;
	cout<<a%b<<endl;
}
int main()
{
	int choice,a,b;
	
	do{
		cout<<"Press 1 for sub "<<endl
			<<"Press 2 for abstraction"<<endl
			<<"Press 3 fo multiplication"<<endl
			<<"Press 4 for division"<<endl
			<<"Press 5 for modular"<<endl
			<<"Press 0 for exit"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter the value of a and b :"<<endl;
				cin>>a>>b;
				
				break;
			case 2:
				cout<<"Enter the value of a and b :"<<endl;
				cin>>a>>b;
				void abstrac(int,int);
				break;
			case 3:
				cout<<"Enter the value of a and b :"<<endl;
				cin>>a>>b;
				
				void mul(int,int);
				break;
			case 4:
				cout<<"Enter the value of a and b :"<<endl;
				cin>>a>>b;
				void div(int,int);
				break;
			case 5:
				cout<<"Enter the value of a and b :"<<endl;
				cin>>a>>b;
				void mod(int,int);
				break;
			case 0:
				break;		
			default:
				cout<<"Invalid choice";
				break;
			}	

	}while(choice != 0);
	return 0;
}
