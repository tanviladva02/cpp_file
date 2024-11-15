#include<iostream>
using namespace std;
class arith
{
	public:
	int a,b;
	
	public:
		void add(int a,int b)
		{
			this->a=a;
			this->b=b;
			
			cout<<"value of a is ="<<a;	
			cout<<"value of b is ="<<b;
		} 
		void sub(int a,int b)
		{
				
		}	
};
int main()
{
	arith a;
	a.add(10,20);
	
	return 0;
}
