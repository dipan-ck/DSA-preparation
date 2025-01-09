#include <iostream>
using namespace std;

// Find Minimum in Rotated Sorted Array
// Suppose an array of length n is rotated between 1 and n times. For example, the array [0, 1, 2, 4, 5, 6, 7] might become [4, 5, 6, 7, 0, 1, 2].

// Find the minimum element.

// You can assume no duplicate exists in the array.

// Note:

// Although the problem statement does not mention anything about how the array is rotated, we can assume that the rotation is done in a circular manner, i.e. the last element of the array becomes the first element after rotation. E.g. [1, 2, 3] rotated by 2 positions is [3, 1, 2].

int main(){
int arr[7] = {4, 5, 6, 7, 0, 1, 2};
int n = sizeof(arr)/sizeof(arr[0]);

int start = 0;
int end =  n - 1;
int mid;
int ans = arr[0]; //intilialising ans with first element because if an already non rotated sorted array is given the 1st element will be th minimum so we can directly return it.

while(start <= end){

mid = start + (end - start)/2;

//if the mid element is greater than arr[0] that means that the left side of the array is sorted and it is in Increasingorder so to find the minimum value we have to move to right side. even when arr[mid] == arr[0] it will still look in the rigt side.
if(arr[mid] >= arr[0]){
   start = mid + 1;
}
//If the mid element is smaller than arr[0] that means that the right side of the array is sorted and it will be also in Increasing order. to find the minimum value we have to move to left side.
else{
   ans = arr[mid];
   end = mid - 1;
}
}

cout<<"The Minimum Element is: "<<ans;
}

