#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void selection_sort(int a[],int n)
{
    int i,j,min_index;

    for(i=0;i<=n-2;i++)
    {
        min_index = i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[min_index]>a[j])
            min_index = j;
        }
        swap(&a[min_index],&a[i]);
    }
}

int main()
{
    int a[5] = {64,42,7,94,19};
    selection_sort(a,5);
    for(int j=0;j<=4;j++)
    {
        cout<<a[j]<<endl;
    }
}
