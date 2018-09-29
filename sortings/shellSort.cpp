#include<iostream>

using namespace std;


void shellSort(int L[],int length)
{
    int gap = length/2;

    while(gap>0)
    {
        int j=0;

        for(int i=gap;i<length;i++)
        {
            int temp  = L[i];

            for(j=i;j>=gap && L[j-gap]>temp;j-=gap)
            {
                L[j]=L[j-gap];
            }
            L[j] = temp;
        }

        gap = gap/2;
    }
}



int main()
{
    int A[]={1,5,3,2,4,7,0};
    shellSort(A,7);

    for(int i=0;i<=6;i++)
    {
        cout<<A[i]<<" ";
    }


    return 0;
}


