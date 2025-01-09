#include <iostream>
using namespace std;

// Question: Peak Index in a Mountain Array

// You are given a mountain array `arr`, and you need to return the index `i` where the peak of the mountain occurs. 
// The peak is the point where the array elements first start decreasing.
//
// Example:
// Input: arr = [0, 2, 3, 4, 5, 3, 1]
// Output: 4
//
// Note:
// - You must solve it using binary search algorithms for optimal performance.
// - The input array is guaranteed to be a mountain array.

int main(){

 int arr[7] = {0, 2, 3, 4, 5, 3, 1};
 int n = sizeof(arr)/sizeof(arr[0]);

 int start = 1;
 int end = n-2;
 int mid;

while(start <= end){
   mid = start + (end - start)/2;
   
   //if the arr[mid] is greater than the arr[mid - 1] and arr[mid] is greater than the arr[mid + 1] then for sure mid is the peak Index so we can just return the mid as an output.
   if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
      cout<<"The peak is at index: "<<mid;
      break;
   }
   //if mid is not the peak Index then we check whether the arr[mid] is greater than the arr[mid - 1] or not if yes that means the left side from the mid is sorted so, we have to search the peak in the right.
   else if(arr[mid] > arr[mid - 1]){
      start = mid + 1;
   }
   //if the above else if if not executed then this will get executed which means the right side from the mid is sorted so we have to search the peak in the left.
   else{
      end = mid - 1;
   }
}

//if th peak is not there at all we can return -1 as an output
return -1;


}

