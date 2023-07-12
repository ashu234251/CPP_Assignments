#include<iostream>
#include<string>
using namespace std;

char* f();
int main()
{
   //string s=f();
   char *p;
   p=f();

   cout<<p<<endl;
   free(p);

   return 0;
   
}
char* f()
{
int i=5,j=0;
char *s=new char[30];
   while(i<30)
   {
     s[j]='a';   // or *(s+j)='a';
     j++;
     i++;
   }

   return s;
}