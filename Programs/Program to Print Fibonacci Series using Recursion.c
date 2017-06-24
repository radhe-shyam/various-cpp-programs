#include<stdio.h>
void fib(int a, int b, int i, int n);
void main()
{
	int n;
	printf("Enter the No. of elements in Fibonacci series : - ");
	scanf("%d",&n);
	fib(0,1,0,n);
	getch();
}
void fib(int a, int b, int i , int n)
{
	if (a==0 && n>0)
	    {
			i++;
			printf("%d\n",a);
			if (n>1)
			    {
					i++;
					printf("%d\n",b);
				}
		}
	if (n>2 && i<n)
		{
			b=a+b;
			a=b-a;
			printf("%d\n",b);
			fib(a,b,++i,n);
		}
}
/*
Enter the No. of elements in Fibonacci series : - 6
0
1
1
2
3
5
*/
