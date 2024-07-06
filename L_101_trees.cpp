#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node *left,*right;
    node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
int main()
{
    int x;
    cout<<"Enter the root element: ";
    cin>>x;
    int first,second;
    queue<node*>q;
    node *root=new node(x);
    q.push(root);

    //building the binary tree
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        cout<<"Enter the left child of"<<temp->data<<":  ";
        cin>>first;     //value of the left node
        //left node
        if(first!=-1)
        {
            temp->left=new node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of"<<temp->data<<":  ";
        cin>>second;    //value of the right node
        //right node
        if(second!=-1)
        {
            temp->right=new node(second);
            q.push(temp->right);
        }
    }
}