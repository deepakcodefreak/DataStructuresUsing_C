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

void PreOrder(node *root)
{
    if(root == NULL) return ;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

node* findMin(node *root)
{
    while(root->left!=NULL)
    {
        root = root->left;
    }
    return root;

}


node* Delete(node *root, int data)
{
    if(root == NULL) return root;
    else if(data < root->data) root->left = Delete(root->left,data);
    else if(data > root->data) root->right = Delete(root->right,data);
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
            //return root;
        }
        else if(root->left == NULL)
        {
            node *temp = root;
            root = temp->right;
            delete temp;
            //return root;
        }
        else if(root->right == NULL)
        {
            node *temp = root;
            root = temp->left;
            delete temp;
            //return root;
        }
        else
        {
            node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);

            //return root;
        }
        return root;
    }
}


int main()
{
    node *root = NULL;
    root = insert(root,12);
    root = insert(root,5);
    root = insert(root,3);
    root = insert(root,1);
    root = insert(root,7);
    root = insert(root,9);
    root = insert(root,8);
    root = insert(root,11);
    root = insert(root,15);
    root = insert(root,13);
    root = insert(root,14);
    root = insert(root,17);
    root = insert(root,20);
    root = insert(root,18);
    cout<<"PreOrder: "<<endl;
    PreOrder(root);
    root = Delete(root,13);
    cout<<endl<<"something deleted"<<endl;
    PreOrder(root);
    return 0;
}



