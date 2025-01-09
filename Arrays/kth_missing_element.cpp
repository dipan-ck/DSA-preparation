#include <iostream>
using namespace std;

// Question: Kth Missing Element in an Array
// Given an array of size n, we need to find the kth missing element in the array.
// The array elements are in the range of 1 to n and all elements occur only once.
// The missing elements are in the range of 1 to n and does not repeat in the array.
// For example, if the array is {1, 2, 4, 6, 7} and k = 3, then the output is 5 (3rd missing element is 5).

int main(){

int k = 5;
 int arr[5] = {2, 3, 4, 7, 11};
 int n = sizeof(arr)/sizeof(arr[0]);

 int start = 0;
 int end = n-1;
int mid;
int ans;

while(start <= end){

    mid = start + (end - start)/2;

    if(arr[mid] - mid - 1 >= k){
        ans = mid + k;
        end = mid - 1;
    }else{
        start = mid + 1;
    }
}

cout<<"The "<<k<<"th missing element is: "<<ans;

    return 0;

}