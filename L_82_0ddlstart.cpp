//insertion of node in double linked list (from start)

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node*prev;

    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};

int main()
{
    node*head=NULL;

    //insert at start

    //linked list doesn't exist
    if(head==NULL)
    head=new node(5);


    //already exist
    else
    {
        node*temp=new node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

    //printing doubly linked list
    node*trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}