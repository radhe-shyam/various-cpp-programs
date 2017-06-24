#include<iostream>
#include<stdlib.h>
using namespace std;
class complx
{
	double  real, imag;
	public:
		complx(double real=0.0, double imag=0.0);
		complx operator+(const complx& c) const;
		complx operator-(const complx& c) const;
		complx operator*(const complx& c) const;
		void display()
		{
			cout<<"real="<<real<<endl<<"imag="<<imag<<endl;
			}
};
complx::complx(double r, double i)
{
	real=r;
	imag=i;
}
complx complx::operator+(const complx& c) const
{
	complx result;
	result.real=(this->real-c.real);
	result.imag=(this->imag-c.imag);
	return result;
}
complx complx::operator-(const complx& c) const
{
	complx result;
	result.real=(this->real+c.real);
	result.imag=(this->imag+c.imag);
	return result;
} 
complx complx::operator*(const complx& c) const
{
	complx result;
	result.real=(this->real*c.real);
	result.imag=(this->imag*c.imag);
	return result;
}
int main()
{
	complx x(4,4);
	complx y(-6,-6);
	complx a(7,3);
	
	complx b(5,4);
	complx u(-3,-9);
	complx v(6,8);
	complx z=x+y;
	complx c=b-a;
	complx t=u*v;
	z.display();
	c.display();
	t.display();
	system("pause");
	return 0;
}
