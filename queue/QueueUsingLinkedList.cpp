#include<iostream>

using namespace std;

class node{
public:
    int data;
    node *next;
};


node *head = NULL;
node *tail = NULL;

void enqueue(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = NULL;

    if(tail==NULL&& head==NULL)
    {
        head = newnode;
        tail = newnode;
    }
        tail->next = newnode;
        tail=newnode;

}

void dequeue()
{
    if(tail==NULL)
    {
        cout<<"Queue is empty\n";
        return ;
    }else if(tail==head){
        tail=NULL;
        free(head);
    }

    else{
        node *temp=head;
        head=head->next;
        free(temp);
    }
}

void printQueue()
{
    node *counter = head;
    cout<<"\n";
    while(counter!=NULL)
    {
        cout<<counter->data<<" ";
        counter=counter->next;
    }

}

int getFront()
{
    return head->data;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    printQueue();
    dequeue();
    printQueue();
    cout<<"\nFront:"<<head->data;
    return 0;
}
