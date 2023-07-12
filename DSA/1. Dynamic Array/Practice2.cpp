#include<iostream>
using namespace std;
class DynamicArray
{
      int *a;
      int size=0;
      int capacity=1;
    public:
      DynamicArray()
      {
        a=new int[1];
      }
      ~DynamicArray()
      {
        delete []a;
      }

      void insertElement(int index,int value)
      {
        if(size<capacity)
        {
            a[index]=value;
            size++;
        }
        else
        {
            capacity=2*capacity;
            int *temp=new int[capacity];
            for(int i=0;i<size;i++)
            {
                temp[i]=a[i];
            }
            delete []a;
            a=temp;
            a[index]=value;
            size++;
        }
      }
      void deleteElement(int index)
      {
        for(int i=index;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        size--;
      }
      void displayArray()
      {
        cout<<"Size is: "<<size<<endl;
        cout<<"Capacity is: "<<capacity<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<"  ";
        }
        cout<<endl;
      }
      void searchValue(int value)
      {
        int flag=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==value)
            {
              cout<<value<<" found at index "<<i<<endl;
              flag++;
            }   
        }
        if(flag==0)
           cout<<value<<" not found in the array."<<endl;
      }
      void ShrinkToFit()
      {
        int *temp=new int[size];
        for(int i=0;i<size;i++)
        {
            temp[i]=a[i];
        }
        delete []a;
        a=temp;
        capacity=size;
      }
};
int main()
{
    DynamicArray d1;
    int n;
    int value;
    cout<<"Enter Number of Elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        d1.insertElement(i,value);
    }
    d1.displayArray();

    int index;
    cout<<"Enter Index whose value you want to delete: ";
    cin>>index;
    d1.deleteElement(index);
    d1.ShrinkToFit();
    d1.displayArray();

    d1.searchValue(11);
    return 0;
}