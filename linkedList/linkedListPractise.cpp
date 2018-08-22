#include<iostream>

using namespace std;
typedef struct node {
int value;
node *link;
}node;


int main(){
node n1;
    node * head = &n1;
    head->value = 15;
    head->link = NULL;
    cout<<head->value;
return 0;
}
