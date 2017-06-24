#include<stdio.h>
void main()
{
	int a=0,b=1,c,n;
	printf("Enter the No. of Elements : - ");
	scanf("%d",&n);
	printf("\nFibonacci series of %d elements ",n);
	if (n>0)
	{
	    printf(" %d",a);
		if (n>1)
	    	printf(" %d",b);
	}
	for(;n>2;n--)
	    {
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
		}
	getch();
}
/*
Enter the No. of Elements : - 7

Fibonacci series of 7 elements  0 1 1 2 3 5 8
*/
