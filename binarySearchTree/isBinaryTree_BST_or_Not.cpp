
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

bool isSubTreeLesser(node *root, int value)
{
    if(root == NULL) return true;
    else if(root->data<=value
    && isSubTreeLesser(root->left,value)
    && isSubTreeLesser(root->right,value))
    return true;
    else
    return false;
}

bool isSubTreeGreater(node *root, int value)
{
    if(root == NULL) return true;
    else if(root->data>value
    && isSubTreeLesser(root->left,value)
    && isSubTreeLesser(root->right,value))
    return true;
    else
    return false;
}



bool isBinarySearchTree(node *root)
{
    if(root == NULL) return true;

    else if(isSubTreeLesser(root->left,root->data)
    && isSubTreeGreater(root->right,root->data)
    && isBinarySearchTree(root->left)
    && isBinarySearchTree(root->right))
    return true;
    else return false;
}

int main()
{
    node *root = NULL;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,2);
    //root = insert(root,25);
    //root = insert(root,20);
    cout<<isBinarySearchTree(root);


    return 0;
}



