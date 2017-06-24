#include<stdio.h>
void main()
{
	double rad;
	printf("Enter the Size of Radius of Sphere : - ");
	scanf("%lf",&rad);
	printf("\n\nThe Sphere Surface Area is %.2lf\n\nThe Volume of the Sphere is %.2lf\n\n",3.142857*rad*rad,(88/21)*pow(rad,3));	getch();
}
/*
Enter the Size of Radius of Sphere : - 3


The Sphere Surface Area is 28.29

The Volume of the Sphere is 108.00


*/
