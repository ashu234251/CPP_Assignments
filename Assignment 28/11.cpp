/*
11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.
*/

#include<iostream>
using namespace std;

class Marks
{
      int marks;
    public:
      void display()
      {
        cout<<"Marks is: "<<marks<<endl;
      }
      Marks(int m)
      {
        marks=m;
      }
      Marks* operator->()
      {
        return this;
      }
    
};
   
int main()
{
    Marks m1(111),m2(121);
    m1->display();
    return 0;
}