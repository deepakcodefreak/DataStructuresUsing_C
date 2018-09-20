#include<iostream>

using namespace std;

class arrayStack{
public:
    int capacity;
    int top;
    int  *arr;
}

arrayStack* createStack(int cap)
{
    arrayStack *Stack = (arrayStack*)malloc(sizef(arrayStack));
    Stack->capacity = cap;
    Stack->top = -1;
    Stack->arr = (arrayStack*)malloc(sizeof(int)*cap);
    return Stack;
}


void isFull(arrayStack *Stack)
{
    if(top == Stack->capacity-1)
    {
        return 1;
    }else{
        return 0;
    }
}

void isEmpty(arrayStack *Stack)
{
    if(top == -1)
    {
        return 1;
    }else{
        return 0;
    }
}
