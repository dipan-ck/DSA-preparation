#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i = n-2; i>=0; i--){

        bool swapped = false;

       for(int j = 0; j<= i; j++){
        if(arr[j] > arr[j + 1]){
            swap(arr[j], arr[j + 1]);
            swapped = true;
        }

       }
       if(swapped == false){
            break;

       }
    }
}

void reverseBubbleSort(int arr[], int n){

    for(int i = 1; i < n-2; i++){
        int swapped = false;
        for(int j = n-1; j >= i; j--){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
    
}

int main(){

    int arr[5] = {3, 2, 1, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);


//   bubbleSort(arr, n);
  reverseBubbleSort(arr, n);

  for(int i = 0; i < n; i++){
    cout<<arr[i]<< " ";
  }

    return 0;
}