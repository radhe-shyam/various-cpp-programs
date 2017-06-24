#include<stdio.h>
void main()
{
	long int sum,d,n=1,i=0,lm;
	printf("Enter the Limit : - ");
	scanf("%ld",&lm);
	while(lm>i)
	{
	d=n;
	sum=0;
	while(n>0)
	    {
			sum=sum+pow(n%10,3);
			n=n/10;
		}
	if (sum==d)
	{
	    printf("%ld\n",d);
		i++;
	}
 	n=++d;
	}
	getch();
}
