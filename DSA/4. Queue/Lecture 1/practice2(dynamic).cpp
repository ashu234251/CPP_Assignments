#include<iostream>
using namespace std;
class Queue
{
      int rear;
      int front;
      int *q=new int;
      int size_of_queue;
      int size_of_array;
      int capacity_of_array;
    public:
      Queue()
      {
        rear=-1;
        front=-1;
        size_of_queue=0;
        size_of_array=0;
        capacity_of_array=1;
      }
      void Enqueue()
      {
        if(rear==-1)
        {
            front++;
            rear++;
            cout<<"Enter Value: ";
            cin>>q[rear];
            size_of_array++;  
            size_of_queue++;
        }
        else
        {
            if(size_of_array<capacity_of_array)
            {
                rear++;
                cout<<"Enter Value: ";
                cin>>q[rear];
                size_of_array++;
                size_of_queue++;
            }
            else
            {
                capacity_of_array=2*capacity_of_array;
                int *temp=new int[capacity_of_array];
                for(int i=0;i<size_of_array;i++)
                {
                    temp[i]=q[i];
                }
                delete q;
                q=temp;
                temp=NULL;

                {
                rear++;
                cout<<"Enter Value: ";
                cin>>q[rear];
                size_of_array++;
                size_of_queue++;
                }
            }
        }
      }
      void PrintQueue()
      {
        if(front==-1)
        {
            cout<<"Queue is Empty."<<endl;
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
              cout<<q[i]<<"-->";
            } 
            cout<<endl;
        }
      }
};
int main()
{
    Queue q1;
    q1.Enqueue();
    q1.Enqueue();
    q1.Enqueue();
    q1.Enqueue();
    q1.PrintQueue();

    return 0;
}