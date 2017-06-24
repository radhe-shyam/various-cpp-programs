#include<stdio.h>
void main()
{
	char ch;
	int v=0;
	printf("Enter the String : - ");
	ch=getchar();
	while(ch!='\n')
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		    v++;
		ch=getchar();
	}
	printf("\nThe Number of Vowels in the String is %d",v);
	getch();
}
/*
Enter the String : - University

The Number of Vowels in the String is 4
*/
