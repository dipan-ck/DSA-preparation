#include <iostream>
using namespace std;

int main(){

    //Linear Search: If the element is present in the array then it will return the index.

    int findNumber = 25;

   int array[10] = {12, 45, 2345, 23, 56, 43, 25, 54, 66, 98};

   for(int i = 0; i<10; i++){
    if(array[i] == findNumber){
        cout<<"Element found at index: "<<i<<endl;
        break;
    }
   }
   cout<<"Not found";
   return 0;

}
