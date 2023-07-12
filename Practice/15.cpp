#include<iostream>
using namespace std;

int main()
{
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    if(n*m==r*c)
    {
        int b[r][c];
        int cnt = 0;
        for (int row = 0; row < n; ++ row) 
        {
            for (int col = 0; col < m; ++ col) 
            {                
                b[cnt / c][cnt % c] = a[row][col];
                cnt ++;
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}