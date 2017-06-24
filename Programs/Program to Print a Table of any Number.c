#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the Number: - ");
	scanf("%d",&n);
	for(i=1;i<11;i++)
		printf("\n%d X %2d = %d",n,i,n*i);
	getch();
}
/*
Enter the Number: - 999

999 X  1 = 999
999 X  2 = 1998
999 X  3 = 2997
999 X  4 = 3996
999 X  5 = 4995
999 X  6 = 5994
999 X  7 = 6993
999 X  8 = 7992
999 X  9 = 8991
999 X 10 = 9990
*/
