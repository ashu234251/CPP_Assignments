#include<iostream>
using namespace std;
class Queue
{
      int front;
      int rear;
      int q[100];
      int size_of_queue;
    public:
      Queue()
      {
        front=-1;
        rear=-1;
        size_of_queue=0;
      }
      void Enqueue()
      {
        if(rear==-1)    // OR if(front==-1)
        {
            front++;
            rear++;
            cout<<"Enter Value: ";  
            cin>>q[rear];
            size_of_queue++;
        }
        else if(rear==99)
        {
            cout<<"Overflow."<<endl;
        }
        else
        {
            rear++;
            cout<<"Enter Value: ";  
            cin>>q[rear];
            size_of_queue++;
        }
      }
      void Dequeue()
      {
        if(front==-1)
        {
            cout<<"Queue is Empty."<<endl;
        } 
        else if(front==rear)
        {
            cout<<q[front]<<" deleted."<<endl;
            front=rear=-1;
            size_of_queue--;
        }
        else
        {
            cout<<q[front]<<" deleted."<<endl;
            front++;
            size_of_queue--;
        }
      }
      void PrintQueue()
      {
        if(front==-1)
        {
            cout<<"Queue Empty."<<endl;
        }
        else
        {
             for(int i=front;i<=rear;i++)
              {
                cout<<q[i]<<"-->";
              }
             cout<<endl;
        }
        cout<<"Size of the Queue is: "<<size_of_queue<<endl;
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
    cout<<endl;

    q1.Dequeue();
    q1.Dequeue();
    q1.PrintQueue();
    cout<<endl;

    return 0;

}