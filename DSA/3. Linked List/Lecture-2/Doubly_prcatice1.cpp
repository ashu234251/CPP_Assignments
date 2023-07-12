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
class DLL
{
      Node *head;
      int length=0;
    public:
      DLL()
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
        }
        else
        {
            temp->next=head;
            (temp->next)->prev=temp;
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
        }
        else
        {
            Node *t=head;
            while(t->next!=NULL)
            {
              t=t->next;
            }
            t->next=temp;
            temp->prev=t;
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
            Node *t=head;
            if(length!=1)
                t->next->prev=NULL;
            head=t->next;
            delete t;
            length--;
        }
        else if(length==n)
        {
            Node *temp=head;
            while(temp->next->next!=NULL)
              {
                 temp=temp->next;
              }
            Node *t=temp->next;
            temp->next=NULL;
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
      void printDLL()
      {
          Node *temp=head;
          while(temp!=NULL)
          {
            cout<<"Value: "<<temp->value<<endl;
            temp=temp->next;
          }
      }
};
int main()
{
    DLL d1;
    d1.InsertAtEnd();
    d1.InsertAtEnd();
    d1.InsertAtEnd();
    d1.InsertAtEnd();
    d1.printDLL();

    d1.InsertAtMiddle(2);
    d1.printDLL();

    d1.InsertAtBegin();
    d1.printDLL();
    cout<<endl;
    
    d1.DeleteNode(1);
    d1.printDLL();
    cout<<endl;

    d1.DeleteNode(8);
    d1.printDLL();
}