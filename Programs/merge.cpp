//MERGE SORT
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[20],b[20],c[40],i,j,temp,n1,n2,k,count=1;
cout<<"enter the number of elements for array A:";
cin>>n1;
cout<<"enter the array elements:";
for(i=0;i<n1;i++)
{
cin>>a[i];
}
cout<<"enter the number of elements for array B:";
cin>>n2;
cout<<"enter the array elements:";
for(i=0;i<n2;i++)
{
cin>>b[i];
}
cout<<"\n"<<"Array A before sorting:";
for(i=0;i<n1;i++)
{
cout<<"\t"<<a[i];
}
cout<<"\n"<<"Array B before sorting:";
for(i=0;i<n2;i++)
{
cout<<"\t"<<b[i];
}
// sorts A array

	for ( i= 0 ; i < n1 - 1 ; i++ )
	{
		for (j = i + 1 ; j < n1  ; j++ )
		{
			if ( a[i] > a[j] )
			{
				temp = a[i] ;
				a[i] = a[j] ;
				a[j] = temp ;
				count++;
			}
		}
	}

// sorts B array


	for ( i= 0 ; i < n2 ; i++ )
	{
		for (j = i + 1 ; j < n2 ; j++ )
		{
			if ( b[i] > b[j] )
			{
				temp = b[i] ;
				b[i] = b[j] ;
				b[j] = temp ;
				count++;
			}
		}
	}
cout<<"\n\n\n"<<"array after sorting:";
for(i=0;i<n1;i++)
{
cout<<"\t"<<a[i];
}
cout<<"\n\n\n"<<"array after sorting:";
for(i=0;i<n2;i++)
{
cout<<"\t"<<b[i];
}
// merges two arrays
for ( i = j = k = 0 ; i < n1|| j < n2 ; )
	{
		if ( a[i] <= b[j] )
		{
			c[k++] = a[i++] ;
			}
		else
		{
		c[k++] = b[j++] ;
		}
		if ( i ==n1 || j ==n2 )
			break ;
	}

	for ( ; i < n1 ; )
	{
		c[k++] = a[i++] ;
		
	}

	for ( ; j < n2 ; )
	{
		c[k++] = b[j++];
		
	}

cout<<"\n the final array is";
for(i=0;i<n1+n2;i++)
{
cout<<"\t";
cout<<c[i];
}
getch();
}

