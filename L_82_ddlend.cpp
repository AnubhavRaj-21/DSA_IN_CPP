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

   for(int i=0;i<4;i++)
   {
    what if
   }

    //printing doubly linked list
    node*trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}