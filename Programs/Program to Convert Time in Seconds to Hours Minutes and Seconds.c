#include<stdio.h>
void main()
{
	unsigned int sec,hr,min;
	printf("Enter Time in Seconds : - ");
	scanf("%u",&sec);
	printf("\n%u",sec);
	hr=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf(" Seconds has %u hours %u minutes and %u seconds",hr,min,sec);
	getch();
}

/*
Enter Time in Seconds : - 5000

5000 Seconds has 1 hours 23 minutes and 20 seconds
*/
