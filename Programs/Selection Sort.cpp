#include<iostream.h>
#include<conio.h>
main()
{
      int a[10],i,j,small,pos,temp,n;
      cout<<"\n*******************************  SELECTION SORT  *******************************";
      cout<<"\n\t Enter n :\t";
      cin>>n;
      cout<<"Enter"<<n<<"elements";
      for(i=0;i<n;i++)
      {
         cin>>a[i];
      }
      for(i=0;i<n;i++)
      {
         small=a[i];
         pos=i;
         for(j=i;j<n;j++)
         {
            if(small>a[j])
            {
              small=a[j];
              pos=j;
            }
         }
         temp=a[i];
         a[i]=small;
         a[pos]=temp;
      }
      cout<<"\n\t Array after sorting is :\n\n\t";
      for(i=0;i<n;i++)
      {
        cout<<a[i]<<"\t\t";
      }
      getch();
}
