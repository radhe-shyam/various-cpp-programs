#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void insert();
void remove();
void view();
int trave();
///int search(int);
struct singlink
{
	int data;
	singlink *next;
}*head, *tail,*temp;

void insert()
{
	int data;
	singlink *p=new singlink();
	cout<<"Enter the Data : -";
	cin>>data;
	if (head==NULL)
	    {
			p->data=data;
			cout<<"\n***Inserted successfully***";
			p->next=NULL;
			head=p;
			tail=p;
		}
	else
	    {
			int ch,i=trave();
			cout<<"\n\n\tPress 1 to insert at beginning";
			cout<<"\n\n\tPress 2 to insert at the end";
			cout<<"\n\n\tPress 3 to insert in middle";
			cout<<"\n\n\tPress any other key to go back\n\n\t\tEnter your choice : -";
			cin>>ch;
			switch(ch)
			    {
					case 1: p->data=data;
							cout<<"\n***Inserted successfully***";
					        p->next=head;
					        head = p;
							break;
					case 2: p->data=data;
							cout<<"\n***Inserted successfully***";
					        tail->next=p;
					        tail = p;
					        tail->next=NULL;
							break;
					case 3:	cout<<"Enter the position from 2 to "<<trave()<<" : - ";
							cin>>ch;
							temp=head;
							while(ch-2)
							    {
									temp=temp->next;
									ch--;
								}
							p->data=data;
							p->next=temp->next;
							temp->next=p;
							break;
					default:
							return;
				}
		}
}

void remove()
{
	int in,n=trave();
	if(head==NULL)
	    cout<<"\n\n\t***Linked List is empty***\n\n";
	else
		{
			cout<<"\nEnter the index number(1 to "<<trave()<<") of the element that you want to delete : - ";
			cin>>in;
			cout<<"\n\n\t***Index Number "<<in;
			temp=head;
			if (in==1)
			    {
				head=head->next;
				delete temp;
				}
			else if(in==n)
			    {
					while(in-2)
						{
						temp=temp->next;
						in--;
						}
					tail=temp;
					delete temp->next;
					tail->next=NULL;
				}
			else if(in>1 && in<n)
			    {
					while(in-2)
					    {
							temp=temp->next;
							in--;
						}
						singlink *del;
						del=temp->next;
						temp->next=del->next;
						//temp->next=temp->next->next;
						delete del;
				}
            cout<<" successfully deleted.***\n\n";
		}
}

void view()
{
	if (head==NULL)
		{
		cout<<"\n\n\n\t\t*****The Linked List is empty******\n\n\n";
	    return;
		}
	else
	    {
		temp=head;
		cout<<temp->data<<"\n";
		while(temp->next!=NULL)
			{
			temp=temp->next;
			cout<<temp->data<<"\n";
			}

		}
}

int trave()
{
	int n=0;
	if (head == NULL)
	    return n;
	else
	    {
		temp=head;
		n++;
		while(temp->next!=NULL)
		    {
				temp=temp->next;
				n++;
			}
		return n;
		}
}
/*
int search(int ele)
{
	int n=0;
	if (head == NULL)
	    return n;
	else
	    {
		temp=head;
		n++;
		while(temp->next!=NULL)
		    {
				temp=temp->next;
				n++;
			}
		}
		return n;
}
*/
int main()
{
	short ch;
	head=NULL;
	tail=NULL;
	do
	{
	cout<<"\n\n\tPress 1 to insert data in List\n\n\tPress 2 to delete data in List\n\n\tPress 3 to view nodes of List\n\n\tPress any other to exit \n\n\t\tEnter Your Choice : - ";
	cin>>ch;
	switch (ch)
	    {
			case 1: insert();
					break;
			case 2: remove();
					break;
			case 3:	view();
					break;
			default:return 0;
		}
	}
	while(1);
	return 0;
}
