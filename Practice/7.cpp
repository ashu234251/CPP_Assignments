#include<stdio.h>
#include<iostream>

using namespace std;

class A
{
    public:
     A()
     {
        cout<<"Default of A called."<<endl;
     }
     int a=10;
};
class B: virtual public A
{
    public:
     B()
     {
        cout<<"Default of B called."<<endl;
     }
};

class C:virtual public A
{
    public:
     C()
     {
        cout<<"Default of C called."<<endl;
     }

};
class D: public B,public C
{
    public:
     D()
     {
        cout<<"Default of D called."<<endl;
     }
    
};

int main()
{
    D d1;  

}