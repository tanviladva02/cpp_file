#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		int grid;
		char name[100];
		int roll_no;
		char course[100];
		float percentage;
};

int main()
{
		Student s1;
		     	cout<<"Enter GRID:"<<endl;
				cin>>s1.grid;
				cout<<"Enter Name:"<<endl;
				cin>>s1.name;
				cout<<"Enter Roll Number:"<<endl;
				cin>>s1.roll_no;
				cout<<"Enter Course:"<<endl;
				cin>>s1.course;
				cout<<"Enter Percentage:"<<endl;
				cin>>s1.percentage;
				
				
				
		Student s2;
		     	cout<<"Enter GRID:"<<endl;
				cin>>s2.grid;
				cout<<"Enter Name:"<<endl;
				cin>>s2.name;
				cout<<"Enter Roll Number:"<<endl;
				cin>>s2.roll_no;
				cout<<"Enter Course:"<<endl;
				cin>>s2.course;
				cout<<"Enter Percentage:"<<endl;
				cin>>s2.percentage;		

		cout<<"GRID:"<<s1.grid<<endl;
		cout<<"Name:"<<s1.name<<endl;
		cout<<"Roll Number:"<<s1.roll_no<<endl;
		cout<<"Course:"<<s1.course<<endl;
		cout<<"Percentage:"<<s1.percentage<<endl;
		
		

		cout<<"GRID:"<<s2.grid<<endl;
		cout<<"Name:"<<s2.name<<endl;
		cout<<"Roll Number:"<<s2.roll_no<<endl;
		cout<<"Course:"<<s2.course<<endl;
		cout<<"Percentage:"<<s2.percentage<<endl;
	
	
	return 0;
}
