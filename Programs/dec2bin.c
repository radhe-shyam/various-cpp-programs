#include<stdio.h>
void main()
{
	int a,b[20],c,i,j;
	printf("Enter the Number in Decimal number system : - ");
	scanf("%d",&a);
	c=a;
	i=0;
	while(c>0)
	{
		b[i]=c%2;
		c=c/2;
		i++;
	}
	printf("\n\nthe binary number is ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",b[j]);
	}
	getch();
}
