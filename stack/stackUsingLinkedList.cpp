#include<iostream>

using namespace std;

class node{
public:
int value;
node *next;
};

node *head = NULL;

void insertfunction(int v)
{
node *ptr = (node*)malloc(sizeof(node));
ptr->value = v;

if(head == NULL)
{
    ptr->next = NULL;
}else{
    ptr->next = head;
}
head = ptr;
}

void deletefunction()
{
if(head == NULL)
{
    cout<<"List Empty\n";
}else{
    node *p = head;
    head = head->next;
    free(p);
}

}

void pop()
{
if(head == NULL)
{
    cout<<"List Empty\n";
}else{
    node *p = head;
    head = head->next;
    cout<<"value poped : "<<p->value<<endl;
    free(p);

}

}

void deleteStack()
{
    node *counter = head;
    node *pre;
    while(counter!=NULL)
    {
        pre = counter;
        counter = counter->next;
        free(pre);
    }
    head = NULL;
}
void printstack()
{
    //cout<<head->value;
   if(head == NULL)
   {
        cout<<"Stack is empty\n";
   }else{
     //cout<<head->value;
     node *counter = head;
    while(counter!=NULL)
    {
        cout<<counter->value<<endl;
        counter = counter->next;
    }
   }

}

int main()
{
    insertfunction(10);
    insertfunction(20);
    insertfunction(30);
    pop();
    deleteStack();
    printstack();
    return 0;
}
