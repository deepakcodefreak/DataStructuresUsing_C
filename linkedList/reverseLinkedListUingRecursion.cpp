#include<iostream>

using namespace std;


class node{
public:
int data;
node *next;
};

node *head = NULL;

void insert(int data){
node *temp = new node();
temp->data = data;

    temp->next = head;
    head = temp;

}

void print(){

node *counter=head;

while(counter!=NULL){
    cout<<counter->data<<" ";
    counter=counter->next;
}

}

void reverse(node *p){

    if(p->next==NULL){
        head = p;
        return ;
    }

    reverse(p->next);
    node *q = p->next;
    q->next = p;
    p->next = NULL;
}


int main(){
insert(5);
insert(4);
insert(3);
insert(2);
insert(1);
print();
reverse(head);
cout<<endl;
print();
return 0;
}
