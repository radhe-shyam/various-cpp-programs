#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class c1
{
	private:
		int x;
		int y;
	public:
		c1(){
			x=0;
			y=0;
			}
		c1(int a, int b)
		{
			x=a;
			y=b;
		}
	void display()
		{
			cout<<endl<<"x = "<<x<<endl<<"y = "<<y;
		}
	c1 operator +(c1 obj)
		{
			cout<<"\n\nBinary + overloaded\n";
			//c1 result;
			x=x+obj.x;
			y=y+obj.y;
			return *this;
		}
	c1 operator -(c1 obj)
		{
			cout<<"\n\nBinary - overloaded\n";
			c1 result;
			result.x=x-obj.x;
			result.y=y-obj.y;
			return result;
		}
	c1 operator *(c1 obj)
		{
			cout<<"\n\n * overloaded\n";
			c1 result;
			result.x=x*obj.x;
			result.y=y*obj.y;
			return result;
		}
	c1 operator /(c1 obj)
		{
			cout<<"\n\n/ overloaded\n";
			c1 result;
			result.x=x/obj.x;
			result.y=y/obj.y;
			return result;
		}
	void operator +=(c1 obj)
		{
			cout<<"\n\n+= overloaded\n";
			c1 result;
			x=x+obj.x;
			y=y+obj.y;
		}
	void operator -=(c1 obj)
		{
			cout<<"\n\n-= overloaded\n";
			c1 result;
			x=x-obj.x;
			y=y-obj.y;
		}
	void operator *=(c1 obj)
		{
			cout<<"\n\n*= overloaded\n";
			c1 result;
			x=x*obj.x;
			y=y*obj.y;
		}
	void operator /=(c1 obj)
		{
			cout<<"\n\n/= overloaded\n";
			c1 result;
			x=x/obj.x;
			y=y/obj.y;
		}
	bool operator >(c1 obj)
	    {
			cout<<"\n\n> overloaded\n";
			c1 result;
			if ((x+y)>(obj.x+obj.y))
			    return true;
			else
			    return false;
		}
	bool operator <(c1 obj)
	    {
			cout<<"\n\n< overloaded\n";
			c1 result;
			if ((x+y)<(obj.x+obj.y))
			    return true;
			else
			    return false;
		}
	bool operator >=(c1 obj)
	    {
			cout<<"\n\n>= overloaded\n";
			c1 result;
			if ((x+y)>=(obj.x+obj.y))
			    return true;
			else
			    return false;
		}
	bool operator <=(c1 obj)
	    {
			cout<<"\n\n<= overloaded\n";
			c1 result;
			if ((x+y)<=(obj.x+obj.y))
			    return true;
			else
			    return false;
		}
	bool operator ==(c1 obj)
    	{
			cout<<"\n\n== overloaded\n";
			c1 result;
			if ((x+y)==(obj.x+obj.y))
			    return true;
			else
			    return false;
		}
	void operator =(c1 obj)
        {
			cout<<"\n\n= overloaded\n";
			x=obj.x;
			y=obj.y;
		}
	void operator ()(int s)
		{
			cout<<"\n\n() overloaded\n"<<s;
		}
	/*friend void operator ()(c1 obj)
		{
			cout<<"\n\n() overloaded using friend function\n"<<s;
		}*/
	void operator [](int x)
		{
			cout<<"\n\n[] overloaded\n"<<x;
		}
	/*friend void operator [](c1 obj)
		{
			cout<<"\n\n[] Overloaded using friend function\n";
		}*/
	void operator >>(c1 obj)
	    {
			cout<<"\n\n>> overloaded\n";
		}
	friend void operator >>(c1 obj, c1 obj2)
	    {
			cout<<"\n\n>> overloaded using friend function\n";
		}
	void operator <<(c1 obj)
	    {
			cout<<"\n\n<< overloaded\n";
		}
	friend void operator <<(c1 obj, c1 obj2)
	    {
			cout<<"\n\n<< overloaded using friend function";
		}
	friend ostream &operator << (ostream &output, c1 obj)
	    {
			output<<"\n\n<< cout overloaded using friend function\n";
			output<<obj.x<<endl<<obj.y;
			return output;
		}
	friend istream &operator >> (istream &input, c1 obj)
	    {
			cout<<"\n\n>> cin overloaded using friend function\n";
			cout<<"Enter the value : - ";
			input>>obj.x>>obj.y;
			return input;
		}
	void operator ++()
	    {
			cout<<"\n\n++ (pre increment) overloaded\n";
		}
	friend void operator ++(c1 obj)
		{
			cout<<"\n\n++ (pre increment) overloaded using friend function\n";
		}
	void operator ++(int)
		{
			cout<<"\n\n++ (post increment) overloaded\n";
		}
	friend void operator ++(c1 obj, int)
		{
			cout<<"\n\n++ (post increment) overloaded using friend function\n";
		}
};
void* operator new(size_t size)
	    {
			cout<<"\n\nnew operator overloaded\n";
			return malloc(size);
		}
void operator delete(void *p)
		{
            cout<<"\n\ndelete operator overloaded\n";
            free(p);
		}
int main()
{
	c1 a1,a2;
	a1();
	system("pause");
	return 0;
}
