#include<iostream>
using namespace std;
class ABC
{
  public:
    int x=5;
    void disp()
    {
        int x=15;
        writ(x);
        cout<<"Value is: "<<x<<endl;
    }
    void writ(int x)
    {
        cout<<"Value of x is: "<<x<<endl;
    }
};
int main()
{
    ABC a1;
    a1.disp();

    return 0;
}