#include<iostream>

using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;
};

node* createNode(int data)
{
    node *newnode = new node();
    newnode->data = data;
    return newnode;
}


node* insert(node *root,int data)
{
    if(root == NULL)
    {
        root = createNode(data);
    }else if(data<=root->data)
    {
        root->left = insert(root->left,data);
    }else{
        root->right = insert(root->right,data);
    }

    return root;
}


bool search(node *root,int value)
{
    if(root == NULL) return false;
    else if (root->data == value) return true;
    else if (value<=root->data) return search(root->left,value);
    else return search(root->right,value);
}

int main()
{
node *root = NULL;
root = insert(root,10);
root = insert(root,5);
root = insert(root,15);
int n;
cout<<"Enter the value you want to search in the Binay Tree\n";
cin>>n;
int res = search(root,n);
if(res == 1)
    cout<<"Found";
else
    cout<<"Not Found";
return 0;
}
