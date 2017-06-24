//Linear Queue using arrays

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
const int size=5;
struct queue
{
int a[size];
int front,rear;
}q;
void insert()
{
int item;
if(q.rear==size-1)
cout<<"\nQueue is full";
else
{
cout<<"\nEnter the item to insert:";
cin>>item;
if(q.rear==-1&&q.front==-1)
{
++q.rear;
++q.front;
q.a[q.rear]=item;
}
else
q.a[++q.rear]=item;
}
}
void del()
{
int item;
if(q.rear==-1||q.front>q.rear)
cout<<"\nQueue is empty";
else
{
item=q.a[q.front];
++q.front;
cout<<"\nDelete item="<<item;
}
}
void display()
{
int temp;
if(q.rear==-1||q.front>q.rear)
cout<<"\nQueue is empty";
else
{
temp=q.front;
cout<<"The content of the queue:\n";
while(temp!=q.rear)
{
cout<<q.a[temp]<<"\t";
++temp;
}
cout<<q.a[temp];
}
}
main()
{
int choice;
q.rear=-1;
q.front=-1;
cout<<"\n1-insert the item\n2-Delete the item\n3-Display\n4-exit\n\n";
do
{
cout<<"\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:
insert();
break;
case 2:
del();
break;
case 3:
display();
break;
}
}while(choice<4);
getch();
}
