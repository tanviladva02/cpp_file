#include<iostream>
using namespace std;
//sum of first and last digit
int main(){
	
	int num,first,last,sum=0;
	
	cout<<"Enter any number:"<<endl;
	cin>>num;
	
	last=num%10;
	while(num >= 10){
		num = num/10;
		
	}
	first = num;
	
	sum=first + last;
	
	cout<<"sum of first & last digit:"<<sum<<endl;
	
	return 0;
}
