#include <iostream>
using namespace std;

int main(){

    int n = 6;
    int array[5] = {1, 3, 4, 5, 6};

    int sum = 0;
    int arraySum = 0;

    for(int i = 1; i<= n; i++){
        sum+= i;
    }

    for(int j = 0; j< 5; j++){
        arraySum += array[j];
    }

    cout<<"All Numbers are present except: "<<sum - arraySum;


    return 0;
}