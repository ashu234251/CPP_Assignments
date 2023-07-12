#include<iostream>
using namespace std;
class Stack
{
      int *s;
      int capacity=1;
      int top=0;
    public:
      Stack()
      {
        s=new int[1];
      }
      void push(int value)
      {
        if(top<=capacity-1)
        {
            {
              s[top]=value;
              top++;
            }
        }
        else
        {
            capacity=2*capacity;
            int *temp=new int[capacity];
            for(int i=0;i<top;i++)
            {
                temp[i]=s[i];
            }
            delete []s;
            s=temp;

            {
              s[top]=value;
              top++;
            }
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
        cout<<"Size is: "<<top<<endl;
        cout<<"Capacity is: "<<capacity<<endl;
        for(int i=top-1;i>=0;i--)
        {
           cout<<s[i]<<"  ";
        }
        cout<<endl;
      }
      void StackTop()
      {
        cout<<"Value at top of the Stack is: "<<s[top-1]<<endl;
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
        if(top==0)
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
                cout<<"Size of Stack is: "<<s.StackSize()<<endl;
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