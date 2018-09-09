#include<iostream>

using namespace std;

typedef struct node{
int value;
node *next;
}node;

node *head = NULL;

void insertAtHead(int v)
{
node *ptr = (node *)malloc(sizeof(node));
ptr->value = v;
if(head == NULL)
    head = ptr;
else{
ptr->next = head;
head = ptr;
}

}

void insertAtEnd(int v)
{
    node *ptr = (node*)malloc(sizeof(node));
    ptr->value = v;
    if(head == NULL){
        head = ptr;
    }else{
        node * counter = head;
        while(counter->next!=NULL){
        counter = counter->next;
        }
        counter->next = ptr;

    }
}

void insertBetween(int v,int after)
{
    node *ptr = (node*)malloc(sizeof(node));
    ptr->value = v;
    node *counter;
    while(counter->value!=after)
    {
        counter = counter->next;
    }
    ptr->next = counter->next;
    counter->next = ptr;

}

void print()
{
        node * counter = head;
        while(counter!=NULL){
        cout<<counter->value<<endl;
        counter = counter->next;
        }


    }


    void deleteBetween(int value)
    {
        node *counter =  head;
        while((counter->next)->value!=value){
            counter = counter->next;
        }
        node *p = counter->next;
        counter->next = (counter->next)->next;
        free(p);
    }

void deleteAtStart()
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    }else{
    node *p = head;
    head = p->next;
    free(p);
    }
}

void deleteAtEnd()
{
    if(head == NULL){
        cout<<"List is empty"<<endl;
    }else{
        node *p = head;
        while((p->next)->next !=NULL)
        {
            p = p->next;
        }
        free(p->next);
        p->next = NULL;

    }
}


int main()
{
    insertAtHead(20);
    insertAtHead(10);
    insertAtEnd(30);
    insertAtEnd(40);
    insertBetween(35,30);
    deleteBetween(20);
    //deleteAtStart();
  //  deleteAtEnd();
    print();
}
