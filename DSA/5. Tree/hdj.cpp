#include<iostream>
using namespace std;
class ABC
{
  int a=5;
  public:
  void print()
  {
    cout<<"Value is : "<<a<<endl;
  }
  static void F(ABC &A);
};
void ABC::F(ABC &A)
{
  cout<<"Hello Everyone."<<endl;
  A.a=11;
}

int main()
{
  ABC a1;
  a1.print();

  ABC::F(a1);
 
  return 0;
}
  
/*
  const char* name;
  name="Ashish Varshney";
  cout<<name<<endl;
  name="Ankit Varshney";
  cout<<name<<endl;

  // Why above code works fine and below don't.-----> Because of the concept of "pointer value" & "pointed value".

  const int a=3;
  cout<<a<<endl;
  a=7;
  cout<<a<<endl;
  return 0;
*/