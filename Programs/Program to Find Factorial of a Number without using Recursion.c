#include<stdio.h>
void main()
{
	int fact=1,n;
	printf("Enter any Number : - ");
	scanf("%d",&n);
	printf("\nFactorial of %d is ",n);
	while(n>1)
	{
		fact=fact*n;
		n--;
		
	}
	printf("%d",fact);
	getch();
}
/*
Enter any Number : - 7

Factorial of 7 is 5040
*/
