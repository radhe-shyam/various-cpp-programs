#include<stdio.h>
#include<conio.h>
struct state
{
	char nod[20];
	int nods;
	struct { int men; int women;} Total_population;
}obj;
void main()
{
	printf("Enter the name of the state : - ");
	scanf("%s",obj.nod);
	printf("Enter the number of districts : - ");
	scanf("%d",&obj.nods);
	printf("Total Population\nTotal number of Men : - ");
	scanf("%d",&obj.Total_population.men);
	printf("Total number of Women : - ");
	scanf("%d",&obj.Total_population.women);
	printf("\n\nName of the state is %s\nTotal number of districts is %d\nTotal number of men is %d and women is %d",obj.nod,obj.nods,obj.Total_population.men,obj.Total_population.women);
	getch();
}
/*
Enter the name of the state : - Rajasthan
Enter the number of districts : - 32
Total Population
Total number of Men : - 32789
Total number of Women : - 32750


Name of the state is Rajasthan
Total number of districts is 32
Total number of men is 32789 and women is 32750
*/
