#include<iostream>
#include<stdlib.h>
using namespace std;
template <class t> void sort(t *item, int count)
{
 		 for(int i=0;i<count-1;i++)
 		 		 {
				  				   for(int j=i+1;j<count;j++)
				  				   		   {
										   					 if(item[i]>item[j])
										   					 					{
																				 	t temp=item[i];
																				 	item[i]=item[j];
																				 	item[j]=temp;
																				}
				   					 	   }
				 }
}
int main()
{
 	 int arr[10]={10,9,8,7,6,5,4,3,2,1};
 	 char brr[11]={"jihgfedcba"};
 	 sort(arr,10);
 	 sort(brr,10);
 	 for(int i=0;i<10;i++)
 	 		 cout<<endl<<brr[i]<<"\t"<<arr[i];
     system("pause");
     return 0;
}
