#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define n 5
void insort(int *a)
{
	int e,i,key;
	for(e=1;e<n;e++)
	    {
			key=a[e];
			for(i=e-1;i>=0 && key<a[i];i--)
			    a[i+1]=a[i];
			a[i+1]=key;
		}
}
int main()
{
	int i,a[n];
	printf("Enter the Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insort(a);
	printf("\n:::::::: Sorted Data ::::::::\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
 	system("pause");
}
