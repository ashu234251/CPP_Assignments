#include<iostream>
#include<algorithm>
#include<queue>
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
   void Print_Preorder(Node *root)
   {
      if(root==NULL)
      {
        return;
      }
      cout<<root->value<<"  ";
      Print_Preorder(root->left);
      Print_Preorder(root->right);
   }
   void Print_Inorder(Node *root)
   {
      if(root==NULL)
      {
        return;
      }
      Print_Inorder(root->left);
      cout<<root->value<<"  ";
      Print_Inorder(root->right);
   }
   void Print_Postorder(Node *root)
   {
      if(root==NULL)
      {
        return;
      }
      Print_Postorder(root->left);
      Print_Postorder(root->right);
      cout<<root->value<<"  ";
   }
   void Print_Levelorder_Non_Recursive(Node *root)
   {
      queue<Node *>q;
      if(root==NULL)
         return;
      q.push(root);
      cout<<q.front()->value<<"  ";
      while(q.empty()==false)
      {
        if(q.front()->left !=NULL)
           q.push(q.front()->left);
        if(q.front()->right != NULL)
           q.push(q.front()->right);
        q.pop();
        if(q.empty()==false)
           cout<<q.front()->value<<"  ";
      }
   }

   int Height_Of_Tree_Non_Recursive(Node *root)
   {
      int height=0;
      if(root!=NULL)
        {
           queue<Node*>q;
           q.push(root);
           q.push(NULL);
           while(q.empty()==false)
           {
             if(q.front()==NULL)
             {
                height++;
                q.pop();
                if(q.empty()==false)
                   q.push(NULL);
             }
             else
             {
                if(q.front()->left !=NULL)
                   q.push(q.front()->left);
                if(q.front()->right !=NULL)
                   q.push(q.front()->right);
                q.pop(); 
             }
           }
           return height;
        }
      else
        return 0;
   }

   int Height_of_Tree_Recursive(Node *root)
   {
      if(root==NULL)
         return 0;
      else
      {
         return(max(Height_of_Tree_Recursive(root->left),Height_of_Tree_Recursive(root->right))+1);
      }
   }
   void Print_Levelorder_Recursive(Node *root)
   {
      int h=Height_of_Tree_Recursive(root);
      if(h==0)
         cout<<"Tree is Empty."<<endl;
      for(int i=0;i<h;i++)
      {
        Print_Current_Level(root,i);
      }
   }
   void Print_Current_Level(Node *root,int level)
   {
      if(root==NULL)
        return;
      if(level==0)
        cout<<root->value<<"  ";
      if(level>0)
      {
        Print_Current_Level(root->left,level-1);
        Print_Current_Level(root->right,level-1);
      }
   }
};


int main()
{
    Node *root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->left=new Node(8);
    root->right->right->right=new Node(9);
    root->right->right->left->left=new Node(10);
    root->right->right->left->right=new Node(11);
    root->right->right->left->right->left=new Node(12);

    cout<<"Pre-Order: ";
    root->Print_Preorder(root);
    cout<<endl;

    cout<<"In-Order: ";
    root->Print_Inorder(root);
    cout<<endl;

    cout<<"Post-Order: ";
    root->Print_Postorder(root);
    cout<<endl;

    cout<<"Level-Order: ";
    root->Print_Levelorder_Non_Recursive(root);
    cout<<endl;

    cout<<"Level-Order: ";
    root->Print_Levelorder_Recursive(root);
    cout<<endl;

    cout<<"Height of the Tree is: "<<root->Height_Of_Tree_Non_Recursive(root)<<endl;
    cout<<"Height of the Tree is: "<<root->Height_of_Tree_Recursive(root)<<endl;

    return 0;
 
}