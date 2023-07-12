#include<iostream>
using namespace std;
class Node
{
    public:
      int value;
      Node *next;
      Node *prev;

      Node()
      {
        value=0;
        next=NULL;
        prev=NULL;
      }
};
class DCLL
{
      Node *head;
      int length=0;
    public:
      DCLL()
      {
        head=NULL;
      }
      void InsertAtBegin()
      {
        Node *temp=new Node;
        cout<<"Enter Value: ";
        cin>>temp->value;
        if(head==NULL)
        {
            head=temp;
            head->next=temp;
            head->prev=temp;
        }
        else
        {
            temp->next=head;
            temp->prev=head->prev;
            head->prev=temp;
            (temp->prev)->next=temp;
            head=temp;
        }
         cout<<"Node Inserted Successfully."<<endl;
         length++;
       }
      void InsertAtEnd()
      {
        Node *temp=new Node;
        cout<<"Enter Value: ";
        cin>>temp->value;
        if(head==NULL)
        {
            head=temp;
            head->next=temp;
            head->prev=temp;
        }
        else
        {
            Node *t=head;
            while(t->next!=head)
            {
              t=t->next;
            }
            t->next=temp;
            temp->prev=t;
            temp->next=head;
            head->prev=temp;
        } 
        cout<<"Node Inserted Successfully."<<endl;
        length++;
      }

      void InsertAtMiddle(int n)
      {
          Node *temp=new Node;
          cout<<"Enter Value: ";
          cin>>temp->value;

          Node *t=head;
          for(int x=1;x<n-1;x++)
             {
                t=t->next;
             }
          temp->next=t->next;
          (temp->next)->prev=temp;
          t->next=temp;
          temp->prev=t;

          cout<<"Node Inserted Successfully."<<endl;
          length++;
      }

      void DeleteNode(int n)
      {
        if(length==0 || n>length)
        {
            cout<<"No Node Available"<<endl;
            return;
        }
        else if(n==1) 
        {
            if(length==1)
               {
                 Node *t=head;
                 head=NULL;
                 delete t;
                 length--;
               }
            else
               {
                   Node *t=head;
                   t->next->prev=t->prev;
                   t->prev->next=t->next;
                   head=t->next;
                   delete t;
                   length--;
               }
        }
        else if(length==n)
        {
            Node *t=head->prev;
            t->prev->next=head;
            head->prev=t->prev;
            delete t;
            length--;
        }
        else
        {
            Node *temp=head;
            for(int x=1;x<n-1;x++)
            {
                temp=temp->next;
            }
            Node *t=temp->next;
            t->next->prev=temp;
            temp->next=t->next;
            delete t;
        }
      }
      void printDCLL()
      {
          Node *temp=head;
          while(temp->next!=head)
          {
            cout<<"Value: "<<temp->value<<endl;
            temp=temp->next;
          }
          cout<<"Value: "<<temp->value<<endl;
      }
};
int main()
{
    DCLL d1;
    d1.InsertAtEnd();
    d1.InsertAtEnd();
    d1.InsertAtEnd();
    d1.InsertAtEnd();
    d1.printDCLL();
    d1.InsertAtMiddle(2);
    d1.printDCLL();
    d1.InsertAtBegin();
    d1.printDCLL();

    d1.DeleteNode(1);
    d1.printDCLL();
    cout<<endl;
    d1.DeleteNode(5);
    d1.printDCLL();
    cout<<endl;
    d1.DeleteNode(3);
    d1.printDCLL();
    
   
}