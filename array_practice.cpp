#include<iostream>
using namespace std;
int main()
{
	int a[20],size,i,choice,pos,elem;
	cout<<"Enter the size of array :"<<endl;
	cin>>size;
	cout<<"Enter the elements of array :"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	do
	{
		cout<<"1.Press 1 For view array"<<endl
		<<"2.Press 2 For insert array"<<endl
		<<"3.Press 3 For update array"<<endl
		<<"4.Press 4 For delete array"<<endl
		<<"5.Press 0 For Exit"<<endl;
		cin>>choice;
		
			switch(choice)
		{
			case 1:
				cout<<"Your Array is"<<endl;
				for(i=0;i<size;i++)
				{
					cout<<a[i]<<endl;
				}
				break;
				
			case 2:
				cout<<"Enter position you want to upadte"<<endl;
				cin>>pos;
				cout<<"Enter the position"<<endl;
				cin>>elem;
				for(i=size-1;i>=pos;i--)
				{
					a[i+1]=a[i];
				}
					size++;
					a[pos]=elem;
					cout<<"Your Array Inserted Succesfully"<<endl;
				break;
				
			case 3:
				cout<<"Enter position you want to upadte"<<endl;
				cin>>pos;
				cout<<"Enter the position"<<endl;
				cin>>elem;
				a[pos]=elem;
				cout<<"Your Updation Is Succesfully Done"<<endl;
				break;
				
			case 4:
					cout<<"Enter position you want to upadte"<<endl;
					cin>>pos;
				 for(i=pos; i<size; i++)
                    {
                        a[i-1]=a[i];
                    }
                     size--;
					cout<<"Your Array Delete Succesfully"<<endl;
				break;
				
			default:
				cout<<"Invalid Choice"<<endl;
				break;
		}
	}while(choice != 0);
	
	
	
	
	
	return 0;
}
