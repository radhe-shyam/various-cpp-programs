#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 10
class queue
{
	int data[size],front,rear;
	public:
	queue();
	void insert();
	void remove();
	int is_full();
	int is_empty();
	void display();
	void search();
};
queue::queue()
{
	front=rear=-1;
	short ch;
	start:
	system("cls");
	cout<<"\n\tPress 1 to insert element is Queue\n\n\tPress 2 to remove data from Queue\n\n\tPress 3 to view data in Queue\n\n\tPress 4 to search element in Queue\n\n\tPress any other key exit\n\n\t\tEnter your choice : - ";
	cin>>ch;
	switch(ch)
	{
		case 1: insert();
				break;
		case 2: remove();
				break;
		case 3: display();
				break;
		case 4: search();
				break;
		default: return;
	}
	goto start;
}
inline int queue::is_empty()
{
	if(front==-1)
	    return 1;
	else
	    return 0;
}
inline int queue::is_full()
{
	if(rear==size-1)
	    return 1;
	else
	    return 0;
}
void queue::insert()
{
	system("cls");
	if(is_full())
			cout<<"*******Queue is Full*******\n\n\n";
	else
	    {
			rear++;
			cout<<"Enter the element : - ";
			cin>>data[rear];
			if(is_empty())
			    front++;
			cout<<"\n\n******Element inserted successfully******\n\n\n";
		}
	system("pause");
}
void queue::remove()
{
	system("cls");
	if(is_empty())
	    cout<<"******Quere is empty******\n\n\n";
	else
	    {
			cout<<data[front]<<" element removed\n\n\n";
			if(front==rear)
			    {
					front=rear=-1;
				}
			else
				front++;
		}
	system("pause");
}
void queue::display()
{
	system("cls");
	if(is_empty())
	    cout<<"******Queue is empty******\n\n\n";
	else
	    {
			cout<<"******Elements of Queue*****\n";
			for(short i=front;i<=rear;i++)
				cout<<"["<<data[i]<<"]";
			cout<<"\n\n\n";
		}
	system("pause");
}
void queue::search()
{
	system("cls");
	if(is_empty())
	    cout<<"******Quere is empty******\n\n\n";
	else
	    {
			int ele;
			cout<<"Enter the element to search : - ";
			cin>>ele;
			for(short i=front;i<=rear;i++)
			    {
					if(ele==data[i])
					    {
							cout<<"\nElement found at "<<i-front+1<<" position\n\n\n";
							system("pause");
							return;
						}
				}
			cout<<"\n******Element not found in Queue******\n\n\n";
		}
	system("pause");
}
int main()
{
	queue obj;
	return 0;
}
