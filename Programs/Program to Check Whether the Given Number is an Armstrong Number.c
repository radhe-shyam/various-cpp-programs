#include<stdio.h>
void main()
{
	int n,sum=0,d;
	printf("Enter the Number : - ");
	scanf("%d",&n);
	d=n;
	while(n>0)
	    {
			sum=sum+pow(n%10,3);
			n=n/10;
		}
	if (sum==d)
	    printf("\n%d is a Armstrong Number",d);
	else
	    printf("\n%d is not a Armstrong Number",d);
	getch();
}
 /*
Enter the Number : - 153

153 is a Armstrong Number
 */
