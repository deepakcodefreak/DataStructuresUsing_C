#include<iostream>
#include<array>

using namespace std;

bool isFull(void);

array <int,10> a;
int front = -1;
int rear = -1;


bool isEmpty()
{
    if(front==-1 && rear==-1)
    {
        return true;
    }
    return false;
}

void enque(int x)
{
    if(isFull()){
        {
            cout<<"Queue overflow\n";
 //           break;
        }
    }else if(front ==-1 && rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=x;

    }else{
        rear++;
        a[rear]=x;

    }

    }

void dequeue()
{
    front++;
}

int getfront()
{
    return a[front];
}


void printQueue()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<a[i]<<" ";
    }
}

bool isFull()
{
    if(rear==a.size())
    return true;
    else return false;
}

int main()
{
    enque(1);
    enque(2);
    enque(3);

    cout<<endl;
    printQueue();
    cout<<endl;
    enque(4);
    enque(5);
    enque(6);
    enque(7);
    enque(8);
    enque(9);
    enque(10);
    enque(11);

    enque(12);
    enque(15);
    printQueue();
    enque(13);
    cout<<endl;
    printQueue();
    //cout<<endl;
    //printQueue();
    //cout<<"\nFront Element: "<<getfront();
    //cout<<"\n\n"<<a.size();

    return 0;
}

