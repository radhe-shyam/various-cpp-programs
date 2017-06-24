#include<stdio.h>
#include<conio.h>
void main()
{
	char str[20],cha;
	int ch,l=0;
	printf("Press 1 for String Length\nPress 2 for String Copy\nPress 3 for string concatenation\nPress 4 for String compare\nPress any other key to exit\n\tEnter your choice : -");
	scanf("%d",&ch);
	printf("Enter the string : - ");
	scanf("%s",str);
	fflush(stdin);
	switch(ch)
		{
			case 1:for(l=0;str[l]!='\0';l++);
					printf("The length of the string is %d",l);
					break;
			case 2:printf("Enter string to copy on 1st string : - ");
			        fflush(stdin);
					str[l]=getchar();
					while(str[l]!='\n' && l<20)
						{
							l++;
						str[l]=getchar();
						}
					str[l]='\0';
					printf("Now 1st String is %s",str);
					break;
			case 3:printf("Enter the string to concate with 1st string : - ");
					for(l=0;str[l]!='\0';l++);
					getch();
					while(str[l-1]!='\n' && l<20)
						{
							str[l]=getchar();
							l++;
						}
					str[l]='\0';
					printf("Now 1st String is %s",str);
					break;
			case 4: printf("Enter the string to compare : - ");
					cha=getchar();
					l=0;
					while(cha!='\n')
					    {
							if(cha>str[l])
								{
									printf("1st String is greater then 2nd String");
									getch();
									exit(0);
								}
							else if(cha<str[l])
							    {
									printf("2nd String is greater then 1st String");
									getch();
									exit(0);
								}
							cha=getchar();
							l++;
						}
					printf("Both Strings are equal");
					break;
			default:exit(0);
		}
	getch();
}
/*
OUTPUT : -
Press 1 for String Length
Press 2 for String Copy
Press 3 for string concatenation
Press 4 for String compare
Press any other key to exit
        Enter your choice : -1
Enter the string : - University
The length of the string is 10
*/
