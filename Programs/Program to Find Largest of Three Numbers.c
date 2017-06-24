#include<stdio.h>
void main()
{
	float a,b,c,res;
	printf("Enter 1st Number : - ");
	scanf("%f",&a);
	printf("Enter 2nd Number : - ");
	scanf("%f",&b);
	printf("Enter 3rd Number : - ");
	scanf("%f",&c);
	res=(a>b?(a>c?a:c):(b>c?b:c));
	printf("\n%.2f is the greatest among %.2f, %.2f and %.2f",res,a,b,c);
	getch();
}
/*
Enter 1st Number : - 12.20
Enter 2nd Number : - 54.09
Enter 3rd Number : - 54.08

54.09 is the greatest among 12.20, 54.09 and 54.08
*/
