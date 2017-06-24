#include<stdio.h>
void main()
{
	int a,b,n;
	printf("Enter 1st Numbers : - ");
	scanf("%d",&a);
	printf("Enter 2nd Numbers : - ");
	scanf("%d",&b);
	printf("\nThe HCF of %d and %d is ",a,b);
	if (a>b)
	    n=b;
	else
	    n=a;
	while(n>1)
	    {
			if(a%n==0 && b%n==0)
				{
				printf("%d",n);
				getch();
				exit(0);
				}
				n--;
		}
	printf("1");
	getch();
}
/*
Enter 1st Numbers : - 45
Enter 2nd Numbers : - 95

The HCF of 45 and 95 is 5
*/
