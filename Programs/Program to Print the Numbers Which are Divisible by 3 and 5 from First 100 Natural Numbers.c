#include<stdio.h>
void main()
{
	int n;
	printf("The Numbers Which are Divisible by 3 and 5 from First 100 Natural Numbers\n");
	for(n=15;n<101;n++)
	{
		if (((n%3)==0) && ((n%5)==0))
		    printf("\t%d\n",n);
	}
	getch();
}

/*
The Numbers Which are Divisible by 3 and 5 from First 100 Natural Numbers
        15
        30
        45
        60
        75
        90
*/
