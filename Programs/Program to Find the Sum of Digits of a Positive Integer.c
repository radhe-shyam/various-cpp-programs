#include<stdio.h>
void main()
{
	unsigned long int num,sum=0;
	printf("Enter any Positive Integer : - ");
	scanf("%ld",&num);
	while(num)
	    {
			sum=sum+num%10;
			num=num/10;
		}
	printf("\nSum of digit is %ld",sum);
	getch();
}
/*
Enter any Positive Integer : - 123456789

Sum of digit is 45
*/
