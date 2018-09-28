#include<iostream>

using namespace std;

int main()
{
    int a[5]={7,2,4,1,5};
    int hole;
    int n=5;

    for(int i=1;i<n;i++)
    {
        int value = a[i];
        hole = i;

        while(hole>0&&a[hole-1]>value)
        {
            a[hole] = a[hole-1];
            hole = hole-1;
        }

        a[hole]  = value;
    }


    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
