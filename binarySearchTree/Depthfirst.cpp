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

void PostOrder(node *root)
{
    if(root == NULL) return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(node *root)
{
    if(root == NULL) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
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

    cout<<"PreOrder: "<<endl;
    PreOrder(root);

    cout<<"\n\nPostOrder: "<<endl;
    PostOrder(root);

    cout<<"\n\ninOrder: "<<endl;
    inOrder(root);


    return 0;
}



