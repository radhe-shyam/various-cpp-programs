#include<stdio.h>
void main()
{
	int i,l,j;
	printf("Enter any number between 0 to 10 : - ");
	scanf("%d",&l);
	printf("\n");
	for(i=1;i<=l;i++)
		{
			for(j=1;j<i;j++)
			    printf("%d",j);
			for(;j>0;j--)
			    printf("%d",j);
			printf("\n");
		}
	getch();
}
/*
Enter any number between 0 to 10 : - 9

1
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321

*/
