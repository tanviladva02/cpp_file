#include<iostream>
using namespace std;
int a=45;
class square
{
	public:
		int a=90;
		
	public:
		void setter()
		{
			cout<<"Enter any number:"<<endl;
			cin>>a;	
		}	
		void getter()
		{
			cout<<"square of this number is :"<<a*a<<endl;
		}
};
int main()
{
//	square s;
//	s.setter();
//	s.getter();
int a=95;
cout<<::a;
	return 0;
}
