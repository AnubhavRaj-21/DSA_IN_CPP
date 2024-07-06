#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next ,*prev;
    node(int value)
    {
        data=value;
        next=prev=NULL;
    }
};

class dequeue
{
    public:
    node *front,*rear;
    
    dequeue()
    {
        front=rear=NULL;
    }
    void push_front(int x)
    {
        if(front==NULL)
        {
            front=rear=new node(x);
            cout<<"Pushed "<<x<<"in front of dequeue\n";
            return;
        }
        else
        {
            node *temp=new node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"Pushed "<<x<<"in front of dequeue\n";
            return;
        }
    }

    void push_back(int x)
    {
        if(front==NULL)
        {
            front=rear=new node(x);
            cout<<"Pushed "<<x<<"in back of dequeue\n";
            return;
        }
        else
        {
            node *temp=new node(x);
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            cout<<"Pushed "<<x<<"in back of dequeue\n";
            return;
        }
    }
    void pop_front(int x)
    {
        if(front==NULL) return ;

        else
        {
            node *temp=front;
            front=front->next;
            cout<<"Popped "<<temp->data<<"front of dequeue\n";
            delete temp;
            //more than one node
            if(front) front->prev=NULL;
            //one node
            else rear=NULL;
        }
    }

    void pop_back(int x)
    {
        if(front==NULL) return ;

        else
        {
            node *temp=rear;
            rear=rear->prev;
            cout<<"Popped "<<temp->data<<"back of dequeue\n";
            delete temp;
            //more than one node
            if(rear) rear->next=NULL;
            //one node
            else front=NULL;
        }
    } 

    int start()
    {
        if(front==NULL) return -1;
        else return front->data;
    }  
    int end()
    {
        if(front==NULL) return -1;
        else return rear->data;
    }
};
int main()
{
    dequeue d;
    d.push_back(4);
    d.push_front(45);
    cout<<d.start();
}