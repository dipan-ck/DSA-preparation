#include<iostream>
using namespace std;

/**
 * A conveyor belt has packages that must be shipped from one port to another within days days.
 *
 * The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). 
 * We may not load more weight than the maximum weight capacity of the ship.
 *
 * Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.
 */

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int days = 5;

    int start = 0;
    int end = 0;
    int mid;
    int ans;

    for(int i = 0; i<n; i++){
        end += arr[i];
        start = max(start, arr[i]);
    }

    while(start <= end){
        mid = start + (end - start)/2;

        int count;
        int sum = 0;
         
         for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum >= mid){
                count++;
                sum = arr[i];
            }
         }
         if(count <= days){
            ans = mid;
            end = mid - 1;
         }else{
            start = mid = 1;
         }

    }

    return ans;
}