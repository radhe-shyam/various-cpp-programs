#include<stdio.h>
void main()
{
	float factfun(float), n;
	printf("Enter the Number : - ");
	scanf("%f",&n);
	printf("The Factorial of %f is %f",n,factfun(n));
	getch();
}
float factfun(float n)
{
	float fact=n;
	if(n>1)
		{
			n--;
			fact=fact*factfun(n);
		}
	return(fact);
}
