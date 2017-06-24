\\Stack using linked list

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int data;
struct stack *next;
};struct stack *list,*top,*nw,*temp;
void push()
{
int item;
cout<<"\nEnter the item to insert:";
cin>>item;
if(list->data=='\0')
{
list->data=item;
list->next='\0';
}
else
{
nw=(struct stack*)malloc(sizeof(struct stack));
nw->data=item;
nw->next=top;
top=nw;
}
}
void pop()
{
int item;
if(top->data=='\0')
{
cout<<"\nlist is empty";
}
else
{
item=top->data;
top=top->next;
cout<<"\nPopped item="<<item;
}
}
void display()
{
if(top->data=='\0')
{
cout<<"\nlist is empty";
}
else
temp=top;
cout<<"\n\nThe list has:";
while(temp!='\0')
{
cout<<"\t"<<temp->data;
temp=temp->next;
}
}
void main()
{
int choice;
clrscr();
list=(struct stack*)malloc(sizeof(struct stack));
top=list;
list->data='\0';
do
{
cout<<"\n\n\n1-Push\n2-Pop\n3-Display\n4-exit";
cout<<"\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
}
}while(choice<4);
}

