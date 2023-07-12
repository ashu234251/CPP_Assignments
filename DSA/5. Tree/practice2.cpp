#include<iostream>
using namespace std;
class Node
{
  public:
    int value;
    Node *left;
    Node *right;
    
    Node(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
    }
};
class BST:public Node
{
  public:
    Node *root;
    BST()
    {
        root=NULL:
    }
    void Insert(int v)
    {
       if(root==NULL)
       {
         root=new Node(v);
       }
       else
       {
          Node *temp=root;
          if(v < root->value)
          {
            if(root->left==NULL)
                 root->left=new Node(v);
               
          }
       }
    }

};
int main()
{
    BST T1;
}