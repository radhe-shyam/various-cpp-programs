#include<stdio.h>
void main()
{
	double n1,n2,n3,sum,ave;
	printf("Enter 3 Numbers : - ");
	scanf("%lf%lf%lf",&n1,&n2,&n3);
	sum=n1+n2+n3;
	ave=sum/3;
	printf("Sum = %0.2lf\nAverage = %0.2lf",sum,ave);
	getch();
}
/*
Enter 3 Numbers : - 23
45
12
Sum = 80.00
Average = 26.67




*/
