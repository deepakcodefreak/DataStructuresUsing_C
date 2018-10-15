
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
    if(root==NULL)
    {
        cout<<"Tree is empty\n";
        return -1;
    }

    node *counter = root;

    if(counter->right==NULL)
    {
        return counter->data;
    }

    return findMax(counter->right);

}

int findMin(node *root){
    if(root==NULL)
    {
        cout<<"Tree is empty\n";
        return -1;
    }

    node *counter = root;
    if(counter->left == NULL)
    {
        return counter->data;

    }

    return findMin(counter->left);


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

