#include<stdio.h>
void main()
{
	double a,b,c,s,area;
	strt:
	printf("Enter the Sides of the Triangle : - ");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b<c||b+c<a||a+c<b)
	    {
	    printf("\n\nThe given sizes cannot create any Triangle.\n\n");
		goto strt;
		}
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The Area of the Triangle is %.2lf",area);
	getch();
}


/*
Enter the Sides of the Triangle : - 3
4
5
The Area of the Triangle is 6.00
*/
