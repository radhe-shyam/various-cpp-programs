#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the Value for A : - ");
	scanf("%d",&a);
	printf("Enter the Value for B : - ");
	scanf("%d",&b);
	a+=b;
	b=a-b;
	a-=b;
	printf("\nNow the Value for A is %d and for B is %d",a,b);
	getch();
}

/*
Enter the Value for A : - 12
Enter the Value for B : - 24

Now the Value for A is 24 and for B is 12
*/
