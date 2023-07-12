#include<iostream>
using namespace std;
class Stack
{
      int s[100];
      int top=-1;
    public:
      void push(int value)
      {
        if(isStackFull())
          cout<<"Stack Memory Full. Can't add new value."<<endl;
        else
        {
          top++;
          s[top]=value;
        }
      }
      void pop()
      {
        if(isStackEmpty())
          cout<<"Stack Empty. So No Value available which can be popped."<<endl;
        else
          top--;
      }
      void displayStack()
      {
        for(int i=top;i>=0;i--)
        {
           cout<<s[i]<<"  ";
        }
        cout<<endl;
      }
      void StackTop()
      {
        cout<<"Value at top of the Stack is: "<<s[top]<<endl;
      }
      int StackSize()
      {
        if(isStackEmpty())
        {
          return 0;
        }
        else
          return top;
      }
      int isStackEmpty()
      {
        if(top==-1)
          return 1;
        else 
          return 0;
      }
      int isStackFull()
      {
        if(top>=99)
          return 1;
        else 
          return 0;
      }
};
int main()
{
    Stack s;
    while(1)
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display Stack Values"<<endl;
        cout<<"4.Value at Top of Stack"<<endl;
        cout<<"5.Size of Stack"<<endl;
        cout<<"6.Exit"<<endl;

        int choice;
        int value;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
              cout<<"Enter Value to be pushed : ";
              cin>>value;
              s.push(value);
              cout<<endl;
              break;
            case 2:
              s.pop();
              cout<<"Top Value popped successfully."<<endl<<endl;
              break;
            case 3:
              s.displayStack();
              cout<<endl;
              break;
            case 4:
              s.StackTop();
              cout<<endl;
              break;
            case 5:
              if(s.StackSize())
                cout<<"Size of Stack is: "<<s.StackSize()+1<<endl;
              else
                cout<<"Stack is Empty."<<endl;
              cout<<endl;
              break;
            case 6:
              exit(0);
        }
    }
    return 0;
}