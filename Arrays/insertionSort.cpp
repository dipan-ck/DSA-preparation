#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j>0; j--){
             if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
             }else{
                break;
             }
        }
        }
}

void reverseInsertionSort(int arr[], int n){
    for(int i = n-2; i >=0; i--){
        for(int j = i; j<= n-1; j++){
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j+1]);
            }else{
                break;
            }
            }
        }
    }


int main(){

int arr[5] = {4, 3, 5, 1, 2};
int n = sizeof(arr)/sizeof(arr[0]);


insertionSort(arr, n);
reverseInsertionSort(arr, n);


for(int j = 0; j< n; j++){
    cout<<arr[j]<< " ";
}

    return 0;
}