#include<iostream>


using namespace std;

typedef struct node {
    int value;
    node *pre;
    node *next;
}node;


node *head = NULL;
node *tail = NULL;



void addtoHead(int v)
{

node *ptr;
ptr = (node *)malloc(sizeof(node));
ptr->value = v;
ptr->pre = NULL;
ptr->next = NULL;

if(head == NULL)
{
//ptr->next = NULL;
//tail = NULL;
}else{
head->pre = ptr;
ptr->next = head;

}
head = ptr;


}

void print()
{
    node *p;
    p=head;
    if(head == NULL)
    {
        cout<<"List is empty";
    }else{
        while(p!= NULL)
    {
        cout<<p->value<<endl;
        p= p->next;

    }

    }

}


void addToTail(int value){

node *ptr = (node *)malloc(sizeof(node));
ptr->value = value;

if(head == NULL){
    ptr->next = NULL;
    ptr->pre = NULL;
}else{
    node *counter = head;
    while(counter->next!=NULL)
    {

        counter = counter->next;
    }
    counter->next = ptr;
    tail = ptr;
    ptr->next = NULL;

}

}

void addBetween(int v,int after)
{

    node *ptr = (node *)malloc(sizeof(node));
    ptr->value = v;
    node *counter = head;

    while(counter->value!= after)
    {
        counter = counter->next;
    }
    node *nextLevel = counter->next;
    counter->next = ptr;
    ptr->pre = counter;
    nextLevel->pre = ptr;
    ptr->next = nextLevel;

}

void deleteAtHead()
{

node *p = head;
head = head->next;
head->pre = NULL;
free(p);
}

void deleteAtTail()
{
    node *counter = head;
    while(counter->next!=NULL)
    {
        counter = counter->next;
    }

    node *p = counter;
    (p->pre)->next = NULL;
    free(p);

}

void deleteBetween(int value)
{
    node *counter = head;
    while(counter->value != value)
    {
        counter = counter->next;
    }

    (counter->pre)->next = counter->next;
    (counter->next)->pre = counter->pre;
    free(counter);

}

int main()
{

addtoHead(20);
addtoHead(10);
addToTail(30);
addBetween(25,20);
/*deleteAtHead();
deleteAtTail();*/
deleteBetween(20);
print();
return 0;
}

