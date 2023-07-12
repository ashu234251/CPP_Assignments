#include<iostream>
#include<set>
#include<iterator>
using namespace std;
/*
int main()
{
    multiset<int, greater<int>> s;

    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(10);
    s.insert(5);

    set<int> s2(s.begin(),s.end());

    set<int , greater<int>>::iterator x;

    for(x = s.begin() ; x != s.end() ; x++)
    {
        cout<<*x<<" ";
    }

    cout<<endl;
    for(x = s2.begin() ; x != s2.end() ; x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}*/
int main()
{
    set<int> s;
    s.insert(2);
    s.insert(51);
    s.insert(7);
    s.insert(11);
    s.insert(15);
    s.insert(7);

    set<int>::iterator x;
    for(x=s.begin();x!=s.end();x++)
    {
        cout<<*x<<"  ";
    }
    return 0;
}