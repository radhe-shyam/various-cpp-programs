#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
public:
struct node
{
	int data;
	struct node *next;
}*top,*nw;
int is_empty()
{
	if(top==NULL)
	    return 1;
	else
		return 0;
}
void st_push()
{
	system("cls");
	int item;
	nw=new node;
	cout<<"Enter the element : - ";
	cin>>item;
	nw->data=item;
	if(top!=NULL)
	    {
			nw->next=top;
			top=nw;
		}
	else
	    {
			nw->next=NULL;
			top=nw;
		}
	cout<<"\n****Item inserted successfully****";
	system("pause");
}
void st_pop()
{
	system("cls");
	if(is_empty())
		{
			cout<<"****Stack is empty*****";
		}
	else
	    {
			struct node *temp;
			temp=top;
			top=top->next;
			cout<<temp->data<<" is poped";
			delete temp;
		}
	system("pause");
}
void st_disp()
{
	system("cls");
	if(is_empty())
	    cout<<"Stack is empty";
	else
	    {
		struct node *temp;
		temp=top;
		cout<<"\n***Elements of Stack***\n";
		while(temp->next)
		    {
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		cout<<temp->data<<endl;
		}
	system("pause");
}
};
int main()
{
	stack obj;
	int ch;
	start:
	system("cls");
	cout<<"Press 1 to push\nPress 2 to pop\nPress 3 to display\nPress 4 to exit\n\tEnter Your choice : - ";
	cin>>ch;
	switch(ch)
	{
		case 1: obj.st_push();
		        break;
		case 2: obj.st_pop();
		        break;
		case 3: obj.st_disp();
		        break;
		case 4: exit(0);
	}
	goto start;
}
