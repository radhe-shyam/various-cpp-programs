#include<iostream.h>
#include<conio.h>
class db       
{
      static char mob[12];
      char name[20],bld[20],add[100],dl[15],dob[20];
      int  polno;
      float hgt,wgt;
      public:
             db()         
             {
                 hgt=wgt=0;
             }
             void getdata();
             static void get();
             void display();
             friend void disp(db);
             ~db()
             {
             }
};
void db::getdata()
{
     cout<<"\nenter name:";
     cin>>name;
     cout<<"\nenter blood group :";
     cin>>bld;
     cout<<"\nenter address:";
     cin>>add;
     cout<<"\nenter driver liscense :";
     cin>>dl;
     cout<<"\nenter date of birth in order:";
     cin>>dob;
     cout<<"\nenter height:";
     cin>>hgt;
     cout<<"\nenter weight:";
     cin>>wgt;
     cout<<"\nenter policy number:";
     cin>>polno;
}
char db::mob[12]; 
void db::get()
{
     cout<<"\nenter mobile number:";
     cin>>mob;
}
inline void db::display()
{
       cout<<"\nname:\t"<<name<<"\nblood group:\t"<<bld<<"\naddress:\t"<<add;
       cout<<"\ndriving lisense:\t"<<dl<<"\ndate of birth:\t"<<dob;
       cout<<"\nheight:\t"<<hgt<<"\nweight:\t"<<wgt<<"\nmobile:\t"<<mob;
}
void disp(db b)
{
     cout<<"\npolicy number:"<<b.polno;
}
main()
{
      db b;
      db *p=new db;
      b.getdata();
      //cout<<p->name;
      db::get();
      p=&b;
      p->display();
      disp(b);
      getch();
      delete p;
}
