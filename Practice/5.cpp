#include<iostream>
using namespace std;

class Person
{
    int age;
    int rank;

    public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    void display()
    {
        cout<<"Age is: "<<age<<"   Rank is: "<<rank<<endl;
    }
    Person operator+(Person P)
    {
        cout<<"Operator + Called"<<endl;
        Person temp;
        temp.age=age+P.age;
        temp.rank=rank+P.rank;
        return temp;
    }
    Person(int a,int r)
    {
        cout<<"Parameterised Constructor Called."<<endl;
        age=a;
        rank=r;
    }
    Person(const Person &P)
    {
        cout<<"Copy Constructor Called."<<endl;
        age=P.age;
        rank=P.rank;
    }
    Person()
    {
        cout<<"Default Constructor Called."<<endl;
    }
};
int main()
{
    Person p1(22,25);
    Person p2=p1;
    Person p3=p1+p2;

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
