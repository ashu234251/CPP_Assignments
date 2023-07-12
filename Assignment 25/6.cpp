// 6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

#include<iostream>
using namespace std;
class Square
{
    private:
      int n,s;
    public:
      static int count;
      void setx(int x)
       {
        n=x;
        count++;
       }
      int getx()
       {
        count++;
        return n;
       }
      void square()
       {
        count++;
        s=n*n;
       } 
      int getSquare()
       {
        count++;
        return s;
       }

};
int Square :: count=0;
int main()
{
    Square s1,s2;
    s1.setx(5);
    s2.setx(7);
    s1.square();
    s2.square();
    cout<<"Square of "<<s1.getx()<<" is: "<<s1.getSquare()<<endl;
    cout<<"Square of "<<s2.getx()<<" is: "<<s2.getSquare()<<endl;
    cout<<"All Functions are called "<<Square::count<<" times.";
    return 0;
}