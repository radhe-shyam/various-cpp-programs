#include<stdio.h>
void main()
{
	int num,i=2,s=0;
	printf("Enter any Number : - ");
	scanf("%d",&num);
	while(i<=num/2)
	    {
			if (num%i==0)
			    s++;
			i++;
		}
	if (s>0)
	    printf("\nThis is not a Prime Number");
	else
	    printf("\nThis is a Prime Number");
	getch();
}
/*
Enter any Number : - 87

This is not a Prime Number
*/
