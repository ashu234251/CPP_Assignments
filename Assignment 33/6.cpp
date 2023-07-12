/*
6. Extend above to display the area of circles. For a circle,only one value is needed i.e.
radius but in get_data() function 2 values are passed.
*/

#include<iostream>
#define pi 3.14;
using namespace std;
class Shape
{
    protected:
      double a,b;
    public:
      void getData(double x,double y=0)
      {
        a=x;
        b=y;
      }
      virtual void displayArea()=0;
      
};
class Traingle:public Shape
{
    public:
      void displayArea()
      {
        cout<<"Area of Triangle is: "<<(a*b)/2 <<endl;
      }
};
class Rectangle:public Shape
{
    public:
      void displayArea()
      {
        cout<<"Area of Rectangle is: "<<a*b<<endl;
      }
  
};
class Circle:public Shape
{
    public:
      void displayArea()
      {
        cout<<"Area of Circle is: "<<3.14*a*a<<endl;
      }
};
int main()
{
    Traingle t1;
    t1.getData(4,8);
    t1.displayArea();

    Circle c1;
    c1.getData(5);
    c1.displayArea();

    return 0;
}