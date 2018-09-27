#include<iostream>

using namespace std;

int main()
{
     int a[5]={100,90,80,70,50};
     int n= 5;

     for(int i=0;i<=n-2;i++)
     {
        int iMin = i;

        for(int j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[iMin])
            iMin = j;
        }

        int temp;
        temp=a[i];
        a[i]=a[iMin];
        a[iMin]=temp;
     }

        for(int i=0;i<=4;i++)
        {
            cout<<a[i]<<" ";


return 0;
}



