#include<iostream>

using namespace std;

class node{

    public:

    int data;
    node *pre;
    node *next;
};

 node *head = NULL;
 node *tail = NULL;

void insertAtBegning(int data){
    node *newnode = new node();
    newnode->data = data;
    newnode->next=  NULL;
    newnode->pre=  NULL;

    if(head==NULL){
        head = newnode;
        return ;
    }

    head->pre = newnode;
    newnode->next=head;
    head = newnode;
}

void print(){
node *counter = head;
while(counter!=NULL){
cout<<counter->data<<" ";
counter = counter->next;
}

}

void printReverse(){
node *counter = head;

while(counter->next!=NULL){
counter = counter->next;
}

while(counter!=NULL){
cout<<counter->data;
counter = counter->pre;
}

}


int main()
{

insertAtBegning(5);
insertAtBegning(4);
insertAtBegning(3);
insertAtBegning(2);
insertAtBegning(1);
print();
cout<<endl;
printReverse();
return 0;
}
