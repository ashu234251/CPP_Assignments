/*
3. Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type.
*/
#include<iostream>
using namespace std;

class A
{
      int x,y;
    public:
      void setValues(int a,int b)
      {
        x=a;
        y=b;
      }
      void display()
      {
        cout<<"Value of x: "<<x<<"   Value of y: "<<y<<endl;
      }
      void swap(A &a)
      {
        A temp;
        temp.x=this->x;
        temp.y=this->y;
        this->x=a.x;
        this->y=a.y;
        a.x=temp.x;
        a.y=temp.y;
      }
};

int main()
{
    A a1,a2;
    a1.setValues(5,7);
    a2.setValues(11,21);
    a1.swap(a2);
    a1.display();
    a2.display();

    return 0;
}