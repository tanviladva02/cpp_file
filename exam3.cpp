#include<iostream>
using namespace std;
int main()
{
	int base_amount,total_amount;
	cout<<"Enter Base Amount:"<<endl;
	cin>>base_amount;
	
	total_amount=base_amount+(base_amount*0.18);
	cout<<"Your Total Amount is "<<total_amount;
	return 0;
}
