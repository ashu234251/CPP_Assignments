// 7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.

#include<iostream>
using namespace std;

class Greatest
{
   private:
      int a,b,c,max;
   public:
      void setter(int x,int y,int z)
       {
         a=x;
         b=y;
         c=z;
       }
      void largest()
       {
         max=(a>b)? ((a>c)?a:c):((b>c)?b:c);
       }
      int getLargest()
       {
         return max ;
       }
};
int main()
{
   Greatest g1;
   int a,b,c;
   cout<<"Enter Three Numbers: \n";
   cin>>a>>b>>c;
   g1.setter(a,b,c);
   g1.largest();
   cout<<"Largest Number is: "<<g1.getLargest();
   return 0;

}