#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    vector<int>ans;
    int top=0,bottom=n-1;
    int left=0;right=m-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            ans.push_back(matrix[top][i]);
        }
        for(int i=top+1; i<=bottom;i++)
        {
            ans.push_back(matrix[i][right]);
        }
        if(top!=bottom)
        {
            for(int i=right-1;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
        }
        if(left!=right)
        {
            for(int i=bottom-1;i>=top+1;i--)
            {
                ans.push_back(matrix[i][left]);
            }
        }
        top++;
        bottom--;
        left++;
        right--;
    }
    for(int a:ans)cout<<a<<" ";
    cout<<endl;
    
    return 0;
}