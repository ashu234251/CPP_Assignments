#include <iostream>
using namespace std;

class Person
{
    public:
    int rank;
    int age;

    Person addition(Person P)
    {
        Person temp;
        temp.age=age+P.age;
        temp.rank=rank+P.rank;
        return temp;

    }
    Person()
    {
        cout<<"Default Constructor Called"<<endl;
    }

};

int main()
{
    Person p1,p2;
    p1.age=20;
    p2.age=22;
    p1.rank=10;
    p2.rank=11;
    Person p3=p1.addition(p2);
    cout<<"Age is: "<<p2.age<<"   Rank is: "<<p2.rank<<endl;

    return 0;
}
