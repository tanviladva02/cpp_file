#include<iostream>
#include<string>
using namespace std;
class employee
{
	public:
		int salary;
		char name;
		static char company[50];
		
	public:
		void display()
		{
			cout<<"Enter your salary:";
			cin>>salary;
			cout<<"Enter your name:";
			cin>>name;	
		}
		void get()
		{
			cout<<"Your name is=>"<<name;
			cout<<"Your Salary is=>"<<salary;
			cout<<"Your company is=>"<<company;	
		}	
};

char employee::company[50]="Amazon";
//class HRManager:public employee
//{
//	public:
//	int GRID;
//	
//	public:
//		void set()
//		{
//			cout<<"Enter HRManager your GRID:";
//			cin>>GRID;	
//		}
//		void show()
//		{
//			cout<<"Your HRManager GRID is=>"<<GRID;
//			cout<<"HRManager's company is=>"<<company;			
//		}
//};
int main()
{
	
		
	cout<<"company name is "<<employee::company;	
	return 0;
}
