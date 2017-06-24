#include<stdio.h>
void main()
{
	float x;
	int lim;
	printf("Enter the Value for X : - ");
	scanf("%f",&x);
	printf("Enter the Limit : - ");
	scanf("%d",&lim);
	printf("\nSin(%.2f) = ",x);
	if (lim%2==0)
	    printf("0");
	else
	    printf("%.2f",x);
	getch();
}
/*
Enter the Value for X : - 3.26
Enter the Limit : - 7

Sin(3.26) = 3.26
*/
