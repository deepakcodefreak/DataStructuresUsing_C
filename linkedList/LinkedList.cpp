#include<iostream>

using namespace std;

typedef struct node{
int value;
struct node *link;
}node;


void insertAtEnd(int k,node **start){
node *p = (node*)malloc(sizeof(node));
p->value = k;
p->link = NULL;
node *counter = *start;

while(counter->link != NULL){
    counter = counter->link;
}

counter->link = p;

}

void insertAtBegin(int k,node **start){
node *p = (node*)malloc(sizeof(node));
p->value = k;
p->link = *start;
*start = p;
}

void print(node *start){
node *counter = start;
while(counter!=NULL){
cout<<counter->value<<endl;
counter = counter->link;

}

}

void printReverse(node *start){
node *counter = start;
node *previous;

while(counter->link!=NULL){
    counter = counter->link;
}

while(previous->link!=counter){
cout<<previous->value;
}

}
int main(){

 node *head = (node*)malloc(sizeof(node));
 head->value = 100;

 insertAtBegin(200,&head);
 insertAtBegin(300,&head);
 insertAtEnd(50,&head);
 print(head);
 printReverse(head);




}
