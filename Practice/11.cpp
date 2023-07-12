#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int*p=new int[N*N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>*(p+(N*i)+j);
        }
    }
    int b;
    for(int i=N-1;i>=0;i--)
    {
        for(int j=0;j<N;j++)
        {
            cout<<*(p+i+(N*j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;  
}