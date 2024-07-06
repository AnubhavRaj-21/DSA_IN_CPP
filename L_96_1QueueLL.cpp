#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class queue
{
    Node *front,*rear;
    public:
    queue()
    {
        front=rear=NULL;
    }
    bool Isempty()
    {
        return front==NULL;
    }
    void push(int x)
    {
        if(Isempty())
        {
            front=new Node(x);
            rear=front;
            return;
        }
        else
        {
            rear->next=new Node(x);
            rear=rear->next;
        }
    }
    void pop()
    {
        if(Isempty())
        {
            cout<<"Queue underflow";
            return;
        }
        else
        {
            Node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    int start()
    {
        if(Isempty())
        {
            cout<<"Queue is empty";
            return -1;
        }
        else
        return front->data;
    }
};
int main()
{

}