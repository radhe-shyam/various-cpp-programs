#include<stdio.h>
void main()
{
	double bs,ns,hra,da,pf;
	printf("Enter the Basic Salary : - ");
	scanf("%lf",&bs);
	hra=bs*0.1; //HRA is 10% of Basic Salary
	da=bs*0.05; //DA is 5% of Basic Salary
	pf=bs*0.2; //PF is 15% of Basic Salary
	ns=bs+hra+da-pf;
	printf("\nHRA = %.2lf\nDA = %.2lf\nPF = %.2lf\nNet Salary = %.2lf",hra,da,pf,ns);
	getch();
 }

/*
Enter the Basic Salary : - 45000

HRA = 4500.00
DA = 2250.00
PF = 9000.00
Net Salary = 42750.00
*/
