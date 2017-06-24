#include<iostream>
#include<stdlib.h>
using namespace std;
class Singly_Link
{
	struct single_link
	    {
			int data;
			struct single_link *next;
		}*head, *tail;
	public:
	Singly_Link()
	{
		tail=head='\0';
	}
	void insert()
	    {
			system("cls");
			cout<<"Enter the item : - ";
			int item;
			cin>>item;
			single_link *nw=new single_link();
			if(head=='\0')
			    {
					nw->data=item;
					nw->next='\0';
					head=nw;
				}
			else
			    {
					int pos;
					loop:
					cout<<"Enter the position (1 to "<<trave()+1<<") : -";
					cin>>pos;
					if (pos==1)
						{
							nw->next=head;
							nw->data=item;
							head=nw;
						}
					else if (pos>1 && pos<trave()+2 )
					    {
							//int n=pos;
							single_link *temp=new single_link();
       						temp=head;
							while(pos-2)
							{
								pos--;
								temp=temp->next;
							}
							nw->data=item;
							if (pos-1==trave())
								{
							    nw->next='\0';
							    tail=nw;
								}
							else
									nw->next=temp->next;
							temp->next=nw;
						}
					else
					    {
							cout<<"\n\nYou have entered the wrong position...\nPlease enter again...\n";
							goto loop;
						}

				}
			cout<<"\n\nData inserted successfully\n\n";
			system("pause");
		}
	void display()
	{
		if (head=='\0')
			cout<<"Linked List is empty";
		else
		    {
			int n=trave();
			single_link *temp=new single_link();
			temp=head;
			while(n)
		    	{
					n--;
					cout<<endl<<temp->data;
					temp=temp->next;
				}
		//	delete temp;
			}
		cout<<endl;
		system("pause");
	}
		
	int trave()
	{
		if (head=='\0')
		    return 0;
		single_link *temp=new single_link();
		int n=1;
		temp=head;
		while(temp->next!='\0')
		    {
				n++;
				temp=temp->next;
			}
		return n;
		delete temp;
	}
};

int main()
{
	Singly_Link obj;
	int ch;
	do
	{
	system("cls");
	cout<<"\n\n\tPress 1 to Insert Data\n\n\tPress 2 to Delete Data\n\n\tPress 3 to Display\n\n\tPress Any Key to Exit\n\n\t\tEnter Your Choice : - ";
	cin>>ch;
	switch(ch)
	{
		case 1:obj.insert();
				break;
		case 2:
				break;
		case 3:obj.display();
				break;
		default:
				return 0;
	 }
	}while(1);
}
