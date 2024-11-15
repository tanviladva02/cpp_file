#include<iostream>
using namespace std;
int main()
{
	int no,i,sum=0,size;
	cout<<"How many digits has numbers"<<endl;
	cin>>size;
	cout<<"Enter Any Number :"<<endl;
	cin>>no;
	


	for(i=0;i<=size-1;i++)
	{
		if(no != 0)
		{
			
			int ld=no/10;
			sum=sum+ld;
		}
	}
	
	cout<<sum<<endl;
	
	return 0;
}
