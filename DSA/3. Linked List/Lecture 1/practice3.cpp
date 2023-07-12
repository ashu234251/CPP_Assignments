#include<iostream>
using namespace std;
class Node
{
    public:
      int id;
      string name;
      Node *next;

      Node()
      {
        id=0;
        name="\0";
        next=NULL;
      }
};
class LinkedList
{
    public:
      Node *head;
      int no_of_nodes=0;
      LinkedList()
      {
        head=NULL;
      }
      void InsertAtEnd()
      {
        Node *temp=new Node();
        cout<<"Enter I'd: ";
        cin>>temp->id;
        cout<<"Enter Name: ";
        fflush(stdin);
        getline(cin,temp->name);
        if(head==NULL)
        {
           head=temp;
           no_of_nodes++;
        }
        else
        {
            Node *t=head;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=temp;
            no_of_nodes++;
        }
      }
      void display()
      {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<"I'd: "<<temp->id<<"  Name: "<<temp->name<<endl;
            temp=temp->next;
        }
      }
      void getNo_of_Nodes()
      {
        cout<<"There are total "<<no_of_nodes<<" nodes. "<<endl;
      }
      void InsertAtBeginning()
      {
        Node *temp=new Node;
        cout<<"Enter I'd: ";
        cin>>temp->id;
        cout<<"Enter Name: ";
        fflush(stdin);
        getline(cin,temp->name);
        temp->next=head;
        head=temp;

        no_of_nodes++;
      }
      void InsertAtPosition(int n)
      {
        Node *temp=new Node;
        cout<<"Enter I'd: ";
        cin>>temp->id;
        cout<<"Enter Name: ";
        fflush(stdin);
        getline(cin,temp->name);
        Node *t=head;
        for(int x=1;x<n-1;x++)
        {
            t=t->next;
        }
        temp->next=t->next;
        t->next=temp;

        no_of_nodes++;
      }
      void DeleteNode(int n)
      {
        Node *t=head;
        if(n==1)
        {
            head=head->next;
            delete t;
        }
        else
        {
            for(int x=1;x<n-1;x++)
            {
              t=t->next;
            }
            Node *temp=t;
            t->next=(t->next)->next;
            delete temp->next;
        }
         no_of_nodes--;
      }
};
int main()
{
    LinkedList l1;
    l1.InsertAtEnd();
    l1.InsertAtEnd();
    l1.InsertAtEnd();
    l1.display();

    l1.InsertAtBeginning();
    l1.display();

    l1.InsertAtPosition(5);
    l1.display();

    l1.DeleteNode(1);
    l1.display();

    l1.getNo_of_Nodes();

    return 0;
}