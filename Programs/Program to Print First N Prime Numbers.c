#include<stdio.h>
void main()
{
	int i,num=2,j=2,s,n;
	printf("Enter the value for N: - ");
	scanf("%d",&n);
	printf("\nFirst %d Prime Numbers",n);
	while(j<=n+1)
	{
	i=2;
	s=0;
		while(i<=num/2)
		    {
				if (num%i==0)
				    s++;
				i++;
			}
		if (s==0)
		    {
	   		printf("\n\t%d",num);
	   		j++;
			}
	num++;
	}
	getch();
}
/*
Enter the value for N: - 20

First 20 Prime Numbers
        2
        3
        5
        7
        11
        13
        17
        19
        23
        29
        31
        37
        41
        43
        47
        53
        59
        61
        67
        71
*/
