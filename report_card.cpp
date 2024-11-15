#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		int GRID;
		char name[50];
		int rollno;
		int size;
		
	public:
		void setter()
		{
			cout<<"Enter student's Details"<<endl;;
			
				cout<<"Enter GRID"<<endl;
				cin>>GRID;
				cout<<"Enter name"<<endl;
				cin>>name;
				cout<<"Enter Roll no"<<endl;
				cin>>rollno;		
		}	
		void getter()
		{
			cout<<"Here is your report card :"<<endl;
			
			
				cout<<GRID<<endl;
				cout<<name<<endl;
				cout<<rollno<<endl;		
		}	
};
int main()
{
	student s1;
	s1.setter();
	s2.setter();
	s1.getter();
	student s2;
	s2.getter();
	return 0;
}
