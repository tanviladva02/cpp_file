#include<iostream>
using namespace std;
class friend
{
	public:
		
	void trust(int a)
	{
		cout<<"Trust is strong..."<<endl;	
	}
	void trust(char f)
	{
		cout<<"Trust is broken..."<<endl;	
	}	
};
int main()
{
	friend f;
	f.trust(2);
	return 0;
}
