#include<iostream>

using namespace std;

typedef struct arrayStack
{
    int top;
    int capacity;
    int *arr;
}arrayStack;

arrayStack* createStack(int cap)
{
    arrayStack *stack;
    stack = (arrayStack*)malloc(sizeof(arrayStack));
    stack->capacity = cap;
    stack->top= -1;
    stack->arr = (int*)malloc((stack->capacity)*(sizeof(int)));
    return stack;

}

int isFull(arrayStack *stack)
{
    if(stack->top == stack->capacity-1)
    {
            return 1;
    }else{
        return 0;
    }

}

int isEmpty(arrayStack *stack)
{
    if(stack->top == -1)
    {
            return 1;
    }else{
        return 0;
    }

}

void push(arrayStack *stack,int value)
{
    if(!isFull(stack))
    {
        stack->top = stack->top + 1;
        stack->arr[stack->top] = value;
    }else{
        cout<<'OVERFLOW'<<endl;
    }

}

int pop(arrayStack *stack)
{
    int item;
    if(isEmpty(stack))
    {
        return -1;
    }else{

        item = stack->arr[stack->top];
        stack->top--;
        return item;
    }
}


int main()
{

arrayStack *myStack ;
myStack = createStack(4);

while(1)
{

cout<<"Enter 1 if you want to push\n";
cout<<"Enter 2 if you want to pop\n";
cout<<"Enter 3 if you want to Exit\n";
int item;
cin>>item;

switch(item)
{

case 1:

int value;
cout<<"Enter you want to push\n";
cin>>value;
push(myStack,value);
break;

case 2:

if(isEmpty(myStack))
{
    cout<<"Stack is Empty\n";
}else{
    cout<<pop(myStack)<<endl;
}
break;

case 3:

exit(0);


}




}

}

