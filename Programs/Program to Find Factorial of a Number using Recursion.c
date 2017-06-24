#include<stdio.h>
int fact(int n, int f);
void main()
{
	int n;
	printf("Enter the Number : - ");
	scanf("%d",&n);
	printf("\nThe Factorial of %d is %d",n,fact(n,1));
	getch();
}
int fact(int n, int f)
{
	if (n==1)
			return f;
	else
			f=fact(n-1,f)*n;
			return f;
}
/*
Enter the Number : - 7

The Factorial of 7 is 5040
*/
