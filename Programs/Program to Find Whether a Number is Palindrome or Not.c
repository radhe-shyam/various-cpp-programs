#include<stdio.h>
void main()
{
	int n,d,p=0;
	printf("Enter the Number : - ");
	scanf("%d",&n);
	d=n;
	while(n>0)
	{
		p=p*10+(n%10);
		n=n/10;
	}
	if (d==p)
	    printf("\n%d is a Palindrome Number",d);
	else
	    printf("\n%d is not a Palindrome Number",d);
	getch();
}

/*
Enter the Number : - 151

151 is a Palindrome Number
*/
