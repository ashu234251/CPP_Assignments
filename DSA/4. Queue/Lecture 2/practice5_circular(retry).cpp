#include<iostream>
using namespace std;
class Circular_Double_Ended_Queue
{
      int front;
      int rear;
      int q[5];
      int size_of_queue;
    public:
      Circular_Double_Ended_Queue()
      {
        front=-1;
        rear=-1;
        size_of_queue=0;
      }
      void InsertAtEnd()
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
      void InsertAtFront()
      {
        if(rear==-1)
        {
            rear++;
            front++;
            cout<<"Enter value: ";
            cin>>q[rear];
            size_of_queue++;
        }
        else if(rear==99)
        {
            cout<<"Overflow."<<endl;
        }
        else
        {
            for(int i=rear;i>=front;i--)
            {
                q[i+1]=q[i];
            }
            cout<<"Enter Value: ";
            cin>>q[front];
            rear++;
            size_of_queue++;
        }
      }
      void DeletionFromFront()
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
      void DeletionFromEnd()
      {
        if(rear==-1)
        {
            cout<<"Queue is Empty."<<endl;
        }
        else if(rear==front)
        {
            cout<<q[rear]<<" deleted."<<endl;
            rear==front==-1;
            size_of_queue--;
        }
        else
        {
            cout<<q[rear]<<" deleted."<<endl;
            rear--;
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
    Circular_Double_Ended_Queue q1;
    q1.InsertAtEnd();
    q1.InsertAtEnd();
    q1.InsertAtEnd();
    q1.InsertAtEnd();
    q1.PrintQueue();
    cout<<endl;

    q1.InsertAtFront();
    q1.InsertAtFront();
    q1.PrintQueue();
    cout<<endl;

    q1.DeletionFromFront();
    q1.DeletionFromFront();
    q1.PrintQueue();
    cout<<endl;

    q1.DeletionFromEnd();
    q1.PrintQueue();
    

    return 0;

}