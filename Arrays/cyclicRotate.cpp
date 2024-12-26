#include <iostream>
using namespace std;

int main(){
//Cyclic Rotate: Given an array arr, rotate the array by one position in clock-wise direction.

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


int lastElement  = arr[(sizeof(arr)/sizeof(arr[0])) - 1];


for(int i = 9; i >= 0; i--){
    arr[i] = arr[i - 1];
}

arr[0] = lastElement;

for(int j = 0; j<= 9; j++){
    cout<<arr[j]<<" ";
}

    return 0;
}