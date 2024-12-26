#include<iostream> 
#include<climits>
using namespace std;

int main(){
    
//find the second largest element in an array
    int firstLargest = INT_MIN; 
    int secondLargest = INT_MIN;

  int arr[6] = {23, 67, 89, 23, 82, 45};

   for(int i = 0; i<6; i++){
    if(arr[i] > firstLargest){
        firstLargest = arr[i];
    }
   } 

for(int j = 0; j<6; j++){
    if(arr[j] == firstLargest) continue;
    if(arr[j] > secondLargest){
        secondLargest = arr[j];
    }
}

cout<<secondLargest;

    return 0;
}