#include <iostream>
using namespace std;

int main(){

    int array[1000]= {0,1};

    int num = 10; //finding the 10th fibonacci number

    for(int i = 2; i <= num; i++){
      array[i] = array[i-2] + array[i-1];
    }

    cout<<"The "<< num<<"th fibonacci number is: "<<array[num]<<endl;

  for(int j = 0 ; j<=num; j++){
    cout<<array[j]<<" ";
  }


    return 0;
}