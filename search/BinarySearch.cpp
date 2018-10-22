#include<iostream>

using namespace std;


void bin_search(int a[],int N,int item)
{

    int l=0,u,m;
    u = N-1;
    m=(l+u)/2;


    while(l<=u)
    {
    m = (l+u)/2;
    if(item==a[m])
    {
        cout<<"Search Successful at index "<<m;
        return;
    }
    else if(item<a[m])
        u = m-1;

    else
        l = m+1;

    }

    cout<<"Search Unsuccessfull";

}

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    bin_search(a,10,7);
    return 0;
}
