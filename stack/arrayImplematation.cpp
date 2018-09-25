#include<iostream>
#define MAX_SIZE 101

using namespace std;

int a[MAX_SIZE];
int top = -1;

void push(int n){
if(top == MAX_SIZE-1){
cout<<" Stack OverFlow... \n";
return ;
}

a[++top]=n;
}

void pop(){
top--;
}

int isEmpty(){

if(top==-1){
    return 1;
}else{
    return 0;
}

}

int returntop(){
return a[top];
}

void print(){

for(int i=0;i<=top;i++){
cout<<a[i]<<" ";
}
cout<<"\n";
}


int main(){
push(1);
print();
push(2);
print();
push(3);
print();
cout<<"top :"<<returntop();
pop();
cout<<"\n";
print();
int res = isEmpty();
if(res==1){
cout<<"Stack is Empty\n";
}else{
cout<<"Stack is not Empty\n";
}
return 0;
}
