#include<iostream>
using namespace std;

int main()
{
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    
    int *a=new int[n*m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>*(a+(sizeof(int)*m*i)+(sizeof(int)*j));
        }
    }
    if(m*n==r*c)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<*(a+(sizeof(int)*c*i)+(sizeof(int)*j))<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<*(a+(sizeof(int)*m*i)+(sizeof(int)*j))<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
