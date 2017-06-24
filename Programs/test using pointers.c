#include<stdio.h>
#include<conio.h>
void main()
{
	char *a[50],*d;
	int *i,*j;
	*j=0;
	scanf("%s",&a);
	for(*i=0;(*a[*i])!='\0';(*i)++)
	    {
			(*d)=toupper(*a[*i]);
			if((*d)=='A'||(*d)=='E'||(*d)=='I'||(*d)=='O'||(*d)=='U')
				(*j)++;
		}

 	printf("%d",(*j));

	getch();
}
