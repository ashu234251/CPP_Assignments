#include<iostream>
using namespace std;
class Node
{
    protected:
      int value;
      Node *next;

    public:
      Node()
      {
        value=0;
        next=NULL;
      }
};
class LinkedList:public Node
{
      Node *head;
    public:
      LinkedList()
      {
        head=NULL;
      }
      void insertValue(int v)
      {
        Node *temp=new Node;
        temp->value=v;
        if(head==NULL)
        {
          head=temp;
        }
        else
        {
            Node *t=head;
            while(t->next != NULL)
            {
                t=t->next;
            }
            t->next=temp;
        }
      }
      void displayNodes()
      {
        Node *temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->value<<"  ";
            temp=temp->next;
        }
        cout<<temp->value;
        cout<<endl;
      }
};
int main()
{
    LinkedList l1;
    l1.insertValue(11);
    l1.insertValue(21);
    l1.insertValue(31);
    l1.insertValue(41);
    l1.insertValue(51);
    l1.displayNodes();

    return 0;
}