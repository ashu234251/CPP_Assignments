#include<iostream>
using namespace std;

class Base
{
  public :

       virtual void printBase()
      {
          cout<<"Base function called"<<endl;
      }

};
class Derived : public Base
{
    public :

     void printBase()
      {
          cout<<"Modified Base function called"<<endl;
      }

     void printDerived()
     {
         cout<<"Derived Function called"<<endl;
     }
};

int main()
{
    Base *b;
    Derived *d;

    Base obj1;
    Derived obj2;

    b = &obj1;  //valid = Base pointer can point to base object
    b->printBase();
   // b->printDerived();  error because ptr can access only base class

    d = &obj2;  //valid = Derived pointer can point derived object
    d->printBase();
    d->printDerived();

    b = &obj2;  //Valid = Base Pointer can point to derived object
    b->printBase();
   // b->printDerived();  Error because pointer base cannot access derived function



   // d = &obj1;  //Invalid = Derived Pointer cannot point to Base object

    return 0;
}
