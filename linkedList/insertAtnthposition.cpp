#include<iostream>

using namespace std;

class node{
public:
    int data;
    node *next;
};

node *head = NULL;

void insert(int data,int n)
{
    node *temp1 = new node();
      temp1->data = data;
    if(n==1){
     temp1->next = head;
     head = temp1;
     return ;
    }

    node* temp2 = new node();
    temp2 = head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }

    temp1->next = temp2->next;
    temp2->next = temp1;


}


void print(){
    node *temp = head;
    cout<<"\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int n,p;
    for(int i=0;i<=4;i++)
    {
        cout<<"\nEnter number and position to insert\n";
        cin>>n>>p;
        insert(n,p);
        print();
     }
    return 0;
}
