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
    node*head,*tail;
    tail=head=NULL;

    int arr[]={2,4,6,8};

    //insert the above arr in linked list by adding end elmt at the end
    for(int i=0;i<4;i++)
    {
        if(head==NULL)
        {
            head=new node(arr[i]);
            head=tail;
        }

        else
        {
            tail->next=new node(arr[i]);
            tail=tail->next;
        }
    }
}