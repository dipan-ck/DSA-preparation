#include <iostream>
using namespace std;

//An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
int main(){
int num = 14;

if(num == 1) return true;   // Special case: 1 is an ugly number by definition.

while(num != 0) {
    if(num % 2 == 0) {
        num /= 2;  // Keep dividing by 2 until it is no longer divisible by 2.
    }

    if(num % 3 == 0) {
        num /= 3;  // Keep dividing by 3 until it is no longer divisible by 3.
    }

    if(num % 5 == 0) {
        num /= 5;  // Keep dividing by 5 until it is no longer divisible by 5.
    }

    if(num == 1) return true;  // If we reach 1, it means the number was reduced to 1 by only dividing by 2, 3, or 5.

    return false;   // If no conditions are met and we're still not 1, it's not an ugly number.
}


}