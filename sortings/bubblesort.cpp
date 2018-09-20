#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main()
{

int a[]={2,4,1,5,3,7};
int n = sizeof(a)/sizeof(int);

for(int k=0;k<=n-1;k++)
{
    int flag=0;
    for(int i=0;i<=n-k-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(&a[i],&a[i+1]);
            flag=1;
        }
    }
    if(flag==0)
    break;
}

for(int j=0;j<=n-1;j++)
{
    cout<<a[j]<<endl;
}


return 0;

}
