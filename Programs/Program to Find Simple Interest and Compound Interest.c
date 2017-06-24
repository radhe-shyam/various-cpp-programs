#include<stdio.h>
void main()
{
	double amt,rate,time,si,ci;
	printf("Enter the Amount : - ");
	scanf("%lf",&amt);
	printf("Enter the Rate : - ");
	scanf("%lf",&rate);
	printf("Enter the Time : - ");
	scanf("%lf",&time);
	si=(amt*rate*time)/100;
	ci=amt*(pow((1+rate/100),time)-1);
	printf("\n\nSimple Interest = %.2lf\n\nCompount Interest = %.2lf",si,ci);
	getch();
}
/*
Enter the Amount : - 5000
Enter the Rate : - 2.5
Enter the Time : - 3


Simple Interest = 375.00

Compount Interest = 384.45
*/
