#include <iostream>
using namespace std;
int main(){

int arr[10] = {1, 5, 9, 12, 17, 23, 29, 35, 42, 50};
// int arr[4] = {1, 3, 5, 6};
int target = 7;

int start = 0;
int end = sizeof(arr)/sizeof(arr[0]) - 1;
int mid;

while(start <= end){
    mid = start + (end - start)/2;
    if(arr[mid] == target){
        cout<<"we got the Number in Index: "<<mid<<endl;
        break;
    }else if(arr[mid] < target){
        start  = mid + 1;
    }else{
        end = mid-1;
    }
}

//if you are looking for a value in in array which is sorted and its not present in the aray the start will represent the index where it should have been present 
cout<<"Its not present but if it existed it would have been in Index: "<< start;




    return 0;
}