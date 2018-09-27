#include<iostream>

using namespace std;


void printArray(int a[])
{
    for(int i=0;i<=4;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int a[5]={4,7,6,2,1};
    int n=5;
    int flag;

    for(int i=0;i<n-1;i++)
    {
        flag = 0;
        for(int i=0;i<5;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                flag=1;
            }
        }

        if(flag == 0)
        {
            break;
        }

    }





printArray(a);

return 0;

}



void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *b=*a;
    *b=temp;
}

