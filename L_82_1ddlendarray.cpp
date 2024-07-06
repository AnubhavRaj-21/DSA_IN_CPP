//insertion of node in double linked list (from end)

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
    node*tail=NULL;

    int arr[]={1,4,12,43};
    //insert at start

for(int i=0;i<4;i++)
{
    //linked list doesn't exist
    if(head==NULL){
    head=new node(arr[i]);
    tail=head;
    }


    //already exist
    else
    {
        node*temp=new node(arr[i]);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

    //printing doubly linked list
    node*trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}