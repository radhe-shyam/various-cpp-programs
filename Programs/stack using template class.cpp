#include<iostream>
#include<stdlib.h>
#define size 5
using namespace std;
template <class stacktype> class stack
{
	stacktype a[size];
	int top;
	public:
		stack();
		void push(stacktype ob);
		stacktype pop();
};
template <typename stacktype> stack<stacktype>::stack()
{
	top=-1;
}
template <typename stacktype> void stack<stacktype>::push(stacktype ob)
{
	if(top==size-1)
		{
		cout<<"Stack is overflow";
		return;
		}
	else
		{
		top++;
		a[top]=ob;
		cout<<"\nSuccessfully inserted";
		}
}
template <typename stacktype> stacktype stack<stacktype>::pop()
{
	if(top==-1)
		{
			cout<<"\nStack is underflow";
			return 0;
		}
	else
		{
			top--;
			cout<<"\nItem poped successfully";
			return a[top+1];
		}
}
int main()
{
	stack<int> obj;
	obj.push(5);
	cout<<obj.pop();
	return 0;
}

