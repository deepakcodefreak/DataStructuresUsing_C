#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *head = NULL;

void insert(int n)
{
node *temp = new node();
node *temp2 = new node();
temp->data = n;
temp->next = NULL;
temp2 = head;

if(head==NULL){
     temp->next = head;
     head = temp;
     return ;
    }


while(temp2->next!=NULL)
{
    temp2 = temp2->next;

}
    temp2->next = temp;


}

void print(){
node *temp = new node();
temp = head;
while(temp!=NULL){
   cout<<temp->data;
   temp = temp->next;
}

}

void deleteatn(int n){
//node *temp = new node();
node *temp2 = new node();
temp2 = head;
//temp = head;

for(int i=0;i<n-2;i++)
{
    temp2 = temp2->next;
}

temp2->next = (temp2->next)->next;
delete temp2;

}


int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    print();
    deleteatn(2);
    cout<<"\n";
    print();
    return 0;
}
