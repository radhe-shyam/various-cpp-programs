#include<stdio.h>
void main()
{
	int n,r=0;
	printf("Enter any Number : - ");
	scanf("%d",&n);
	printf("\nThe Reverse of %d is ",n);
	while(n>0)
	{
		r=r*10+(n%10);
		n=n/10;
	}
	printf("%d",r);
	getch();
}
/*
Enter any Number : - 982

The Reverse of 982 is 289
*/
