#include<iostream>
using namespace std;
class ABC
{
    public:
      int a=5;
      virtual void disp()
      {
        cout<<"Hello, Ashish this side."<<endl;
      }
};
class CDE: public ABC
{
    public:
      int b=11;
      void disp()
      {
        cout<<"Hii Everyone.....Moz karo"<<endl;
      }
      void pri()
      {
        cout<<"Work hard. Specialised method."<<endl;
      }
};
int main()
{
    CDE c1;
    ABC *a1=&c1;
    a1->disp();
}