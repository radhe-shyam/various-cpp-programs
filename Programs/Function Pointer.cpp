#include<iostream>
#include<stdlib.h>
using namespace std;
void hello();
class c1
{
	private:
		int a;
	public:
		void prntadd()
		{
			cout<<"\nThe address of a is "<<&a;
			cout<<"\nThe address of object is "<<this;
		}
};
void hello()
{
	cout<<"This hello function";
}
int main()
{
	void (*p)();
	p=hello;
	cout<<"\nThe address of function hello() is "<<p;
	c1 obj;
	obj.prntadd();
	system("pause");
}
