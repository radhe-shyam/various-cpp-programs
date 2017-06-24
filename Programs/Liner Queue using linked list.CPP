//Liner Queue using singly linear linked list

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};struct node *front,*rear,*nw,*temp;
void insertion()
{
int item;
cout<<"\nEnter the item :";
cin>>item;
if(rear->data==NULL)
{
rear->data=item;
rear->next=NULL;
}
else
{
nw=(struct node*)malloc(sizeof(struct node));
nw->data=item;
nw->next=NULL;
rear->next=nw;
rear=nw;
}
}
void deletion()
{
int item;
if(front->data==NULL)
cout<<"\nQueue is Empty";
else
{
temp=front;
item=front->data;
front=front->next;
free(temp);
cout<<"\nThe deleted item is "<<item;
}
}
void display()
{
if(rear->data==NULL)
cout<<"\nQueue empty";
else
{
temp=front;
cout<<"\nQueue contains:\n";
while(temp!=rear)
{
cout<<temp->data<<endl;
temp=temp->next;
}
cout<<temp->data;
}
}
main()
{
int choice;
nw=(struct node*)malloc(sizeof(struct node));
nw->data=NULL;
nw->next=NULL;
front=rear=nw;
cout<<"\n1-Insertion\n2-Deletion\n3-Display\n4-Exit\n";
do
{
cout<<"\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:
insertion();
break;
case 2:
deletion();
break;
case 3:
display();
break;
default:
exit(0);
}
}while(1);
}
