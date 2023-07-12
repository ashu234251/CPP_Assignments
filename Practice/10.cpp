#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int *p=new int[N];
    
    for(int i=0;i<N;i++)
    {
        cin>>p[i];
    }
    bool q[1000001]={0};
    for(int i=0;i<N;i++)
    {
        if(p[i]<=1000001)
         {
             (q[p[i]])++;
         }
    }
    for(int i=1;i<1000001;i++)
    {
        if(q[i]==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
    
}