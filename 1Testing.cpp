#include<iostream>
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;
    public:
    stack(int s)
    {
        size=s;
        top=-1;
        arr[]=new int[s];
    }
    void push(int value)
    {
        if(top==-1)
        cout<<"Stack overflow ";
        else
        arr[top]=value;
    }
};
int main()
{

}