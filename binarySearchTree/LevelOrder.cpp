#include<iostream>
#include<queue>


using namespace std;


class node{
public:
    int data;
    node *left;
    node *right;
};

node* createNode(int data){
    node *newnode = new node();
    newnode->data = data;
    return newnode;
}

node* insert(node *root,int data)
{

    if(root==NULL)
    {
        root = createNode(data);
    }else if(data<=root->data){
        root->left = insert(root->left,data);
    }else{
        root->right = insert(root->right,data);
    }
        return root;
}


void levelOrder(node *root)
{
    if(root == NULL) return;
    queue<node *> q;
    q.push(root);

    while(!q.empty())
    {
        node *mynode = q.front();
        cout<<mynode->data<<" ";
        if(mynode->left!=NULL) q.push(mynode->left);
        if(mynode->right!=NULL) q.push(mynode->right);
        q.pop();
    }
}


int main()
{
    node *root = NULL;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,2);
    root = insert(root,25);
    root = insert(root,20);
    levelOrder(root);


    return 0;
}


