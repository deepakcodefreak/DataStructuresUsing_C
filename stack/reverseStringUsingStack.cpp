#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;



class Stack{
 private:
    int a[51];
    int top=-1;
 public:
     void push(int n){
        a[++top]=n;
      }

     int pop(){
         int x = a[top--];
        return x;
      }

     void print(){
        for(int i=0;i<=top;i++){
            //cout<<a[i]<<" ";
            printf("%c",a[i]);
        }
      }
    int returntop(){
        return top;
    }
};


int main(){
Stack mystack;
char name[20];

cout<<"Enter your name\n";
//cin.get(name,14);
scanf("%[^\n]",name);      //super most important...
int n = 0;
    while (name[n] != '\0')
    {
        ++n;
    }



for(int i=0;i<n;i++){
    mystack.push(name[i]);
}

for(int i=0;i<n;i++){
name[i]=mystack.pop();
}

for(int i=0;i<n;i++){
cout<<name[i];
}
cout<<endl;


return 0;
}
