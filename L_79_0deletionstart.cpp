//delete a node from start of a linked list

#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

node* createlinkedlist(int arr[],int index,int size,node *prev)
{
    if(index==size)
    return prev;

    node*temp;
    temp=new node(arr[index]);
    temp->next=prev;
    return createlinkedlist(arr,index+1,size,temp);
}
int main()
{
    node *head,*temp;
    head=NULL;
    int arr[]={2,4,6,8};

    head=createlinkedlist(arr,0,4,head);
    temp=head;

    //deleting a node from start
    if(head!=NULL)
    {
        node*temp=head;
        head=head->next;
        delete temp;
    }

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}