#include<iostream.h>
#include<conio.h>
main()
{
      int i,j,temp,a[20],n,middle,first,last,item;
      cout<<"Enter the Range \n";
      cin>>n;
      cout<<"Enter \t"<<n<<"elements \n";
      for(i=0;i<n;i++)
      {
                      cin>>a[i];
      }
      cout<<"Array before sorting\n";
      for(i=0;i<n;i++)
      {
             cout<<a[i];
      }
      cout<<"\n";
      for(i=0;i<n;i++)
      {
                      for(j=0;j<n-1;j++)
                      {
                                        if(a[j]>a[j+1])
                                        {
                                                       temp=a[j];
                                                       a[j]=a[j+1];
                                                       a[j+1]=temp;
                                        }
                      }
      }
      cout<<"Arrays after sorting\n";
      for(i=0;i<n;i++)
      {
                      cout<<a[i];
      }
      getch();
}
