#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node *left;
    Node *right;
    Node()
    {
        left=NULL;
        right=NULL;
        cout<<"Enter Value: ";
        cin>>value;
    }
    void Print_PreOrder(Node *parent)
    {
        if(parent!=NULL)
        {
            cout<<parent->value<<"  ";
            Print_PreOrder(parent->left);
            Print_PreOrder(parent->right);
        }
    }
};
int main()
{
    Node *P=new Node();
    P->left=new Node();
    P->right=new Node();
    P->left->left=new Node();
    P->left->right=new Node();
    P->right->left=new Node();
    P->right->right=new Node();

    P->Print_PreOrder(P);

    return 0;
}