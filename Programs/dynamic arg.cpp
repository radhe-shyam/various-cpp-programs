#include<iostream>
#include<cstdarg>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void name(int n, ...)
{
	int i;
	va_list vl;     	//A place to store the list of arguments
	va_start(vl,n); 	//Initializing arguments to store all values after num
	for(i=0;i<n;i++)	// Loop until all numbers are added
	    cout<<va_arg(vl,int)<<endl;
	va_end(vl);			// Cleans up the list
	
}
int main()
{
	int n;
	//cout<<"Enter the number of elements : -";
	//cin>>n;
	//int *ele=new int[n];
	name(3,1,2,3);
	name(10,9,8,2,9,2,8,6,6,6,7);
	system("pause");
	return 0;
}


/*
double average ( int num, ... )
{
  va_list arguments;                     // A place to store the list of arguments
  double sum = 0;

  va_start ( arguments,num);           // Initializing arguments to store all values after num
  for ( int x = 0; x < num; x++ )        // Loop until all numbers are added
    sum += va_arg ( arguments, double );
	cout<<sum<<endl<<sum/5.0<<endl; // Adds the next value in argument list to sum.
  va_end ( arguments );                  // Cleans up the list
  return sum / num;                      // Returns the average
}
int main()
{
    // this computes the average of 13.2, 22.3 and 4.5 (3 indicates the number of values to average)
  //cout<< average (3,12.2, 22.3, 4.5 ) <<endl;
    // here it computes the average of the 5 values 3.3, 2.2, 1.1, 5.5 and 3.3
  cout<< average (5, 3.3, 2.2, 1.1, 5.5, 3.3 ) <<endl;
  system("pause");
  return 0;
}

*/
