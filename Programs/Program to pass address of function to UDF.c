#include<stdio.h>
#include<conio.h>
struct state
{
	char name[20];
	int pop;
	int lit;
	int inc;
}obj[5];
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the name of the state : - ");
		scanf("%s",obj[i].name);
		printf("Enter the population : - ");
		scanf("%d",&obj[i].pop);
		printf("Enter the literacy rate : - ");
		scanf("%d",&obj[i].lit);
		printf("Enter the capital income : - ");
		scanf("%d",&obj[i].inc);
	}
	for(i=0;i<5;i++)
	    display(&obj[i]);
	getch();
}
void display(struct state* e)
{
	printf("\n\nName of the state  : - %s",e->name);
	printf("\nTotal Population : - %d",e->pop);
	printf("\nLiteracy Rate : - %d%%",e->lit);
	printf("\nCapital Income : - %d",e->inc);
}
/*
OUTPUT: -
Enter the name of the state : - Rajasthan
Enter the population : - 15666646
Enter the literacy rate : - 8
Enter the capital income : - 11000
Enter the name of the state : - Gujrat
Enter the population : - 1025622
Enter the literacy rate : - 9
Enter the capital income : - 5000
Enter the name of the state : - Maharashtra
Enter the population : - 1035226
Enter the literacy rate : - 9
Enter the capital income : - 8000
Enter the name of the state : - Tamilnadu
Enter the population : - 1201555
Enter the literacy rate : - 10
Enter the capital income : - 12000
Enter the name of the state : - karnataka
Enter the population : - 1402153
Enter the literacy rate : - 10
Enter the capital income : - 13000


Name of the state  : - Rajasthan
Total Population : - 15666646
Literacy Rate : - 8%
Capital Income : - 11000

Name of the state  : - Gujrat
Total Population : - 1025622
Literacy Rate : - 9%
Capital Income : - 5000

Name of the state  : - Maharashtra
Total Population : - 1035226
Literacy Rate : - 9%
Capital Income : - 8000

Name of the state  : - Tamilnadu
Total Population : - 1201555
Literacy Rate : - 10%
Capital Income : - 12000

Name of the state  : - karnataka
Total Population : - 1402153
Literacy Rate : - 10%
Capital Income : - 13000
*/
