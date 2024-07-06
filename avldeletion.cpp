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
int getheight(Node* root)
{
    if(!root)   return 0;
    
    return root->height;
}

int getbalance(Node* root)
{
    return getheight(root->left)-getheight(root->right);
}

Node* deleteNode(Node* root, int key)
{
    //add code here,
    if(!root)   return NULL;
    
    if(key<root->data)
    root->left=deleteNode(root->left,key);
    
    else if(key>root->data)
    root->right=deleteNode(root->right,key);
    
    else//we get to the target node
    {
        //leaf node
        if(!root->left&&!root->right)
        {
            delete root;
            return NULL;
        }
        //one child
        //left one
        else if(root->left&&!root->right)
        {
            Node*temp=root->left;
            delete root;
            return temp;
        }
        //right one
         else if(!root->left&&root->right)
        {
            Node*temp=root->right;
            delete root;
            return temp;
        }
        //both child
        else
        {
            Node*curr=root->right;
            while(curr->left)   curr=curr->left;
            root->data=curr->data;
            root->right=deleteNode(root->right,root->data);
        }
    }
    //updating the height
    root->height=1+max(getheight(root->left),getheight(root->right));
    
    //check balance
    int balance=getbalance(root);
    //left side
    if(balance>1)
    {
      //ll
      if(getbalance(root->left)>=0)
      return rightRotation(root);
      //lr
      else{
      root->left=leftRotation(root->left);
      return rightRotation(root);
      }
    }
    
    //right side
    else if(balance<-1)
    {
        //rr
        if(getbalance(root->right)<=0)
        return leftRotation(root);
        //rl
        else
        {
            root->right=rightRotation(root->right);
            return leftRotation(root);
        }
    }
    else return root;
}