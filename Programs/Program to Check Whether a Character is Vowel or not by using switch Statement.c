#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any character : - ");
	scanf("%c",&ch);
	switch (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   {
			case 1:
					{
						printf("\nThis is a Vowel");
						break;
					}
			default :
					{
						printf("\nThis is not a Vowel");
					}
	   }
	getch();
 }
/*
Enter any character : - I

This is a Vowel
*/
