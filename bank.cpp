#include<iostream>
using namespace std;
class bank
{
	public:
		int id;
		string name;
		int balance;
		
		public:
		int Balance(int balance)
		{	
			this->balance=balance;
			cout<<"Your Balance is :"<<balance;	
		
		}	
};
class account:public bank
{
		public:
		int Balance(int balance)
		{	
			this->balance=balance;
			cout<<"Your Balance is :"<<balance;	
		
		}	
};
class saving_account:public bank
{
	
};
class current_account:public account,public saving_account
{
	
};
int main()
{
	account c;
	c.Balance(200);
	return 0;
}
