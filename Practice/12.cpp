#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N,W;
  cin>>N;
  cin>>W;
  
  int x;
  vector<tuple<int,int>>L;
  for(int i=0;i<N;i++)
  {
      cin>>x;
      L.push_back(make_tuple(x,i));
  }
  sort(L.begin(), L.end());
  
  int a=0;
  int b=N-1;
  while(a<b)
  {
    if((get<0>(L[a])+get<0>(L[b]))==W)
    {
        if(get<1>(L[a])<get<1>(L[b]))
        {
          cout<<get<1>(L[a])<<" "<<get<1>(L[b]);
          break;
        }
        else
        {
          cout<<get<1>(L[b])<<" "<<get<1>(L[a]);
          break;
        }
    }
    else if((get<0>(L[a])+get<0>(L[b]))>W)
    {
        b--;
    }
    else if((get<0>(L[a])+get<0>(L[b]))<W)
    {
        a++;
    }  
  }
  if(a>=b)
    cout<<-1;
    
  return 0;
  
}