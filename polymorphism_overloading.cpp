#include<iostream>
using namespace std;
class animal
{
	public:
	void sound(int a,int b)
	{
		cout<<"sum is ="<<a+b;
	}
	void sound(double c,double d)
	{
		cout<<"sum is ="<<c+d;
	}
};
int main()
{
	animal c;
	c.sound(21.45,54.90);
	return 0;
}
