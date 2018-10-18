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

node* find(node *root,int data)
{
    if(root == NULL) return root;
    else if(data == root->data) return root;
    else if(data<root->data) return find(root->left,data);
    else  return find(root->right,data);
}


node* getSuccessor(node *root,int data)
{
    node *current = find(root,data);
    if(current == NULL) return NULL;
    else if(current->right != NULL) return findMin(current->right);
    else {
    node* successor = NULL;
    node* ancestor = root;

    while(ancestor!=current){

        if(current->data<ancestor->data)
        {
            successor = ancestor;
            ancestor = ancestor->left;
        }
        else
        {
            ancestor = ancestor->right;
        }


    }
    return successor;

    }
}



int main()
{
    node *root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,8);
    root = insert(root,6);
    root = insert(root,12);
    root = insert(root,11);
    root = insert(root,20);
    root = insert(root,17);
    root = insert(root,16);
    root = insert(root,25);
    root = insert(root,27);
    node* temp = getSuccessor(root,10);
    cout<<temp->data;
    return 0;
}



