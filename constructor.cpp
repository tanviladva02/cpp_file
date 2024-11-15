#include<iostream>
using namespace std;
class student
{
	public:
	student()
	{
		cout<<"student...."<<endl;
	}
	~student()
	{
		cout<<"teacher...."<<endl;
	}
	
};
int main()
{
	student s;
	return 0;
}
