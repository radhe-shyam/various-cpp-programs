//Stack using array

#include<iostream.h>
#include<conio.h>
class stack
{
int i,top,s[50],temp,n;
public:
stack()
{
top=0;
}
void get();
void push(int item)
{
if(top==n)
cout<<"\nStack is full \n";
else
{
top++;
s[top]=item;
cout<<"\nPushed item "<<item<<endl;
}
}
void pop()
{
if(top==0)
cout<<"\nStack is empty \n";
else
{
temp=s[top];
top--;
cout<<"\nPoped item : "<<temp;
}
}
void display();
};
void stack::get()
{
cout<<"\n\nEnter the size of stack:";
cin>>n;
for(int i=0;i<n;i++)
s[i]=s[n];
}
void stack::display()
{
for(i=top;i>0;i--)
cout<<" "<<s[i]<<",";
}
main()
{
stack s1;
int choice,st;

s1.get();
cout<<"\n1-Push\n2-Pop\n3-Display\n4-Exit";
do
{
cout<<"\nEnter your choice :";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\nEnter any element : ";
cin>>st;
s1.push(st);
break;
case 2:
s1.pop();
break;
case 3:
s1.display();
break;
}
}while(choice<4);
getch();
}
