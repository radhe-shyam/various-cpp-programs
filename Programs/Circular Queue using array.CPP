//Circular Queue using array

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
const int size=10;
struct cqueue
{
int a[size];
int front,rear;
}q;
void insert()
{
int item;
if(q.front==(q.rear+1)%size)
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
{
q.rear=(q.rear+1)%size;
q.a[q.rear]=item;
}
}
}
void del()
{
int item;
if(q.rear==-1)
cout<<"\nQueue is empty";
else
{
if(q.front==q.rear)
{
item=q.a[q.front];
q.rear=q.front=-1;
}
else
{
item=q.a[q.front];
q.front=(q.front+1)%size;
cout<<"\nDelete item="<<item;
}
}
}
void display()
{
int temp;
if(q.rear==-1)
cout<<"\nQueue is empty";
else
{
temp=q.front;
cout<<"The content of the queue:\n";
while(temp!=q.rear)
{
cout<<q.a[temp]<<"\t";
temp=(temp+1)%size;
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
