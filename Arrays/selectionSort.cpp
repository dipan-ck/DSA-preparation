#include <iostream>
using namespace std;

void reverseSelectionSort(int array[], int n){
    int maxIndex;

    for(int i = n-1; i>=0; i--){
        maxIndex = i;
        for(int j = i-1; j >= 0; j--){
            if(array[j] > array[maxIndex]){
                maxIndex = j;
            }
            
        }
        swap(array[i], array[maxIndex]);
    }
}

void selectionSort(int array[], int n){
    int minIndex;

    for(int i = 0; i <= n-2; i++){                                                                                                                                        
        minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
        }

        swap(array[i], array[minIndex]);
    }
}
int main(){
 
 int array[6] = {6, 5, 4, 3, 1, 2};

int n = 6;

// selectionSort(array, n);

reverseSelectionSort(array, n);

for(int i = 0; i< n; i++){
    cout<< array[i]<<" ";
}

    return 0;

}
