#include<stdio.h>
void main()
{
	double rad,side;
	printf("Enter the Size of Side of Square : - ");
	scanf("%lf",&side);
	printf("Enter the Size of Radius of Circle : - ");
	scanf("%lf",&rad);
	printf("\n\nThe Area of the Square is %.2lf\n\nThe Circumference of the Circle is %.2lf\n\n",side*side,6.285714*rad);
	getch();
}

/*
Enter the Size of Side of Square : - 2.5
Enter the Size of Radius of Circle : - 3.5


The Area of the Square is 6.25

The Circumference of the Circle is 22.00



*/
