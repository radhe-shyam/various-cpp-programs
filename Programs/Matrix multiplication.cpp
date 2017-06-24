#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][4]={1,1,1,1,1,1,1,1,1,1,1,1},b[4][2]={1,1,1,1,1,1,1,1},i,j,k,r1=3,r2=4,c1=4,c2=2,sum=0;
	int c[r1][c2];
	for(i=0;i<r1;i++)
	    {
			for(j=0;j<c2;j++)
			    {   c[i][j]=0;
					for(k=0;k<r2;k++)
					    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
					cout<<"\t"<<c[i][j];
				}
			cout<<"\n";
		}
	getch();
	return 0;
}
