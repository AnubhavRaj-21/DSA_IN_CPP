#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    node *head;
    head=NULL;
   
    //insert the node at the beginning
    int arr[5]={2,4,6,3};
    for(int i=0;i<4;i++)
    {
        if(head==NULL)
        {
            head=new node(arr[i]);
        }

        else 
        {
            node *temp;
            temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }

    //printing the above created linked list
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}