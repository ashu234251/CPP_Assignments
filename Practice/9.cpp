#include<iostream>
using namespace std;

void Array(int [],int);
int main()
{
    int T;
    cin>>T;
    int *p=new int[T];
    for(int i=0;i<T;i++)
    {
        cin>>p[i];
    }
    Array(p,T);
    
    return 0;
}
void Array(int a[],int T)
{
    for(int i=0;i<T;i++)
    {
        a[i]=a[i]*a[i];
    }
    for(int i=0;i<T-1;i++)
    {
        for(int j=i+1;j<T;j++)
        {  
            if(a[i]>a[j])
            {
                int temp; 
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<T;i++)
    {
        cout<<a[i]<<" ";
    }
}