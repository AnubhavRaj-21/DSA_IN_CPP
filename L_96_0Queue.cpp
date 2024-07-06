#include<iostream>
using namespace std;

class queue
{
    int* arr;
    int front,rear,size;
    public:
    queue(int n)        //constructor
    {
        arr=new int[n];
        front=rear=-1;
        size=n;
    }
    bool Isempty()
    {
        return front==-1;
    }
    bool Isfull()
    {
        return rear==size-1;
    }
    void push(int x)
    {
        if(Isempty())
        {
            front=rear=0;
            arr[0]=x;
            cout<<"Pushed"<<x<<"into the queue\n";
        }
        else if(Isfull())
        {
            cout<<"Queue overflowed\n";
            return;
        }
        else
        {
            rear++;
            arr[rear]=x;
            cout<<"Pushed"<<x<<"into the queue\n";
        }
    }

    void pop()
    {
        if(Isempty())
        {
            cout<<"Queue is underflowed\n";
            return;
        }
        else
        {
            if(front==rear) front=rear=-1;
            else front++;
        }
    }
    int start()
    {
        if(Isempty())
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        else return arr[front];
    }
};
int main()
{
    queue q(5);
    q.push(6);
    q.push(7);
}