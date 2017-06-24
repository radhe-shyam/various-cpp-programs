/* Quick sort. */

#include <iostream.h>
#include <conio.h>

int split ( int*, int, int ) ;

main( )
{
	int arr[10],n;
	int i ;

	void quicksort ( int *, int, int ) ;
 
	cout<<"\n"<<"Enter the number of elements:";
	cin>>n;
	cout<<"\n"<<"enter the array elements:";
	for(i=0;i<n;i++)
	{
        cin>>arr[i];
	}
	cout<<"Quick sort."<<"\n";
	cout<<"\n"<<"Array before sorting:"<<"\n";

	for ( i = 0 ; i <n ; i++ )
		cout<<"\t"<<arr[i];

	quicksort ( arr, 0, n-1 ) ;

	cout<<"\n"<<"Array after sorting:"<<"\n";

	for ( i = 0 ; i <n ; i++ )
		cout<<"\t"<<arr[i];

	getch( ) ;
}

void quicksort ( int a[ ], int lower, int upper )
{
	int i ;
	if ( upper > lower )
	{
		i = split ( a, lower, upper ) ;
		quicksort ( a, lower, i - 1 ) ;
		quicksort ( a, i + 1, upper ) ;
	}
}

int split ( int a[ ], int lower, int upper )
{
	int i, p, q, t ;

	p = lower + 1 ;
	q = upper ;
	i = a[lower] ;

	while ( q >= p )
	{
		while ( a[p] < i )
			p++ ;

		while ( a[q] > i )
			q-- ;

		if ( q > p )
		{
			t = a[p] ;
			a[p] = a[q] ;
			a[q] = t ;
		}
	}
	t = a[lower] ;
	a[lower] = a[q] ;
	a[q] = t ;
	return q ;
}
