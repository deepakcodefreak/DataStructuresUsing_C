#include<iostream>

using namespace std;

class node{
public:
    int data;
    node *next;
};



void insert(node **head,int data,int n)
{
    node *temp1 = new node();
      temp1->data = data;
    if(n==1){
     temp1->next = *head;
     *head = temp1;
     return ;
    }

    node* temp2 = new node();
    temp2 = *head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }

    temp1->next = temp2->next;
    temp2->next = temp1;


}

void reverseList(node **head){
node *next,*current,*prev;
current = *head;
prev = NULL;

while(current != NULL){
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
}

/*
void print(node **head){
    node *temp = *head;
    cout<<"\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

*/


void print(node *p)
{
    if(p == NULL) return ;

    cout<<p->data<<" ";
    print(p->next);
}


void reversePrint(node *p){
    if(p == NULL) return ;
    reversePrint(p->next);
    cout<<p->data<<" ";
}

int main()
{
    node *head = NULL;
    int n,p;
    for(int i=0;i<=4;i++)
    {
        cout<<"\nEnter number and position to insert\n";
        cin>>n>>p;
        insert(&head,n,p);
        print(head);
     }
     reverseList(&head);
     cout<<"\n";
     print(head);
     cout<<"\n";
     reversePrint(head);
    return 0;
}

