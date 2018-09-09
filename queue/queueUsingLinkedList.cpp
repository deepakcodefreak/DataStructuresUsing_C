#include<iostream>

using namespace std;



class node {
public:
int value;
node *next;
};

node *head = NULL;
node *tail = NULL;

void enqueue(int v)
{
    node *ptr = (node*)malloc(sizeof(node));
    ptr->value = v;
    ptr->next;
    if(head == NULL)
    {
        head = ptr;
    }else{
        tail->next = ptr;

    }
     tail = ptr;
}

void dequeue()
{
    if(tail == NULL)
    {
        cout<<"List Empty"<<endl;
    }else{
        node *p = head;
        head = p->next;
        cout<<"value dequed "<<p->value<<endl;
        free(p);
    }
}


void printQueue()
{
    node *counter = head;
    while(counter!=NULL)
    {
        cout<<counter->value<<endl;
        counter = counter->next;
    }

}


int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();
printQueue();
return 0;

}
