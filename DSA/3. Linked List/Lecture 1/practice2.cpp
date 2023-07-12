#include<iostream>
using namespace std;
class base
{
    protected:
      int a,b;
};
class child:public base
{
    public:
      void set(int x,int y)
      {
        child bb;                                              // only child object can access the protected members.
        bb.a=x;
        bb.b=y;
        cout<<"Values are "<<bb.a<<" and "<<bb.b<<endl;
      }
      void get(int x,int y)
      {
        base bb;                                              // ERRORRRRR
        bb.a=x;
        bb.b=y;
        cout<<"Values are "<<bb.a<<" and "<<bb.b<<endl;
      }
};
int main()
{
    child b1;
    b1.set(11,21);

    return 0;
}