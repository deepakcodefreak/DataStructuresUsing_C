#include<iostream>
#include<climits>

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


bool isBSTutils(node *root, int minValue,int maxValue)
{
    if(root == NULL) return true;
    else if(root->data>minValue
     && root->data<maxValue
     && isBSTutils(root->left,minValue,root->data)
     && isBSTutils(root->right,root->data,maxValue))
     return true;
     else return false;
}

bool isBinarySearchTree(node *root)
{
    return isBSTutils(root,INT_MIN,INT_MAX);
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
    cout<<isBinarySearchTree(root);


    return 0;
}



