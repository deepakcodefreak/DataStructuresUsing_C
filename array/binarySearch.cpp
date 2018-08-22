#include<iostream>

using namespace std;

int binarySearch(int value , int array[9]){

int length = 9;

int start = 0;
int last = 8;



for(int i=start;i<=last;i++){
     int mid = (start+last)/2;
  if(value == array[mid]){

return mid;
}
else if(value<array[mid]){
    last = mid;


}else if(value>array[mid]){
        start = mid+1;
}

}


}



int main(){

int arr[9] = {1,2,3,4,5,6,7,8,9};
cout<<"searched number is at index "<<binarySearch(4,arr);

return 0;
}

