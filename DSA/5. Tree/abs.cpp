#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int value;
  struct Node *a[];

  Node(int v)
  {
    value=v;
  }
};
int main()
{
  struct Node s(50);
  s.value=1;
  s.a[0]=new struct Node(10);
  s.a[1]=new struct Node(20);
  s.a[2]=new struct Node(200);

  cout<<s.a[0]<<endl;  
  cout<<s.value<<"  ";
  cout<<s.a[1]->value<<"  ";
  cout<<s.a[2]->value<<"  ";

  return 0;

}