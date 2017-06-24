#include<stdio.h>
void main()
{
	int n1,n2,ch;
	printf("Enter 1st Number : - ");
	scanf("%d",&n1);
	printf("Enter 2nd Number : - ");
	scanf("%d",&n2);
	printf("\n\tPress 1 for AND Operation");
	printf("\n\tPress 2 for OR Operation");
	printf("\n\tPress any other key to exit");
	printf("\n\t\tEnter your choice : - ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nResult = %d",n1&n2);
				break;
		case 2: printf("\nResult = %d",n1|n2);
				break;
		default:exit(0);
	}
	getch();
}
/*
Enter 1st Number : - 11
Enter 2nd Number : - 13

        Press 1 for AND Operation
        Press 2 for OR Operation
        Press any other key to exit
                Enter your choice : - 1

Result = 9
*/
