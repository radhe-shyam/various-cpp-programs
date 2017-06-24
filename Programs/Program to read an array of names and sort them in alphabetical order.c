#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10][20],t[20];
 	int i,j,k;
	printf("Enter 10 Names : - ");
	for(i=0;i<10;i++)
	    scanf("%s",name[i]);
	for(i=0;i<9;i++)
	    {
			for(j=i+1;j<10;j++)
				{
					for(k=0;name[i][k]!='\0';k++)
					    {
							if(name[i][k]>name[j][k])
							    {
									strcpy(t,name[i]);
									strcpy(name[i],name[j]);
									strcpy(name[j],t);
									break;
								}
							else if(name[i][k]<name[j][k])
							        break;
						}
				}
		}
	printf("\nSorted names ");
	for(i=0;i<10;i++)
	    printf("\n%s",name[i]);
	getch();
}
/*
OUTPUT : -
Enter 10 Names : - Sambhav
Anuj
Amit
Shubham
Vikas
Chirag
Radhe
Jayesh
Vivek
Piyush

Sorted names
Amit
Anuj
Chirag
Jayesh
Piyush
Radhe
Sambhav
Shubham
Vikas
Vivek
*/
