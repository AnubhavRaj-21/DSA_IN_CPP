#include<iostream>
using namespace std;

class Node
{
    public:
    int data,height;
    Node*left,*right;

    Node(int value)
    {
        data=value;
        height=1;
        left=right=NULL;
    }
};

int getheight(Node* root)
{
    if(!root)   return 0;

    else return root->height;
}

int getbalance(Node* root)
{
    return getheight(root->left)-getheight(root->right);
}

Node* rightRotation(Node* root)
{
    Node* child=root->left;
    Node* childright=child->right;

    child->right=root;
    root->left=childright;

    //updating the height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));

    return child;
}
Node *leftRotation(Node* root)
{
    Node* child=root->right;
    Node* childleft=child->left;

    child->left=root;
    root->right=childleft;

    //updating the height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));

    return child;
}

Node* insert(Node* root,int key)
{
    //duplicate elements are not allowed

    //cases ---root not present 
    if(!root)   return new Node(key);
    //and root present
    if(key<root->data)//attach to the left side
    root->left=insert(root->left,key);

    else if(key>root->data)
    root->right=insert(root->right,key);

    else return root;   //duplicate elements are not allowed

    //updating the height
    root->height=1+max(getheight(root->left),getheight(root->right));

    //check if the tree is balanced or not
    int balance=getbalance(root);

    //left left case
    if(balance>1&&key<root->left->data)
    {
       return rightRotation(root);
    }
    //right right case
    else if(balance<-1&&key>root->right->data)
    {
        return leftRotation(root);
    }
    //left right case
    else if(balance>1&&key>root->right->data)
    {
       root->left= leftRotation(root->left);
        return rightRotation(root);
    }
    //right left case
    else if(balance<-1&&key<root->right->data)
    {
        root->right=(root->right);
      return  leftRotation(root);
    }
    else    return root;
}

void inorder(Node* root)
{
    if(!root)   return;

    inorder(root->left);
    cout<<root->data<<" ";
    
    inorder(root->right);
}

int main()
{
    Node* root=NULL;

    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,19);
    root=insert(root,70);
    root=insert(root,90);
    root=insert(root,45);
    root=insert(root,54);
    root=insert(root,78);
    root=insert(root,23);
    root=insert(root,123);
    root=insert(root,56);
    root=insert(root,53);

    cout<<"Inorder: ";
    inorder(root);
}