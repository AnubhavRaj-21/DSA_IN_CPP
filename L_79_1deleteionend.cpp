//deleting of node from end

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

    if(head!=NULL)  //checks if linked list exists
    {
        if(head->next==NULL) //checks if linked list is of only one node
        {
            node*temp=head;
            head=NULL;
            delete temp;
        }
        else
        {
            node*curr=head;
            node*prev=NULL;

            while(curr->next!=NULL)
            {
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
        }
    }

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}