#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

class stack
{
    node *top;
    int size;
    public:
    stack()
    {
        top=NULL;
        size=0;
    }
    void push(int value)
    {
        node *temp=new node(value);
        if(temp==NULL)
        {
            cout<<"Stack is overflowed\n";
            return ;
        }
        else
        {
            temp->next=top;
            top=temp;
            size++;
        }
    }
    void pop()
    {
        if(top==NULL)
        cout<<"Stack is underflow\n";
        else
        {
            node *temp=top;
            cout<<"Popped "<<temp->data<<" from the stack";
            top=top->next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        return top->data;
    }
    bool isEmpty()
    {
        return top==NULL;
    }
    int IsSize()
    {
        return size;
    }
};

int main()
{
    stack s;
    s.push(6);
}