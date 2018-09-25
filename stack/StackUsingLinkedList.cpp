#include<iostream>

using namespace std;

class node{
public:
    int data;
    node *next;
};

node *top = NULL;

void push(int data){
node *newnode = new node();
newnode->data = data;
newnode->next = top;
top = newnode;
}

void pop(){
node *temp = top;
top = top->next;
free(temp);
}


void print(){
node *counter = top;

while(counter!=NULL){
cout<<counter->data<<" ";
counter = counter->next;
}

}

int returntop(){
node *counter = top;
while(counter->next!=NULL){
counter = counter->next;
}
return counter->data;
}

int main(){
push(1);
push(2);
push(3);
print();
pop();cout<<"\n";
print();cout<<"\n";
cout<<"top: "<<returntop();
return 0;
}
