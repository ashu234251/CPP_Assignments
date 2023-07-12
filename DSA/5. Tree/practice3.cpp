#include<iostream>
#include<queue>
using namespace std;
class BST
{
  public:
    int value;
    BST *left;
    BST *right;
    BST()
    {
        value=0;
        left=NULL;
        right=NULL;
    }
    BST(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
    }
    BST* Insert(int v)
    {
        if(this==NULL)
        {
            BST *temp=new BST(v);
            return temp;
        }
        if(v < this->value)
            this->left=this->left->Insert(v);
        if(v >= this->value)
            this->right=this->right->Insert(v);
        return this;
    }
    void Print_Preorder(BST *root)
    {
        if(root==NULL)
            return;
        cout<<root->value<<"  ";
        Print_Preorder(root->left);
        Print_Preorder(root->right);
    }
    void Print_Inorder(BST *root)
    {
        if(root==NULL)
            return;
        Print_Inorder(root->left);
        cout<<root->value<<"  ";
        Print_Inorder(root->right);
    }
    void Print_Postorder(BST *root)
    {
        if(root==NULL)
            return;
        Print_Postorder(root->left);
        Print_Postorder(root->right);
        cout<<root->value<<"  ";
    }
    void Print_Levelorder(BST *root)
    {
        if(root==NULL)
           return;
        queue<BST*>q;
        q.push(root);
        while(q.empty()==false)
        {
            cout<<q.front()->value<<"  ";
            if(q.front()->left != NULL)
               q.push(q.front()->left);
            if(q.front()->right != NULL)
               q.push(q.front()->right);
            q.pop();
        }
    }
    BST* Find_Maximum(BST *root)
    {
        if(root->right==NULL)
          return root;
        else
          return Find_Maximum(root->right);
    }
    BST* Find_Minimum(BST *root)
    {
        if(root->left==NULL)
          return root;
        else
          return Find_Minimum(root->left);
    }
    void Search_Node(int v)
    {
        if(this==NULL)
           cout<<"Tree is Empty.";
        queue<BST*>q;
        q.push(this);
        while(q.empty()==false)
        {
            if(q.front()->value==v)
            {
                cout<<"Node Found."<<endl;
                return;
            }
            if(q.front()->left != NULL)
               q.push(q.front()->left);
            if(q.front()->right != NULL)
               q.push(q.front()->right);
            q.pop();
        }
        cout<<"Node Not Found."<<endl;
    }
    BST* Inorder_Successor(BST *root)
    {
        if(root==NULL)
           return NULL;
        else
        {
            return Find_Minimum(root->right);
        }
    }
    BST* Inorder_Predecessor(BST *root)
    {
        if(root==NULL)
           return NULL;
        else
        {
            return Find_Maximum(root->left);
        }
    }
    BST* Delete_Node(BST *root,int v)
    {
        if(v > root->value)
          root->right = Delete_Node(root->right,v);
        else if(v < root->value)
          root->left = Delete_Node(root->left,v);
        else
        {
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            if(root->left==NULL)
            {
                BST *temp=root->right;
                delete root;
                return temp;
            }
            if(root->right==NULL)
            {
                BST *temp=root->left;
                delete root;
                return temp;
            }
            else
            {
                BST *temp=Inorder_Successor(root);
                root->value=temp->value;
                root->right = Delete_Node(root->right,temp->value);
            }
        }
        return root;
    } 
};
int main()
{
    BST *root=new BST(20);
    root->Insert(15);
    root->Insert(25);
    root->Insert(10);
    root->Insert(18); 
    root->Insert(23);
    root->Insert(30);
    root->Insert(16);
    root->Insert(19);
    root->Insert(24);
    root->Insert(28);
    root->Insert(40);

    cout<<"Pre-Order   : ";
    root->Print_Preorder(root);
    cout<<endl;

    cout<<"In-Order    : ";
    root->Print_Inorder(root);
    cout<<endl;

    cout<<"Post-Order  : ";
    root->Print_Postorder(root);
    cout<<endl;

    cout<<"Level-Order : ";
    root->Print_Levelorder(root);
    cout<<endl;

    cout<<"Maximum Node is: "<<root->Find_Maximum(root)->value<<endl;
    cout<<"Minimum Node is: "<<root->Find_Minimum(root)->value<<endl;

    root->Search_Node(24);
    root->Search_Node(14);

    cout<<"Inorder Successor of 25 is: "<<root->Inorder_Successor(root->right)->value<<endl;
    cout<<"Inorder Predecessor of 25 is: "<<root->Inorder_Predecessor(root->right)->value<<endl;
    int x;
    cin>>x;

    root->Delete_Node(root,16);
    root->Delete_Node(root,23);
    root->Delete_Node(root,25);

    cout<<"Pre-Order   : ";
    root->Print_Preorder(root);
    cout<<endl;

    cout<<"In-Order    : ";
    root->Print_Inorder(root);
    cout<<endl;

    cout<<"Post-Order  : ";
    root->Print_Postorder(root);
    cout<<endl;

    return 0;
} 