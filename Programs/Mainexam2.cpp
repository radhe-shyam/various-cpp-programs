#include<iostream>
#include<stdlib.h>
using namespace std;
void myfunction(int& x, int* y, int* z)
{
	static int temp;
	temp+=(temp+temp)+1;
	x+=*(y++ + *z)+temp- ++ temp;
	*y=x;
	x=temp;
	*z=x;
	cout<<"x="<<x<<endl<<"y="<<*y<<endl<<"z="<<*z<<endl;
	cout<<"temp="<<temp<<endl;
}
int main()
{
	int i=0;
	int j[]={0,1,2,3,4,5,6,7};
	myfunction(i,j,&i);
	i=i++ - ++i;
	cout<<"i="<<i<<endl;
	i=--i + ++i;
	myfunction(i,j,&i);
	cout<<"i="<<i<<endl;
	system("pause");
	return 0;
}
