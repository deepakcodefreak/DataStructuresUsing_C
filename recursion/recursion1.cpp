#include<iostream>

using namespace std;

int sum(int a){
if(a==1){
return a;
}

int s = a + sum(a-1);
return s;
}

int main(){

cout<<sum(3);

}

