#include<stdio.h>
void main()
{
	unsigned int soe=0,soo=0,i;
	for(i=1;i<101;i++)
	    {
		if(i%2==0)
			soe=soe+i;
		else
		    soo=soo+i;
		}
	printf("\nThe Sum of Even Numbers from First 100 Positive Integers is %d",soe);
	printf("\nThe Sum of Odd Numbers from First 100 Positive Integers is %d",soo);
	getch();
}
/*
The Sum of Even Numbers from First 100 Positive Integers is 2550
The Sum of Odd Numbers from First 100 Positive Integers is 2500
*/
