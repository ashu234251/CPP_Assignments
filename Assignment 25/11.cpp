#include<iostream>
using namespace std;

class Complex
{
  private:
    int real,img;
  public:
    void set(int a,int b)
     {
        real=a;
        img=b;
     }
    void display()
     {
        cout<<"Complex Number is: "<<real<<"+ "<<img<<"i";
     }
    Complex add(Complex c)
     {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
     }
};

int main()
{
    Complex c1,c2,c3;
    c1.set(5,6);
    c2.set(3,5);
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;
    c3=c1.add(c2);
    cout<<"Sum ";
    c3.display();
    return 0;
}