#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char a[50];
    cout<<"Enter your name\n";
    scanf("%[^\n]",a);
    int n=0;
    while(a[n]!='\0')
    {
        n++;
    }

    int j=0;
    int k=n-1;
     //cout<<a[k];
    for(int z=0;z<=n/2;z++){
        if(j<k){
          int temp;
          temp=a[j];
          a[j]=a[k];
          a[k]=temp;
          j++;
          k--;
        }else{
            break;
        }
    }


    cout<<a;

    return 0;
}
