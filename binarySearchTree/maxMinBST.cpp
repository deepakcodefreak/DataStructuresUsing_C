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
    }else if(data<=root->data){
        root->left = insert(root->left,data);
    }else{
        root->right = insert(root->right,data);
    }
        return root;
}

int findMax(node *root){
    node *counter = root;
    while(counter->right!=NULL)
    {
        counter = counter->right;
    }

    return counter->data;

}

int findMin(node *root){
    node *counter = root;
    while(counter->left!=NULL)
    {
        counter = counter->left;
    }

    return counter->data;

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
    cout<<findMin(root)<<endl;
    cout<<findMax(root);
    return 0;
}

