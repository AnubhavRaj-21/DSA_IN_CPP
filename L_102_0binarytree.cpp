#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;

    node(int value)
    {
        left=right=NULL;
        data=value;
    }
};

node* BinaryTree()
{
    int x;
    cin>>x;

    if(x==-1)   return NULL;

    node*temp=new node(x);
    cout<<"enter the left child of "<<x<<": ";
    temp->left=BinaryTree();
    cout<<"enter the right child of "<<x<<": ";
    temp->right=BinaryTree();

    return temp;
}
int main()
{
    cout<<"Enter the root node of the binary tree: ";
    node *root;
    root=BinaryTree();      //root will store the address of the root node
}