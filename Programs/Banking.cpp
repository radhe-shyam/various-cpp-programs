#include<iostream.h>
#include<conio.h>
class banking
{
      public:
      char name[10],acctyp[10];
      int accno;
      float bal,depo,withd;
             banking()
             {
             bal=depo=withd=accno=0;
             }
             void getdata()
             {
                  cout<<"Name:";
                  cin>>name;
                  cout<<"Enter account type:";
                  cin>>acctyp;
                  cout<<"Enter accountno:";
                  cin>>accno;
                  cout<<"Enter balance:";
                  cin>>bal;
                  }
                  void deposit()
                  {
                       cout<<"Enter Deposit Amount:";
                       cin>>depo;
                       bal=bal+depo;
                       }
                  void withdraw()
                  {
                       cout<<"Enter Amount To Be Withdrawn:";
                       cin>>withd;
                       if(withd>bal)
                       {
                       cout<<"Not having Enough balance:";
                       }
                          else
                       {
                       bal=bal-withd;
                       cout<<"Transaction Sussess:"<<"\n";
                       }
                       }
                       void display()
                       {
                       cout<<"Name:"<<name<<"\n";
                       cout<<"Account type:"<<acctyp<<"\n";
                       cout<<"Account no:"<<accno<<"\n";
                       cout<<"Balance:"<<bal<<"\n";
                       }};
                       int main()
                       {
                           banking s[10];
                           int se,n;
                           cout<<"Enter 10 customer details: ";
                           for(int i=0;i<2;i++)
                           s[i].getdata();
                           cout<<"Enter accountno to make deposit withdraw or display details";
                           cin>>se;
                           do
                           {
                           for(int i=0;i<2;i++)
                           if(se==s[i].accno)
                           {
                           cout<<"1.deposit 2.withdraw 3.display 4.exit: ";
                           cin>>n;
                           switch(n)
                           {
                           case 1:
                           s[i].deposit();
                           break;
                           case 2:
                           s[i].withdraw();
                           break;
                           case 3:
                           s[i].display();
                           break;
                           case 4:
                           exit(0);
                           default:
                           cout<<"Invalid Selection";
                           }
                           break;
                           }}while(1);
                           system("pause");
                           }
