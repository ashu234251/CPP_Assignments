#include<iostream>
using namespace std;
class Array
{
      int a[100],size=0;
    public:
      int getSize()
      {
        return size;
      }
      void insertElement(int index,int value)
      {
         a[index]=value;
         size++;
      }
      void displayArray()
      {
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<"  ";
        }
        cout<<endl;
      }
      void deleteElement(int index)
      {
          for(int i=index;i<size-1;i++)
           {
            a[i]=a[i+1];
           }
          size--;
      }
      void insertElementAt(int index,int value)
      {
          size++;
          for(int i=size;i>index;i--)
          {
            a[i]=a[i-1];
          }
          a[index]=value;
      }
};
int main()
{
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;
    cout<<"Enter "<<size<<" Values: "<<endl;
    Array a;
    int value;
    for(int i=0;i<size;i++)
    {
       cin>>value;
       a.insertElement(i,value);
    }
    a.displayArray();

    int index;
    cout<<"Enter Index which you want to delete: ";
    cin>>index;
    if(index>=a.getSize())
        cout<<"Invalid Index."<<endl;
    else
    {
        a.deleteElement(index);
        a.displayArray();
    }
    
    cout<<"Enter Index at which you want to Enter Value: ";
    cin>>index;
    if(index>a.getSize()|| index>=100)
       cout<<"Wrong Location Entered. Either memory Full or memory leakage."<<endl;
    else
    {
       cout<<"Value you want to Enter at this Index: ";
       cin>>value;
       a.insertElementAt(index,value);
       a.displayArray();
    }
    
    return 0;
}