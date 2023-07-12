#include<iostream>
using namespace std;

class Flight
{
    public :
       void Search()
       {
           cout<<"Search Flight"<<endl;
       }
      virtual void Book()
       {
           cout<<"Book Flight"<<endl;
       }
};
class AirIndia : public Flight
{
    public :
      void Book()
       {
           int x=5;
           cout<<"AirIndia Flight Booked "<<x<<endl;
       }
};

class SpiceJet: public Flight
{
  public :
    void Book()
       {
           int y=11;
           cout<<"SpiceJet Flight Booked "<<y<<endl;
       }
};
int main()
{
    Flight *flight1 , *flight2;

    AirIndia ai;
    SpiceJet sj;

    flight1 = &ai;
    flight1->Search();
    flight1->Book();

    flight2 = &sj;
    flight2->Search();
    flight2->Book();

    return 0;
}
