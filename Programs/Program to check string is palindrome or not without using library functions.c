#include<stdio.h>
#include<conio.H>
void main()
{
	char wor[20];
	int l,i;
	printf("Enter the word : - ");
	scanf("%s",wor);
	for(l=0;wor[l]!='\0';l++);
	for(i=1;i<l/2;i++)
	    {
			if(wor[i-1]!=wor[l-i])
			    {
					printf("The given word is not palindrome");
					getch();
					exit(0);
				}
		}
	printf("The given word is palindrome");
	getch();
}

/*
OUTPUT : -
Enter the word : - arora
The given word is palindrome
*/
