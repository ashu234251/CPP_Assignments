/*
2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)
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