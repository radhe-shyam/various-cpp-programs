#include<iostream>
#include<stdlib.h>
using namespace std;
class c1
{
	public:
	void display(){cout<<"\nthis is c1";
	}
};
class c2:public virtual c1
{
	public:
	void idisplay(){
		cout<<"\nthis is c2";
	}
};
class c3:public virtual c1
{
	public:
		void jdisplay()
		{
			cout<<"\nThis is c3";
		}
};
class c4:public c2, public c3
{
	public:
};
int main()
{
	c4 obj;
	obj.display();
	system("pause");
	return 0;
}
