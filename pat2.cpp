#include<iostream>
using namespace std;
/*

1
2 3 
4 5 6 
7 8 9 10
11 12 13 14 15

*/
int main()
{
	int i,j,n=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<n<<" ";
			n++;
		}
		cout<<endl;
	}
	
	return 0;
}
