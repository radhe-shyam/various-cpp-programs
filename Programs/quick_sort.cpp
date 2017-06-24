#include<iostream>
#include<conio.h>
#define n 10
using namespace std;
void qsort(int a[], int lb, int ub)
{
	if(lb<ub)
		{
			int pivot=a[lb], up=ub, down=lb;
			while(down<up)
			    {
					while(down<up && a[down]<=pivot)
					    down++;
					while(a[up]>pivot)
					    up--;
					if(down<up)
					    {
							int temp=a[down];
							a[down]=a[up];
							a[up]=temp;
						}
				}
				a[lb]=a[up];
				a[up]=pivot;
				qsort(a,lb,up-1);
				qsort(a,up+1,ub);
		}
}
int main()
{
	int a[n];
	cout<<"Enter the elements of array :\n";
	for(short i=0;i<n;i++)
	    cin>>a[i];
	qsort(a,0,n-1);
	cout<<"Shorted Elements :";
	for(short i=0;i<n;i++)
	    cout<<endl<<a[i];

	getch();
	return 0;
}
