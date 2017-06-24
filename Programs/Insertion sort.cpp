//INSERTION SORT
#include<iostream.h>
#include<conio.h>
main()
{
      int a[20],i,j,temp,n,k;
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
      for(i=1;i<n;i++)
      {
         for(j=0;j<i;j++)
         {
           if(a[j]>a[i])
           {
              temp=a[j];
              a[j]=a[i];
              for(k=i;k>j;k--)
                              a[k]=a[k-1];
              a[k+1]=temp ;
           }
         }
      }
      cout<<"\n\n\n"<<"array after sorting:";
      for(i=0;i<n;i++)
      {
         cout<<"\t"<<a[i];
      }
      getch();
}
