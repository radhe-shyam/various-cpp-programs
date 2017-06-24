//HEAP SORT
#include<iostream.h>
#include<conio.h>
main()
{
      int a[20],i,j,temp,n,val,s,f,ivalue;
      cout<<"enter the number of elements:";
      cin>>n;
      cout<<"enter the array elements:";
      for(i=0;i<n;i++)
      {
         cin>>a[i];
      }
      cout<<"\n"<<"Array before sorting:";
      for(i=0;i<n;i++)
      {
         cout<<"\t"<<a[i];
      }
      // creates heap from the tree
      for ( i = 1 ; i < n ; i++ )
      {
          val = a[i] ;
          s = i ;
          f = ( s - 1 ) / 2 ;
          while ( s > 0 && a[f] < val )
		  {
			a[s] = a[f] ;
			s = f ;
			f = ( s - 1 ) / 2 ;
		  }
		  a[s] = val ;
	   }
       // sorts heap
       for ( i = n - 1 ; i > 0 ; i-- )
	   {
		   ivalue = a[i] ;
		   a[i] = a[0] ;
		   f = 0 ;
           if ( i == 1 )
			       s = -1 ;
           else
			       s = 1 ;
          if ( i > 2 && a[2] > a[1] )
			       s = 2 ;
          while ( s >= 0 && ivalue < a[s] )
		  {
			    a[f] = a[s] ;
			    f = s ;
			    s = 2 * f + 1 ;

			    if ( s + 1 <= i - 1 && a[s] < a[s + 1] )
				   s++ ;
			    if ( s > i - 1 )
				   s = -1 ;
          }
		  a[f] = ivalue ;
	   }

       cout<<"\n\n\n"<<"array after sorting:";
       for(i=0;i<n;i++)
       {
          cout<<"\t"<<a[i];
       }
       getch();
}
