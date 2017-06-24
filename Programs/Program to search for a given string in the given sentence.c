#include<conio.h>
#include<stdio.h>
void main()
{
	char str[100], str1[10];
	int i,l1,l2,j;
	printf("Enter the sentence : - ");
	gets(str);
	printf("Enter the string to search : - ");
	gets(str1);
	for(l1=0;str[l1]!='\0';l1++);
	for(l2=0;str1[l2]!='\0';l2++);
 	for(i=0;i<l1;i++)
 	    {
			if(str[i]==str1[0])
			    {
					if((l1-i)>=l2)
					    {
							for(j=1;str[j+i]==str1[j] && j<l2;j++);
							    if(l2==j)
							        {
										printf("String found at %d position",i+1);
										getch();
										exit(0);
							    	}
								i=j;
						}
						else
							break;
				}
 		}
	printf("String not found");
	getch();
}
/*
OUTPUT: -
Enter the sentence : - The quick brown fox jumps upon the little lazy dog.
Enter the string to search : - brown
String found at 11 position
*/
