#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 10
struct stack
{
	int a[size];
	int top;
}st;
int is_empty()
{
	if(st.top==-1)
	    return 1;
	else
	    return 0;
}
int is_full()
{
	if(st.top==size-1)
	    return 1;
	else
	    return 0;
}
void st_push()
{
	int item;
	if(is_full()==1)
	    {
		cout<<"\n\t****Stack is full****";
		}
	else
	    {
			cout<<"Enter the element : - ";
			cin>>item;
			st.top++;
			st.a[st.top]=item;
			cout<<"\n***Item inserted successfully";
		}
		system("pause");

}
void st_pop()
{
	if(is_empty()==1)
		{
	    cout<<"\n****Stack is empty****";
		}
	else
	{
		cout<<st.a[st.top]<<" poped successfully";
		st.top--;
	}
	system("pause");
}
void st_disp()
{
	cout<<"Element of stack\n";
	for(int i=st.top;i>=0;i--)
	    cout<<st.a[i]<<endl;
	system("pause");
}
int main()
{
	st.top=-1;
	int choice;
	start:
	system("cls");
	cout<<"Press 1 to push\nPress 2 to pop\nPress 3 to display\nPress 4 to exit\n\tEnter your choice : - ";
	cin>>choice;
	switch(choice)
	{
		case 1: st_push();
		        break;
		case 2: st_pop();
		        break;
		case 3: st_disp();
		        break;
		case 4: exit(0);
		default: goto start;
	}
	goto start;
	system("pause");
	return 0;
}
