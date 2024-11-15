#include<iostream>
using namespace std;
class zoo
{
	public:
		string animal_name;
		int animal_weight;
		string animal_country;
};
class forest
{
	public:
		int animal_age;
		string animal_friend;
};
class mogli:public zoo,public forest{
	public:
		void setdata()
		{
			cout<<"Enter the animal Name:";
			cin>>animal_name;
			cout<<"Enter the animal Weight:";
			cin>>animal_weight;
			cout<<"Enter the animal Country:";
			cin>>animal_country;
			cout<<"Enter the animal Age:";
			cin>>animal_age;
			cout<<"Enter the animal Friend:";
			cin>>animal_friend;
		}
		void getdata()
		{
			cout<<"animal name is :"<<animal_name<<endl;
			cout<<"animal weight is :"<<animal_weight<<endl;
			cout<<"animal country is :"<<animal_country<<endl;
			cout<<"animal age is :"<<animal_age<<endl;
			cout<<"animal friend is :"<<animal_friend<<endl;
		}
	};
int main()
{
	mogli m;
	m.setdata();
	m.getdata();
	return 0;
}
