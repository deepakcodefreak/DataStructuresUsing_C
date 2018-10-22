#include<iostream>

using namespace std;


int linearSearch(int a[],int n)
{
    for(int i=0;i<10;i++)
    {
        if(a[i]==n)
        {
           return i;
        }
    }

}


int main()
{
    int a[10]={22,45,9,8,7,4,6,1,2,3};
    int n;
    cout<<"Enter item to be searched\n";
    cin>>n;
    cout<<linearSearch(a,n);
    return 0;
}

