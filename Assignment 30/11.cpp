#include<iostream>
using namespace std;
class A
{
      int a,b;
    public:
      void display()
      {
        cout<<"a is: "<<a<<"   b is: "<<b<<endl;
      }
      void setValues(int x,int y)
      {
        a=x;
        b=y;
      }
};
class B
{
      int c,d;
    public:
      void display()
      {
        cout<<"c is: "<<c<<"   d is: "<<d<<endl;
      }
      void setValues(int x,int y)
      {
        c=x;
        d=y;
      }
};
int main()
{
    
    int x;
    cin>>x;
    switch(x)
    {
        case 1:
            A a1;
            a1.setValues(3,4);
            a1.display();
            break;
        case 2:
            A a2;
            a2.setValues(1,8);
            a2.display();
            break;
        default:
            return 0;

    }
    return 0;
}