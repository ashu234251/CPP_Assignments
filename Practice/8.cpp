#include<iostream>
using  namespace std;

class Node
{
    public:
    Node *next;
    int value;
    Node()
    {
        next=NULL;
        value=0;
    }
};
class LinkedList
{
    public:
    Node *head=new Node();
    void insertNode(int v)
    {
        if(head==NULL)
        {
            head=new Node();
            head->value=v;
            head->next=NULL;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new Node();
            temp->next->value=v;
        }
    }
    void display()
    {
        Node *temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->value<<"  ";
        }
        cout<<temp->value<<endl;
    }
};

int main()
{
   LinkedList l1;
   l1.insertNode(1);
   l1.insertNode(11);
   l1.insertNode(21);
   l1.display();
}