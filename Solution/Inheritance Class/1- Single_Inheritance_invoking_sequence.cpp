#include<iostream>
using namespace std;

class A
{
    private:

       void privateFunctionA()
       {
           cout<<"This is private of A"<<endl;
       }
    protected:
        void protectedFunctionA()
        {
            cout<<"This is protected of A"<<endl;
        }
    public :
        void publicFunctionA()
        {
            cout<<"This is public of A"<<endl;
        }

        A(int a)
        {
           cout<<"Parent constructor called"<<endl;
        }

        ~A()
        {
            cout<<"Destructor of Parent called"<<endl;
        }

};
class Av2 : public A
{

 private:
       void privateFunction()
       {
           cout<<"This is private of Av2"<<endl;
       }
    protected:
        void protectedFunction()
        {
            cout<<"This is protected of Av2"<<endl;
        }
    public :
        void publicFunction()
        {
            cout<<"This is public of Av2"<<endl;
           // privateFunctionA();
            protectedFunctionA();
            publicFunctionA();
        }

      Av2():A(5)
      {
         cout<<"Child Constructor called"<<endl;
      }

      ~Av2()
      {
          cout<<"Destructor of Child called"<<endl;
      }
};

int main()
{
    Av2 a;
    a.publicFunction();

    return 0;
}
