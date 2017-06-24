#include<stdio.h>
int hcf(int, int);
void main()
{
	int a,b;
	printf("Enter 1st Numbers : - ");
	scanf("%d",&a);
	printf("Enter 2nd Numbers : - ");
	scanf("%d",&b);
	printf("\nThe HCF of %d and %d is %d",a,b,hcf(a,b));
	getch();
}
int hcf(int a, int b)
{
	if (a%b==0)
	    return b;
	else
	    return hcf(b,a%b);
}
/*
Enter 1st Numbers : - 15
Enter 2nd Numbers : - 145

The HCF of 15 and 145 is 5

*/
/*
This is my logic
int hcf(int a, int b, int i)
{
	if(i==0)
	{
 		if (a>b)
     		i=b;
 		else
     		i=a;
	}
 	if (a%i==0 && b%i==0)
    	return i;
 	else
    	return hcf(a,b,--i);
}
*/
