/*
Write a Program to print a given pattern using nested while loop only.
@ @ @ @ @ @ @ @ @ @
%  % %  %  %  %  % %  %
@ @ @ @ @ @ @ @
%  % %  %  %  %  %
@ @ @ @ @ @
%  % %  %  %
@ @ @ @
%  % %
@ @
%
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=10;j>=i;j--)
		{
			if(i%2==1)
			{
				cout<<"@ ";
			}
			else
			{
					cout<<"% ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
