#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};

class LinkedList
{
	public:
		Node *head;
		int count;	
		
		LinkedList()
		{
			this->head = NULL;
			count = 0;
		}
		
		void addatbeginning(int data)
		{
			Node *newNode = new Node(data);
			newNode->next=this->head;
			this->head=newNode;
			this->count++;
		}
		
		void addatending(int data)
		{
				Node *newNode = new Node(data);
				if(this->head == NULL)
				{
					this->head = newNode;
				}
				else
				{
					Node *ptr=this->head;
					while(ptr->next != NULL)
					{
						ptr = ptr->next;
					}
					ptr->next = newNode;
				}
				this->count++;
		}
		
		void addatposition(int data,int position)
		{
				Node *newNode = new Node(data);
				if(position == 0)
				{
					newNode->next=this->head;
					this->head=newNode;
				}
				else
				{
					Node *ptr = head;
					for(int i=0;i<position-1;i++)
					{
						ptr=ptr->next;
					}
					newNode->next = ptr->next;
					ptr->next=newNode;
				}
				this->count++;
		}
		
		void viewallnodes()
		{
			Node *ptr = this -> head;
			while(ptr != NULL)
			{
				cout<<ptr->data<<" ";
				ptr = ptr->next;
			}
			cout<<endl;
		}
};

int main()
{
	LinkedList list;
	int choice,element,position;
	
	do
	{
		cout<< "Press 1 for insert a node at the beginning of the list :"<<endl;
		cout<< "Press 2 for insert a node at the ending of the list :"<<endl;
		cout<< "Press 3 for insert a node at the any position of the list :"<<endl;
		cout<< "Press 4 for view all of the list:"<<endl;
		cout<< "press 0 Exit..."<<endl;
		
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter the value of element:"<<endl;
				cin>>element;
				list.addatbeginning(element);
				cout<<"Node inserted at beginning successfully..."<<endl;
				break;
				
			case 2:
				cout<<"Enter the value of element:"<<endl;
				cin>>element;
				list.addatending(element);
				cout<<"Node inserted at ending successfully..."<<endl;
				break;
				
			case 3:
				cout<<"Enter the value of element:"<<endl;
				cin>>element;
				cout<<"Enter the position of element:"<<endl;
				cin>>position;
				list.addatposition(element,position);
				cout<<"Node inserted successfully..."<<endl;
				break;
				
			case 4:
				list.viewallnodes();
				break;	
				
			case 0:
				break;
					
			default:
				cout<<"Invalid value.......";
				break;		
		}
		
	}while(choice != 0);
	
    return 0; 
}
