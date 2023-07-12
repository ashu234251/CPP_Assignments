#include<iostream>
using namespace std;
int main()
{
    int *array[3]=new int[4][3];
    cout<<"Enter Values: "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<"  ";
        }
    }
    return 0;
    
}