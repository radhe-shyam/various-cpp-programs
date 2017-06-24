#include <stdlib.h> //declarations of malloc and free
#include <new.h>
#include <iostream.h>
#include<conio.h>

class C
{
public:
  void* operator new (size_t size); //implicitly declared as a static member function
  void operator delete (void *p); //implicitly declared as a static member function
};

void* C::operator new (size_t  size)
{
  void * p = malloc(size);
  cout<<"Memory allocated";
  if (p == 0)  throw "allocation failure";  //instead of std::bad_alloc
  return p; 
}

void C::operator delete (void *p)
{ 
  cout<<"\nDeleted";
  free(p);	
}

int main() { 
   C *p = new C; // calls C::new
   delete p;  // calls C::delete
   getch();
}
