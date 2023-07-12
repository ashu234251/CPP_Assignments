#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int v)
        {
            data = v;
            left = NULL;
            right = NULL;
        }

        void preorder()
        {
            if(this != NULL)
            {
                cout<<data<<" ";
                left->preorder();
                right->preorder();
            }
        }

        void postorder()
        {
            if(this != NULL)
            {
                left->postorder();
                right->postorder();
                cout<<data<<" ";
            }
        }

        void inorder()
        {
            if(this != NULL)
            {
                left->inorder();
                cout<<data<<" ";
                right->inorder();
            }
        }
};

int main()
{

    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);
    root->right->right->left->left = new Node(10);
    root->right->right->left->right = new Node(11);
    root->right->right->right = new Node(9);
    root->right->right->left->right->left = new Node(12);

    cout<<"\nPreorder\n";
    root->preorder();
    cout<<"\nPostorder\n";
    root->postorder();
    cout<<"\nInorder\n";
    root->inorder();

    return 0;
}
