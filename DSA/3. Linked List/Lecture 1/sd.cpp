#include<iostream>
using namespace std;
class ABC
{
    public:
        int value;
        ABC *p;

        ABC()
        {
            cout<<"Default Constructor Called."<<endl;
            value=0;
            p=NULL;
        }
};
int main()
{
    ABC *temp=new ABC;
    
    return 0;
}