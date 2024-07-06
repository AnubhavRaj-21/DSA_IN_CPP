#include<iostream>
using namespace std;

//Implementing the stack
class stack
{
  int *arr;
  int size;
  int top;
 
  public:
  bool flag;
  
    stack(int s)
    {
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;
    }

    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"Stack overflow";
        }

        else
        {
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into the stack\n";
            flag=0;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow\n";
            return;
        }
        else
        cout<<"Popped "<<arr[top]<<" from the stack\n";
        top--;
        if(top==-1)
        flag=1; 
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"The stack is empty\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        return top==-1;
        //no need to write return 0 code;
    }

    int IsSize()
    {
        return top+1;
    }
};
int main()
{
    stack s(5);
    s.push(5);
    // s.push(6);
    // s.push(7);
    // s.push(8);
    // s.push(9);
    // s.pop();

    int value=s.isEmpty();
    if(s.flag==0)
    cout<<value;
}