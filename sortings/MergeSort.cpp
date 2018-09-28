#include<iostream>
#include<array>

using namespace std;


void Merge(int* L,int* R,int* A,int iL,int iR)
{

    int i=0;
    int j=0;
    int k=0;


    while(i<iL && j<iR)
    {
        if(L[i]<R[j])
        {
            A[k]=L[i];
            i++;
        }else{
            A[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<iL)
    {
        A[k]=L[i];i++;k++;
    }

    while(j<iR)
    {
        A[k]=R[j];j++;k++;
    }
}

void MergeSort(int *A,int n)
{
    //cout<<n;
    if(n<2) return ;

    int mid = n/2;
    int Left[mid];
    int Right[n-mid];

    for(int i=0;i<mid;i++)
    {
        Left[i] = A[i];
    }

    for(int i=mid;i<n;i++)
    {
        Right[i-mid] = A[i];
    }

    MergeSort(Left,mid);
    MergeSort(Right,n-mid);
    Merge(Left,Right,A,mid,n-mid);

}

int main()
{
    int A[]={8,7,4,9,3,5,2,1,10,11};
    int n = sizeof(A)/4;
    MergeSort(A,n);

    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}


