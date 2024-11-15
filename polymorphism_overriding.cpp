#include<iostream>
using namespace std;
class animal
{
	public:
	void sound()
	{
		cout<<"animal sound loud...";
	}
};
class cat:public animal
{
	public:
		void sound()
		{
			cout<<"cat sound meowww...";
		}
};
int main()
{
	cat c;
	c.sound();
	return 0;
}
