#include<iostream>

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
    }else if(data<=root-data){
        root->left = createNode(root->left,data);
    }else{
        root->right = createNode(root->right,data);
    }
        return root;
}

int main()
{
    node *root = NULL;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);
    return 0;
}
