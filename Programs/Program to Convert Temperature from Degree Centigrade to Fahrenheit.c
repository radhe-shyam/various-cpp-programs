#include<stdio.h>
void main()
{
	float fah,centi;
	printf("Enter the Temperature in Centigrade : = ");
	scanf("%f",&centi);
	fah=(centi*9/5)+32;
	printf("\nTemperature in Fahrenheit = %.2f",fah);
	getch();
}
/*
Enter the Temperature in Centigrade : = 110

Temperature in Fahrenheit = 230.00
*/
