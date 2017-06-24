#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the Value for A : - ");
	scanf("%d",&a);
	printf("Enter the Value for B : - ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nNow the Value for A is %d and for B is %d",a,b);
	getch();
}

/*
Enter the Value for A : - 12
Enter the Value for B : - 23

Now the Value for A is 23 and for B is 12
*/
