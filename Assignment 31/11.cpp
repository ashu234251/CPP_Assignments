/*
10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include<iostream>
#include<cstring>
using namespace std;
class Worker
{
    protected:
      int code;
      char name[35];
      float salary,ta;
    public:
      Worker()
      {}
      Worker(int c,char *n,float s)
      {
        code=c;
        strcpy(name,n);
        salary=s;
      }

};
class Officer
{
    protected:
      float da,hra;
    public:
      Officer()
      {}
      Officer(float d,float h)
      {
        da=d;
        hra=h;
      }
      
};
class Manager:public Worker,public Officer
{
      float ta;
    public:
    
      Manager(int c,char *n,float s,float d,float h):Worker(c,n,s),Officer(d,h)
      {}

      void displayManager()
      {
        cout<<"Code               : "<<code<<endl;
        cout<<"Name               : "<<name<<endl;
        cout<<"Salary             : "<<salary<<endl;
        cout<<"DA                 : "<<da<<endl;
        cout<<"HRA                : "<<hra<<endl;
        cout<<"TA                 : "<<salary/10<<endl;
        cout<<"Gross Salary       : "<<(salary+da+hra+salary/10)<<endl;
        cout<<"--------------------------------"<<endl;
      }
};
int main()
{
    int n;
    cout<<"Enter Manager Count: ";
    cin>>n;
    Manager *m;
    m=new Manager[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Manager Information for "<<i+1<<endl;
        cout<<"Enter Code         : ";
        int c;
        cin>>c;
        fflush(stdin);
        cout<<"Enter Name         : ";
        char n[40];
        gets(n);
        cout<<"Enter Salary       : ";
        float s;
        cin>>s;
        cout<<"Enter DA           : ";
        float da;
        cin>>da;
        cout<<"Enter HRA          : ";
        float hra;
        cin>>hra;

        m[i]=Manager(c,n,s,da,hra);
        
    }
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Manager Information"<<endl;
    cout<<"----------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        m[i].displayManager();
    }

    return 0;
}