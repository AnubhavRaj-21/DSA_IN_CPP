#include<iostream>
using namespace std;

class dequeue
{
    int front,rear,size;
    int* arr;
    public:
    dequeue(int n)  //constructor
    {
        size=n;
        arr=new int[n];
        front=rear=-1;
    }
    //empty
    bool empty()
    {
        return front==-1;
    }
    //full
    bool Isfull()
    {
        return (rear+1)%size==front;
    }
    //pushing element in front
    void push_front(int x)
    {
        if(empty())
        {
            front=rear=0;
            arr[0]=x;
            cout<<"Pushed "<<x<<"in front of dequeue";
            return;
        }
        else if(Isfull())
        {
            return;
        }
        else
        {
            front=(front-1+size)%size;
            arr[front]=x;
            cout<<"Pushed "<<x<<"in front of dequeue";
            return;
        }
    }

    void push_back(int x)
    {
        if(empty())
        {
            front=rear=0;
            arr[0]=x;
            cout<<"Pushed "<<x<<"in back of dequeue";
            return;
        }
        else if(Isfull())
        {
            return;
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<"in back of dequeue";
            return;
        }
    }

    void pop_front()
    {
        if(empty()) 
        {
            cout<<"dequeue underflowed\n";
            return;
        }
        else
        {
            //single element
            if(front==rear) 
            {
                cout<<"Popped "<<arr[front]<<"front of dequeue";
                front=rear=-1;
            }    
            //more than one
            else front=(front+1)%size;
        }
    }

    void pop_back()
    {
        if(empty()) 
        {
            cout<<"dequeue underflowed\n";
            return;
        }
        else
        {
            //single element
            if(front==rear) 
            {
                cout<<"Popped "<<arr[rear]<<"back of dequeue";
                front=rear=-1;
            }    
            //more than one
            else 
            {
                cout<<"Popped "<<arr[rear]<<"back of dequeue\n";
                rear=(rear-1+size)%size;
            }  
        }      
    }        
    int start()
    {
        if(empty()) return -1;
        else return arr[front];
    }
    int end()
    {
        if(empty()) return -1;
        else return arr[rear];
    }
};

int main()
{
    dequeue d(5);
    d.push_back(4);
    d.push_front(452);
}